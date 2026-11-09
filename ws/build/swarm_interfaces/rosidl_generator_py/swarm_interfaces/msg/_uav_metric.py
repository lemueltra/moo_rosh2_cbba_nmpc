# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_interfaces:msg/UavMetric.idl
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


class Metaclass_UavMetric(type):
    """Metaclass of message 'UavMetric'."""

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
                'swarm_interfaces.msg.UavMetric')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uav_metric
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uav_metric
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uav_metric
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uav_metric
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uav_metric

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UavMetric(metaclass=Metaclass_UavMetric):
    """Message class 'UavMetric'."""

    __slots__ = [
        '_header',
        '_drone_id',
        '_active',
        '_mode',
        '_x',
        '_y',
        '_yaw',
        '_z',
        '_vx',
        '_vy',
        '_vz',
        '_speed_3d',
        '_yaw_rate',
        '_has_link',
        '_nearest_ugv_id',
        '_ugv_distance_m',
        '_latency_ms',
        '_los',
        '_detections_now',
        '_sensor_streams',
        '_position_error',
        '_yaw_error',
        '_has_reference',
        '_reference_relative',
        '_reference_z_requested',
        '_reference_z_clamped',
        '_reference_z_clamped_flag',
        '_reference_age_s',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'drone_id': 'uint32',
        'active': 'boolean',
        'mode': 'uint8',
        'x': 'double',
        'y': 'double',
        'yaw': 'double',
        'z': 'double',
        'vx': 'double',
        'vy': 'double',
        'vz': 'double',
        'speed_3d': 'double',
        'yaw_rate': 'double',
        'has_link': 'boolean',
        'nearest_ugv_id': 'uint32',
        'ugv_distance_m': 'double',
        'latency_ms': 'double',
        'los': 'boolean',
        'detections_now': 'uint32',
        'sensor_streams': 'uint32',
        'position_error': 'double',
        'yaw_error': 'double',
        'has_reference': 'boolean',
        'reference_relative': 'boolean',
        'reference_z_requested': 'double',
        'reference_z_clamped': 'double',
        'reference_z_clamped_flag': 'boolean',
        'reference_age_s': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.drone_id = kwargs.get('drone_id', int())
        self.active = kwargs.get('active', bool())
        self.mode = kwargs.get('mode', int())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.yaw = kwargs.get('yaw', float())
        self.z = kwargs.get('z', float())
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.vz = kwargs.get('vz', float())
        self.speed_3d = kwargs.get('speed_3d', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.has_link = kwargs.get('has_link', bool())
        self.nearest_ugv_id = kwargs.get('nearest_ugv_id', int())
        self.ugv_distance_m = kwargs.get('ugv_distance_m', float())
        self.latency_ms = kwargs.get('latency_ms', float())
        self.los = kwargs.get('los', bool())
        self.detections_now = kwargs.get('detections_now', int())
        self.sensor_streams = kwargs.get('sensor_streams', int())
        self.position_error = kwargs.get('position_error', float())
        self.yaw_error = kwargs.get('yaw_error', float())
        self.has_reference = kwargs.get('has_reference', bool())
        self.reference_relative = kwargs.get('reference_relative', bool())
        self.reference_z_requested = kwargs.get('reference_z_requested', float())
        self.reference_z_clamped = kwargs.get('reference_z_clamped', float())
        self.reference_z_clamped_flag = kwargs.get('reference_z_clamped_flag', bool())
        self.reference_age_s = kwargs.get('reference_age_s', float())

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
        if self.drone_id != other.drone_id:
            return False
        if self.active != other.active:
            return False
        if self.mode != other.mode:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.yaw != other.yaw:
            return False
        if self.z != other.z:
            return False
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.vz != other.vz:
            return False
        if self.speed_3d != other.speed_3d:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.has_link != other.has_link:
            return False
        if self.nearest_ugv_id != other.nearest_ugv_id:
            return False
        if self.ugv_distance_m != other.ugv_distance_m:
            return False
        if self.latency_ms != other.latency_ms:
            return False
        if self.los != other.los:
            return False
        if self.detections_now != other.detections_now:
            return False
        if self.sensor_streams != other.sensor_streams:
            return False
        if self.position_error != other.position_error:
            return False
        if self.yaw_error != other.yaw_error:
            return False
        if self.has_reference != other.has_reference:
            return False
        if self.reference_relative != other.reference_relative:
            return False
        if self.reference_z_requested != other.reference_z_requested:
            return False
        if self.reference_z_clamped != other.reference_z_clamped:
            return False
        if self.reference_z_clamped_flag != other.reference_z_clamped_flag:
            return False
        if self.reference_age_s != other.reference_age_s:
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
    def active(self):
        """Message field 'active'."""
        return self._active

    @active.setter
    def active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'active' field must be of type 'bool'"
        self._active = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value

    @builtins.property
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vx = value

    @builtins.property
    def vy(self):
        """Message field 'vy'."""
        return self._vy

    @vy.setter
    def vy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vy = value

    @builtins.property
    def vz(self):
        """Message field 'vz'."""
        return self._vz

    @vz.setter
    def vz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vz = value

    @builtins.property
    def speed_3d(self):
        """Message field 'speed_3d'."""
        return self._speed_3d

    @speed_3d.setter
    def speed_3d(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_3d' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_3d' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_3d = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_rate = value

    @builtins.property
    def has_link(self):
        """Message field 'has_link'."""
        return self._has_link

    @has_link.setter
    def has_link(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_link' field must be of type 'bool'"
        self._has_link = value

    @builtins.property
    def nearest_ugv_id(self):
        """Message field 'nearest_ugv_id'."""
        return self._nearest_ugv_id

    @nearest_ugv_id.setter
    def nearest_ugv_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'nearest_ugv_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'nearest_ugv_id' field must be an unsigned integer in [0, 4294967295]"
        self._nearest_ugv_id = value

    @builtins.property
    def ugv_distance_m(self):
        """Message field 'ugv_distance_m'."""
        return self._ugv_distance_m

    @ugv_distance_m.setter
    def ugv_distance_m(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ugv_distance_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ugv_distance_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ugv_distance_m = value

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

    @builtins.property
    def detections_now(self):
        """Message field 'detections_now'."""
        return self._detections_now

    @detections_now.setter
    def detections_now(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'detections_now' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'detections_now' field must be an unsigned integer in [0, 4294967295]"
        self._detections_now = value

    @builtins.property
    def sensor_streams(self):
        """Message field 'sensor_streams'."""
        return self._sensor_streams

    @sensor_streams.setter
    def sensor_streams(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_streams' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensor_streams' field must be an unsigned integer in [0, 4294967295]"
        self._sensor_streams = value

    @builtins.property
    def position_error(self):
        """Message field 'position_error'."""
        return self._position_error

    @position_error.setter
    def position_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'position_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position_error = value

    @builtins.property
    def yaw_error(self):
        """Message field 'yaw_error'."""
        return self._yaw_error

    @yaw_error.setter
    def yaw_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'yaw_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_error = value

    @builtins.property
    def has_reference(self):
        """Message field 'has_reference'."""
        return self._has_reference

    @has_reference.setter
    def has_reference(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_reference' field must be of type 'bool'"
        self._has_reference = value

    @builtins.property
    def reference_relative(self):
        """Message field 'reference_relative'."""
        return self._reference_relative

    @reference_relative.setter
    def reference_relative(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'reference_relative' field must be of type 'bool'"
        self._reference_relative = value

    @builtins.property
    def reference_z_requested(self):
        """Message field 'reference_z_requested'."""
        return self._reference_z_requested

    @reference_z_requested.setter
    def reference_z_requested(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'reference_z_requested' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'reference_z_requested' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._reference_z_requested = value

    @builtins.property
    def reference_z_clamped(self):
        """Message field 'reference_z_clamped'."""
        return self._reference_z_clamped

    @reference_z_clamped.setter
    def reference_z_clamped(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'reference_z_clamped' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'reference_z_clamped' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._reference_z_clamped = value

    @builtins.property
    def reference_z_clamped_flag(self):
        """Message field 'reference_z_clamped_flag'."""
        return self._reference_z_clamped_flag

    @reference_z_clamped_flag.setter
    def reference_z_clamped_flag(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'reference_z_clamped_flag' field must be of type 'bool'"
        self._reference_z_clamped_flag = value

    @builtins.property
    def reference_age_s(self):
        """Message field 'reference_age_s'."""
        return self._reference_age_s

    @reference_age_s.setter
    def reference_age_s(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'reference_age_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'reference_age_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._reference_age_s = value
