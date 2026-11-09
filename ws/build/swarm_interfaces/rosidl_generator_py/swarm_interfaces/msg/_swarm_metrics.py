# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_interfaces:msg/SwarmMetrics.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'active_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SwarmMetrics(type):
    """Metaclass of message 'SwarmMetrics'."""

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
                'swarm_interfaces.msg.SwarmMetrics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__swarm_metrics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__swarm_metrics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__swarm_metrics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__swarm_metrics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__swarm_metrics

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from swarm_interfaces.msg import UavMetric
            if UavMetric.__class__._TYPE_SUPPORT is None:
                UavMetric.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SwarmMetrics(metaclass=Metaclass_SwarmMetrics):
    """Message class 'SwarmMetrics'."""

    __slots__ = [
        '_header',
        '_active_count',
        '_active_ids',
        '_detections_mean_60s',
        '_latency_mean_60s',
        '_latency_max_60s',
        '_samples_in_window',
        '_window_capacity',
        '_coverage_ratio',
        '_ugv_weighted_coverage',
        '_redundancy_score',
        '_planner_cycle_us',
        '_planner_deadline_misses',
        '_clamped_references',
        '_clock_hz',
        '_sim_time_s',
        '_uavs',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'active_count': 'uint32',
        'active_ids': 'sequence<uint32>',
        'detections_mean_60s': 'double',
        'latency_mean_60s': 'double',
        'latency_max_60s': 'double',
        'samples_in_window': 'uint32',
        'window_capacity': 'uint32',
        'coverage_ratio': 'double',
        'ugv_weighted_coverage': 'double',
        'redundancy_score': 'double',
        'planner_cycle_us': 'double',
        'planner_deadline_misses': 'uint32',
        'clamped_references': 'uint32',
        'clock_hz': 'double',
        'sim_time_s': 'double',
        'uavs': 'sequence<swarm_interfaces/UavMetric>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['swarm_interfaces', 'msg'], 'UavMetric')),  # noqa: E501
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
        self.active_count = kwargs.get('active_count', int())
        self.active_ids = array.array('I', kwargs.get('active_ids', []))
        self.detections_mean_60s = kwargs.get('detections_mean_60s', float())
        self.latency_mean_60s = kwargs.get('latency_mean_60s', float())
        self.latency_max_60s = kwargs.get('latency_max_60s', float())
        self.samples_in_window = kwargs.get('samples_in_window', int())
        self.window_capacity = kwargs.get('window_capacity', int())
        self.coverage_ratio = kwargs.get('coverage_ratio', float())
        self.ugv_weighted_coverage = kwargs.get('ugv_weighted_coverage', float())
        self.redundancy_score = kwargs.get('redundancy_score', float())
        self.planner_cycle_us = kwargs.get('planner_cycle_us', float())
        self.planner_deadline_misses = kwargs.get('planner_deadline_misses', int())
        self.clamped_references = kwargs.get('clamped_references', int())
        self.clock_hz = kwargs.get('clock_hz', float())
        self.sim_time_s = kwargs.get('sim_time_s', float())
        self.uavs = kwargs.get('uavs', [])

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
        if self.active_count != other.active_count:
            return False
        if self.active_ids != other.active_ids:
            return False
        if self.detections_mean_60s != other.detections_mean_60s:
            return False
        if self.latency_mean_60s != other.latency_mean_60s:
            return False
        if self.latency_max_60s != other.latency_max_60s:
            return False
        if self.samples_in_window != other.samples_in_window:
            return False
        if self.window_capacity != other.window_capacity:
            return False
        if self.coverage_ratio != other.coverage_ratio:
            return False
        if self.ugv_weighted_coverage != other.ugv_weighted_coverage:
            return False
        if self.redundancy_score != other.redundancy_score:
            return False
        if self.planner_cycle_us != other.planner_cycle_us:
            return False
        if self.planner_deadline_misses != other.planner_deadline_misses:
            return False
        if self.clamped_references != other.clamped_references:
            return False
        if self.clock_hz != other.clock_hz:
            return False
        if self.sim_time_s != other.sim_time_s:
            return False
        if self.uavs != other.uavs:
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
    def active_count(self):
        """Message field 'active_count'."""
        return self._active_count

    @active_count.setter
    def active_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'active_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'active_count' field must be an unsigned integer in [0, 4294967295]"
        self._active_count = value

    @builtins.property
    def active_ids(self):
        """Message field 'active_ids'."""
        return self._active_ids

    @active_ids.setter
    def active_ids(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'active_ids' array.array() must have the type code of 'I'"
                self._active_ids = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'active_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._active_ids = array.array('I', value)

    @builtins.property
    def detections_mean_60s(self):
        """Message field 'detections_mean_60s'."""
        return self._detections_mean_60s

    @detections_mean_60s.setter
    def detections_mean_60s(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'detections_mean_60s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'detections_mean_60s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._detections_mean_60s = value

    @builtins.property
    def latency_mean_60s(self):
        """Message field 'latency_mean_60s'."""
        return self._latency_mean_60s

    @latency_mean_60s.setter
    def latency_mean_60s(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latency_mean_60s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latency_mean_60s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latency_mean_60s = value

    @builtins.property
    def latency_max_60s(self):
        """Message field 'latency_max_60s'."""
        return self._latency_max_60s

    @latency_max_60s.setter
    def latency_max_60s(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latency_max_60s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latency_max_60s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latency_max_60s = value

    @builtins.property
    def samples_in_window(self):
        """Message field 'samples_in_window'."""
        return self._samples_in_window

    @samples_in_window.setter
    def samples_in_window(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'samples_in_window' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'samples_in_window' field must be an unsigned integer in [0, 4294967295]"
        self._samples_in_window = value

    @builtins.property
    def window_capacity(self):
        """Message field 'window_capacity'."""
        return self._window_capacity

    @window_capacity.setter
    def window_capacity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'window_capacity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'window_capacity' field must be an unsigned integer in [0, 4294967295]"
        self._window_capacity = value

    @builtins.property
    def coverage_ratio(self):
        """Message field 'coverage_ratio'."""
        return self._coverage_ratio

    @coverage_ratio.setter
    def coverage_ratio(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'coverage_ratio' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'coverage_ratio' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._coverage_ratio = value

    @builtins.property
    def ugv_weighted_coverage(self):
        """Message field 'ugv_weighted_coverage'."""
        return self._ugv_weighted_coverage

    @ugv_weighted_coverage.setter
    def ugv_weighted_coverage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ugv_weighted_coverage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ugv_weighted_coverage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ugv_weighted_coverage = value

    @builtins.property
    def redundancy_score(self):
        """Message field 'redundancy_score'."""
        return self._redundancy_score

    @redundancy_score.setter
    def redundancy_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'redundancy_score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'redundancy_score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._redundancy_score = value

    @builtins.property
    def planner_cycle_us(self):
        """Message field 'planner_cycle_us'."""
        return self._planner_cycle_us

    @planner_cycle_us.setter
    def planner_cycle_us(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'planner_cycle_us' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'planner_cycle_us' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._planner_cycle_us = value

    @builtins.property
    def planner_deadline_misses(self):
        """Message field 'planner_deadline_misses'."""
        return self._planner_deadline_misses

    @planner_deadline_misses.setter
    def planner_deadline_misses(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'planner_deadline_misses' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'planner_deadline_misses' field must be an unsigned integer in [0, 4294967295]"
        self._planner_deadline_misses = value

    @builtins.property
    def clamped_references(self):
        """Message field 'clamped_references'."""
        return self._clamped_references

    @clamped_references.setter
    def clamped_references(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'clamped_references' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'clamped_references' field must be an unsigned integer in [0, 4294967295]"
        self._clamped_references = value

    @builtins.property
    def clock_hz(self):
        """Message field 'clock_hz'."""
        return self._clock_hz

    @clock_hz.setter
    def clock_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'clock_hz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'clock_hz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._clock_hz = value

    @builtins.property
    def sim_time_s(self):
        """Message field 'sim_time_s'."""
        return self._sim_time_s

    @sim_time_s.setter
    def sim_time_s(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sim_time_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sim_time_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sim_time_s = value

    @builtins.property
    def uavs(self):
        """Message field 'uavs'."""
        return self._uavs

    @uavs.setter
    def uavs(self, value):
        if self._check_fields:
            from swarm_interfaces.msg import UavMetric
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
                 all(isinstance(v, UavMetric) for v in value) and
                 True), \
                "The 'uavs' field must be a set or sequence and each value of type 'UavMetric'"
        self._uavs = value
