# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_world_interfaces:msg/SensorDetectionArray.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorDetectionArray(type):
    """Metaclass of message 'SensorDetectionArray'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('swarm_world_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'swarm_world_interfaces.msg.SensorDetectionArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_detection_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_detection_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_detection_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_detection_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_detection_array

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from swarm_world_interfaces.msg import SensorDetection
            if SensorDetection.__class__._TYPE_SUPPORT is None:
                SensorDetection.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorDetectionArray(metaclass=Metaclass_SensorDetectionArray):
    """Message class 'SensorDetectionArray'."""

    __slots__ = [
        '_header',
        '_sensor_id',
        '_parent_actor_id',
        '_sensor_type',
        '_range',
        '_horizontal_fov_deg',
        '_upper_fov_deg',
        '_lower_fov_deg',
        '_detections',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sensor_id': 'uint32',
        'parent_actor_id': 'uint32',
        'sensor_type': 'string',
        'range': 'double',
        'horizontal_fov_deg': 'double',
        'upper_fov_deg': 'double',
        'lower_fov_deg': 'double',
        'detections': 'sequence<swarm_world_interfaces/SensorDetection>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['swarm_world_interfaces', 'msg'], 'SensorDetection')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.sensor_id = kwargs.get('sensor_id', int())
        self.parent_actor_id = kwargs.get('parent_actor_id', int())
        self.sensor_type = kwargs.get('sensor_type', str())
        self.range = kwargs.get('range', float())
        self.horizontal_fov_deg = kwargs.get('horizontal_fov_deg', float())
        self.upper_fov_deg = kwargs.get('upper_fov_deg', float())
        self.lower_fov_deg = kwargs.get('lower_fov_deg', float())
        self.detections = kwargs.get('detections', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.sensor_id != other.sensor_id:
            return False
        if self.parent_actor_id != other.parent_actor_id:
            return False
        if self.sensor_type != other.sensor_type:
            return False
        if self.range != other.range:
            return False
        if self.horizontal_fov_deg != other.horizontal_fov_deg:
            return False
        if self.upper_fov_deg != other.upper_fov_deg:
            return False
        if self.lower_fov_deg != other.lower_fov_deg:
            return False
        if self.detections != other.detections:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensor_id' field must be an unsigned integer in [0, 4294967295]"
        self._sensor_id = value

    @builtins.property
    def parent_actor_id(self):
        """Message field 'parent_actor_id'."""
        return self._parent_actor_id

    @parent_actor_id.setter
    def parent_actor_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'parent_actor_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'parent_actor_id' field must be an unsigned integer in [0, 4294967295]"
        self._parent_actor_id = value

    @builtins.property
    def sensor_type(self):
        """Message field 'sensor_type'."""
        return self._sensor_type

    @sensor_type.setter
    def sensor_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'sensor_type' field must be of type 'str'"
        self._sensor_type = value

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'range' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._range = value

    @builtins.property
    def horizontal_fov_deg(self):
        """Message field 'horizontal_fov_deg'."""
        return self._horizontal_fov_deg

    @horizontal_fov_deg.setter
    def horizontal_fov_deg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'horizontal_fov_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'horizontal_fov_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._horizontal_fov_deg = value

    @builtins.property
    def upper_fov_deg(self):
        """Message field 'upper_fov_deg'."""
        return self._upper_fov_deg

    @upper_fov_deg.setter
    def upper_fov_deg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'upper_fov_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'upper_fov_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._upper_fov_deg = value

    @builtins.property
    def lower_fov_deg(self):
        """Message field 'lower_fov_deg'."""
        return self._lower_fov_deg

    @lower_fov_deg.setter
    def lower_fov_deg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'lower_fov_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lower_fov_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lower_fov_deg = value

    @builtins.property
    def detections(self):
        """Message field 'detections'."""
        return self._detections

    @detections.setter
    def detections(self, value):
        if self._check_fields:
            from swarm_world_interfaces.msg import SensorDetection
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, SensorDetection) for v in value) and
                 True), \
                "The 'detections' field must be a set or sequence and each value of type 'SensorDetection'"
        self._detections = value
