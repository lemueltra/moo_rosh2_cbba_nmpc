# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_interfaces:msg/UavLinkLatency.idl
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


class Metaclass_UavLinkLatency(type):
    """Metaclass of message 'UavLinkLatency'."""

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
            module = import_type_support('swarm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'swarm_interfaces.msg.UavLinkLatency')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uav_link_latency
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uav_link_latency
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uav_link_latency
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uav_link_latency
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uav_link_latency

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UavLinkLatency(metaclass=Metaclass_UavLinkLatency):
    """Message class 'UavLinkLatency'."""

    __slots__ = [
        '_drone_id',
        '_ugv_id',
        '_latency_ms',
        '_distance_m',
        '_los',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'drone_id': 'uint32',
        'ugv_id': 'uint32',
        'latency_ms': 'double',
        'distance_m': 'double',
        'los': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.drone_id = kwargs.get('drone_id', int())
        self.ugv_id = kwargs.get('ugv_id', int())
        self.latency_ms = kwargs.get('latency_ms', float())
        self.distance_m = kwargs.get('distance_m', float())
        self.los = kwargs.get('los', bool())

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
        if self.drone_id != other.drone_id:
            return False
        if self.ugv_id != other.ugv_id:
            return False
        if self.latency_ms != other.latency_ms:
            return False
        if self.distance_m != other.distance_m:
            return False
        if self.los != other.los:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def drone_id(self):
        """Message field 'drone_id'."""
        return self._drone_id

    @drone_id.setter
    def drone_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'drone_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'drone_id' field must be an unsigned integer in [0, 4294967295]"
        self._drone_id = value

    @builtins.property
    def ugv_id(self):
        """Message field 'ugv_id'."""
        return self._ugv_id

    @ugv_id.setter
    def ugv_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ugv_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ugv_id' field must be an unsigned integer in [0, 4294967295]"
        self._ugv_id = value

    @builtins.property
    def latency_ms(self):
        """Message field 'latency_ms'."""
        return self._latency_ms

    @latency_ms.setter
    def latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latency_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latency_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latency_ms = value

    @builtins.property
    def distance_m(self):
        """Message field 'distance_m'."""
        return self._distance_m

    @distance_m.setter
    def distance_m(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance_m = value

    @builtins.property
    def los(self):
        """Message field 'los'."""
        return self._los

    @los.setter
    def los(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'los' field must be of type 'bool'"
        self._los = value
