# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_world_interfaces:msg/SensorDetection.idl
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


class Metaclass_SensorDetection(type):
    """Metaclass of message 'SensorDetection'."""

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
                'swarm_world_interfaces.msg.SensorDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_detection

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorDetection(metaclass=Metaclass_SensorDetection):
    """Message class 'SensorDetection'."""

    __slots__ = [
        '_actor_id',
        '_class_name',
        '_bbox_pose_world',
        '_bbox_extent',
        '_range',
        '_azimuth',
        '_elevation',
        '_occluded',
        '_partially_occluded',
        '_occlusion_ratio',
        '_aim_point',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'actor_id': 'uint32',
        'class_name': 'string',
        'bbox_pose_world': 'geometry_msgs/Pose',
        'bbox_extent': 'geometry_msgs/Vector3',
        'range': 'double',
        'azimuth': 'double',
        'elevation': 'double',
        'occluded': 'boolean',
        'partially_occluded': 'boolean',
        'occlusion_ratio': 'double',
        'aim_point': 'geometry_msgs/Point',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
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
        self.actor_id = kwargs.get('actor_id', int())
        self.class_name = kwargs.get('class_name', str())
        from geometry_msgs.msg import Pose
        self.bbox_pose_world = kwargs.get('bbox_pose_world', Pose())
        from geometry_msgs.msg import Vector3
        self.bbox_extent = kwargs.get('bbox_extent', Vector3())
        self.range = kwargs.get('range', float())
        self.azimuth = kwargs.get('azimuth', float())
        self.elevation = kwargs.get('elevation', float())
        self.occluded = kwargs.get('occluded', bool())
        self.partially_occluded = kwargs.get('partially_occluded', bool())
        self.occlusion_ratio = kwargs.get('occlusion_ratio', float())
        from geometry_msgs.msg import Point
        self.aim_point = kwargs.get('aim_point', Point())

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
        if self.actor_id != other.actor_id:
            return False
        if self.class_name != other.class_name:
            return False
        if self.bbox_pose_world != other.bbox_pose_world:
            return False
        if self.bbox_extent != other.bbox_extent:
            return False
        if self.range != other.range:
            return False
        if self.azimuth != other.azimuth:
            return False
        if self.elevation != other.elevation:
            return False
        if self.occluded != other.occluded:
            return False
        if self.partially_occluded != other.partially_occluded:
            return False
        if self.occlusion_ratio != other.occlusion_ratio:
            return False
        if self.aim_point != other.aim_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def actor_id(self):
        """Message field 'actor_id'."""
        return self._actor_id

    @actor_id.setter
    def actor_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'actor_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'actor_id' field must be an unsigned integer in [0, 4294967295]"
        self._actor_id = value

    @builtins.property
    def class_name(self):
        """Message field 'class_name'."""
        return self._class_name

    @class_name.setter
    def class_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'class_name' field must be of type 'str'"
        self._class_name = value

    @builtins.property
    def bbox_pose_world(self):
        """Message field 'bbox_pose_world'."""
        return self._bbox_pose_world

    @bbox_pose_world.setter
    def bbox_pose_world(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'bbox_pose_world' field must be a sub message of type 'Pose'"
        self._bbox_pose_world = value

    @builtins.property
    def bbox_extent(self):
        """Message field 'bbox_extent'."""
        return self._bbox_extent

    @bbox_extent.setter
    def bbox_extent(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'bbox_extent' field must be a sub message of type 'Vector3'"
        self._bbox_extent = value

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
    def azimuth(self):
        """Message field 'azimuth'."""
        return self._azimuth

    @azimuth.setter
    def azimuth(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'azimuth' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'azimuth' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._azimuth = value

    @builtins.property
    def elevation(self):
        """Message field 'elevation'."""
        return self._elevation

    @elevation.setter
    def elevation(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'elevation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'elevation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._elevation = value

    @builtins.property
    def occluded(self):
        """Message field 'occluded'."""
        return self._occluded

    @occluded.setter
    def occluded(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'occluded' field must be of type 'bool'"
        self._occluded = value

    @builtins.property
    def partially_occluded(self):
        """Message field 'partially_occluded'."""
        return self._partially_occluded

    @partially_occluded.setter
    def partially_occluded(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'partially_occluded' field must be of type 'bool'"
        self._partially_occluded = value

    @builtins.property
    def occlusion_ratio(self):
        """Message field 'occlusion_ratio'."""
        return self._occlusion_ratio

    @occlusion_ratio.setter
    def occlusion_ratio(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'occlusion_ratio' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'occlusion_ratio' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._occlusion_ratio = value

    @builtins.property
    def aim_point(self):
        """Message field 'aim_point'."""
        return self._aim_point

    @aim_point.setter
    def aim_point(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'aim_point' field must be a sub message of type 'Point'"
        self._aim_point = value
