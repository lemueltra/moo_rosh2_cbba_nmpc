# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_world_interfaces:msg/SimulationStatus.idl
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


class Metaclass_SimulationStatus(type):
    """Metaclass of message 'SimulationStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TIME_MODE_ASYNC': 0,
        'TIME_MODE_SYNC': 1,
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
                'swarm_world_interfaces.msg.SimulationStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__simulation_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__simulation_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__simulation_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__simulation_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__simulation_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TIME_MODE_ASYNC': cls.__constants['TIME_MODE_ASYNC'],
            'TIME_MODE_SYNC': cls.__constants['TIME_MODE_SYNC'],
        }

    @property
    def TIME_MODE_ASYNC(self):
        """Message constant 'TIME_MODE_ASYNC'."""
        return Metaclass_SimulationStatus.__constants['TIME_MODE_ASYNC']

    @property
    def TIME_MODE_SYNC(self):
        """Message constant 'TIME_MODE_SYNC'."""
        return Metaclass_SimulationStatus.__constants['TIME_MODE_SYNC']


class SimulationStatus(metaclass=Metaclass_SimulationStatus):
    """
    Message class 'SimulationStatus'.

    Constants:
      TIME_MODE_ASYNC
      TIME_MODE_SYNC
    """

    __slots__ = [
        '_header',
        '_time_mode',
        '_step_count',
        '_elapsed_sim_time',
        '_fixed_delta_seconds',
        '_num_active_ugvs',
        '_num_active_uavs',
        '_num_active_sensors',
        '_sync_waiting',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'time_mode': 'uint8',
        'step_count': 'uint64',
        'elapsed_sim_time': 'double',
        'fixed_delta_seconds': 'double',
        'num_active_ugvs': 'uint32',
        'num_active_uavs': 'uint32',
        'num_active_sensors': 'uint32',
        'sync_waiting': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.time_mode = kwargs.get('time_mode', int())
        self.step_count = kwargs.get('step_count', int())
        self.elapsed_sim_time = kwargs.get('elapsed_sim_time', float())
        self.fixed_delta_seconds = kwargs.get('fixed_delta_seconds', float())
        self.num_active_ugvs = kwargs.get('num_active_ugvs', int())
        self.num_active_uavs = kwargs.get('num_active_uavs', int())
        self.num_active_sensors = kwargs.get('num_active_sensors', int())
        self.sync_waiting = kwargs.get('sync_waiting', bool())

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
        if self.time_mode != other.time_mode:
            return False
        if self.step_count != other.step_count:
            return False
        if self.elapsed_sim_time != other.elapsed_sim_time:
            return False
        if self.fixed_delta_seconds != other.fixed_delta_seconds:
            return False
        if self.num_active_ugvs != other.num_active_ugvs:
            return False
        if self.num_active_uavs != other.num_active_uavs:
            return False
        if self.num_active_sensors != other.num_active_sensors:
            return False
        if self.sync_waiting != other.sync_waiting:
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
    def time_mode(self):
        """Message field 'time_mode'."""
        return self._time_mode

    @time_mode.setter
    def time_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'time_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'time_mode' field must be an unsigned integer in [0, 255]"
        self._time_mode = value

    @builtins.property
    def step_count(self):
        """Message field 'step_count'."""
        return self._step_count

    @step_count.setter
    def step_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'step_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'step_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._step_count = value

    @builtins.property
    def elapsed_sim_time(self):
        """Message field 'elapsed_sim_time'."""
        return self._elapsed_sim_time

    @elapsed_sim_time.setter
    def elapsed_sim_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'elapsed_sim_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'elapsed_sim_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._elapsed_sim_time = value

    @builtins.property
    def fixed_delta_seconds(self):
        """Message field 'fixed_delta_seconds'."""
        return self._fixed_delta_seconds

    @fixed_delta_seconds.setter
    def fixed_delta_seconds(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fixed_delta_seconds' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fixed_delta_seconds' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fixed_delta_seconds = value

    @builtins.property
    def num_active_ugvs(self):
        """Message field 'num_active_ugvs'."""
        return self._num_active_ugvs

    @num_active_ugvs.setter
    def num_active_ugvs(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_active_ugvs' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_active_ugvs' field must be an unsigned integer in [0, 4294967295]"
        self._num_active_ugvs = value

    @builtins.property
    def num_active_uavs(self):
        """Message field 'num_active_uavs'."""
        return self._num_active_uavs

    @num_active_uavs.setter
    def num_active_uavs(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_active_uavs' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_active_uavs' field must be an unsigned integer in [0, 4294967295]"
        self._num_active_uavs = value

    @builtins.property
    def num_active_sensors(self):
        """Message field 'num_active_sensors'."""
        return self._num_active_sensors

    @num_active_sensors.setter
    def num_active_sensors(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_active_sensors' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_active_sensors' field must be an unsigned integer in [0, 4294967295]"
        self._num_active_sensors = value

    @builtins.property
    def sync_waiting(self):
        """Message field 'sync_waiting'."""
        return self._sync_waiting

    @sync_waiting.setter
    def sync_waiting(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'sync_waiting' field must be of type 'bool'"
        self._sync_waiting = value
