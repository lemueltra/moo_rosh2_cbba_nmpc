# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_interfaces:msg/ExpectedMetricsNoGt.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'lateral_deviation_mean'
# Member 'lateral_deviation_min'
# Member 'lateral_deviation_max'
# Member 'yaw_deviation_mean'
# Member 'yaw_rate_mean'
# Member 'predicted_path_deviation_mean'
# Member 'total_objects_count'
# Member 'average_objects_count'
# Member 'interval_average_objects_count'
# Member 'object_count_per_class'
# Member 'max_distance_per_class'
# Member 'size_cv_per_class'
# Member 'position_jitter_per_class'
# Member 'heading_inversion_rate_per_class'
# Member 'track_fragments_per_class'
# Member 'track_purity_per_class'
# Member 'track_length_per_class'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExpectedMetricsNoGt(type):
    """Metaclass of message 'ExpectedMetricsNoGt'."""

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
                'swarm_interfaces.msg.ExpectedMetricsNoGt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__expected_metrics_no_gt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__expected_metrics_no_gt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__expected_metrics_no_gt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__expected_metrics_no_gt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__expected_metrics_no_gt

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


class ExpectedMetricsNoGt(metaclass=Metaclass_ExpectedMetricsNoGt):
    """Message class 'ExpectedMetricsNoGt'."""

    __slots__ = [
        '_header',
        '_model_based',
        '_params_hash',
        '_window_sec',
        '_warming_up',
        '_n_frames_in_window',
        '_classes',
        '_lateral_deviation_mean',
        '_lateral_deviation_min',
        '_lateral_deviation_max',
        '_yaw_deviation_mean',
        '_yaw_rate_mean',
        '_predicted_path_deviation_mean',
        '_total_objects_count',
        '_average_objects_count',
        '_interval_average_objects_count',
        '_all_object_count',
        '_object_count_per_class',
        '_max_distance_per_class',
        '_meas_to_tracked_latency_ms',
        '_prediction_latency_ms',
        '_total_latency_ms',
        '_cross_confirm_rate',
        '_unconfirmed_rate',
        '_missed_by_other_rate',
        '_class_disagree_rate',
        '_range_discrepancy_mean',
        '_range_discrepancy_p95',
        '_size_cv_per_class',
        '_position_jitter_per_class',
        '_heading_inversion_rate_per_class',
        '_track_fragments_per_class',
        '_track_purity_per_class',
        '_track_length_per_class',
        '_ece_proxy',
        '_unconfirmed_high_conf_rate',
        '_critical_inconsistency_per_s',
        '_sync_offset_ms',
        '_sensor_health',
        '_flight_regime_altitude_m',
        '_flight_regime_speed_mps',
        '_flight_regime_climb_rate_mps',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'model_based': 'boolean',
        'params_hash': 'string',
        'window_sec': 'double',
        'warming_up': 'boolean',
        'n_frames_in_window': 'uint32',
        'classes': 'sequence<string>',
        'lateral_deviation_mean': 'sequence<double>',
        'lateral_deviation_min': 'sequence<double>',
        'lateral_deviation_max': 'sequence<double>',
        'yaw_deviation_mean': 'sequence<double>',
        'yaw_rate_mean': 'sequence<double>',
        'predicted_path_deviation_mean': 'sequence<double>',
        'total_objects_count': 'sequence<double>',
        'average_objects_count': 'sequence<double>',
        'interval_average_objects_count': 'sequence<double>',
        'all_object_count': 'double',
        'object_count_per_class': 'sequence<double>',
        'max_distance_per_class': 'sequence<double>',
        'meas_to_tracked_latency_ms': 'double',
        'prediction_latency_ms': 'double',
        'total_latency_ms': 'double',
        'cross_confirm_rate': 'double',
        'unconfirmed_rate': 'double',
        'missed_by_other_rate': 'double',
        'class_disagree_rate': 'double',
        'range_discrepancy_mean': 'double',
        'range_discrepancy_p95': 'double',
        'size_cv_per_class': 'sequence<double>',
        'position_jitter_per_class': 'sequence<double>',
        'heading_inversion_rate_per_class': 'sequence<double>',
        'track_fragments_per_class': 'sequence<double>',
        'track_purity_per_class': 'sequence<double>',
        'track_length_per_class': 'sequence<double>',
        'ece_proxy': 'double',
        'unconfirmed_high_conf_rate': 'double',
        'critical_inconsistency_per_s': 'double',
        'sync_offset_ms': 'double',
        'sensor_health': 'sequence<boolean>',
        'flight_regime_altitude_m': 'double',
        'flight_regime_speed_mps': 'double',
        'flight_regime_climb_rate_mps': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.model_based = kwargs.get('model_based', bool())
        self.params_hash = kwargs.get('params_hash', str())
        self.window_sec = kwargs.get('window_sec', float())
        self.warming_up = kwargs.get('warming_up', bool())
        self.n_frames_in_window = kwargs.get('n_frames_in_window', int())
        self.classes = kwargs.get('classes', [])
        self.lateral_deviation_mean = array.array('d', kwargs.get('lateral_deviation_mean', []))
        self.lateral_deviation_min = array.array('d', kwargs.get('lateral_deviation_min', []))
        self.lateral_deviation_max = array.array('d', kwargs.get('lateral_deviation_max', []))
        self.yaw_deviation_mean = array.array('d', kwargs.get('yaw_deviation_mean', []))
        self.yaw_rate_mean = array.array('d', kwargs.get('yaw_rate_mean', []))
        self.predicted_path_deviation_mean = array.array('d', kwargs.get('predicted_path_deviation_mean', []))
        self.total_objects_count = array.array('d', kwargs.get('total_objects_count', []))
        self.average_objects_count = array.array('d', kwargs.get('average_objects_count', []))
        self.interval_average_objects_count = array.array('d', kwargs.get('interval_average_objects_count', []))
        self.all_object_count = kwargs.get('all_object_count', float())
        self.object_count_per_class = array.array('d', kwargs.get('object_count_per_class', []))
        self.max_distance_per_class = array.array('d', kwargs.get('max_distance_per_class', []))
        self.meas_to_tracked_latency_ms = kwargs.get('meas_to_tracked_latency_ms', float())
        self.prediction_latency_ms = kwargs.get('prediction_latency_ms', float())
        self.total_latency_ms = kwargs.get('total_latency_ms', float())
        self.cross_confirm_rate = kwargs.get('cross_confirm_rate', float())
        self.unconfirmed_rate = kwargs.get('unconfirmed_rate', float())
        self.missed_by_other_rate = kwargs.get('missed_by_other_rate', float())
        self.class_disagree_rate = kwargs.get('class_disagree_rate', float())
        self.range_discrepancy_mean = kwargs.get('range_discrepancy_mean', float())
        self.range_discrepancy_p95 = kwargs.get('range_discrepancy_p95', float())
        self.size_cv_per_class = array.array('d', kwargs.get('size_cv_per_class', []))
        self.position_jitter_per_class = array.array('d', kwargs.get('position_jitter_per_class', []))
        self.heading_inversion_rate_per_class = array.array('d', kwargs.get('heading_inversion_rate_per_class', []))
        self.track_fragments_per_class = array.array('d', kwargs.get('track_fragments_per_class', []))
        self.track_purity_per_class = array.array('d', kwargs.get('track_purity_per_class', []))
        self.track_length_per_class = array.array('d', kwargs.get('track_length_per_class', []))
        self.ece_proxy = kwargs.get('ece_proxy', float())
        self.unconfirmed_high_conf_rate = kwargs.get('unconfirmed_high_conf_rate', float())
        self.critical_inconsistency_per_s = kwargs.get('critical_inconsistency_per_s', float())
        self.sync_offset_ms = kwargs.get('sync_offset_ms', float())
        self.sensor_health = kwargs.get('sensor_health', [])
        self.flight_regime_altitude_m = kwargs.get('flight_regime_altitude_m', float())
        self.flight_regime_speed_mps = kwargs.get('flight_regime_speed_mps', float())
        self.flight_regime_climb_rate_mps = kwargs.get('flight_regime_climb_rate_mps', float())

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
        if self.model_based != other.model_based:
            return False
        if self.params_hash != other.params_hash:
            return False
        if self.window_sec != other.window_sec:
            return False
        if self.warming_up != other.warming_up:
            return False
        if self.n_frames_in_window != other.n_frames_in_window:
            return False
        if self.classes != other.classes:
            return False
        if self.lateral_deviation_mean != other.lateral_deviation_mean:
            return False
        if self.lateral_deviation_min != other.lateral_deviation_min:
            return False
        if self.lateral_deviation_max != other.lateral_deviation_max:
            return False
        if self.yaw_deviation_mean != other.yaw_deviation_mean:
            return False
        if self.yaw_rate_mean != other.yaw_rate_mean:
            return False
        if self.predicted_path_deviation_mean != other.predicted_path_deviation_mean:
            return False
        if self.total_objects_count != other.total_objects_count:
            return False
        if self.average_objects_count != other.average_objects_count:
            return False
        if self.interval_average_objects_count != other.interval_average_objects_count:
            return False
        if self.all_object_count != other.all_object_count:
            return False
        if self.object_count_per_class != other.object_count_per_class:
            return False
        if self.max_distance_per_class != other.max_distance_per_class:
            return False
        if self.meas_to_tracked_latency_ms != other.meas_to_tracked_latency_ms:
            return False
        if self.prediction_latency_ms != other.prediction_latency_ms:
            return False
        if self.total_latency_ms != other.total_latency_ms:
            return False
        if self.cross_confirm_rate != other.cross_confirm_rate:
            return False
        if self.unconfirmed_rate != other.unconfirmed_rate:
            return False
        if self.missed_by_other_rate != other.missed_by_other_rate:
            return False
        if self.class_disagree_rate != other.class_disagree_rate:
            return False
        if self.range_discrepancy_mean != other.range_discrepancy_mean:
            return False
        if self.range_discrepancy_p95 != other.range_discrepancy_p95:
            return False
        if self.size_cv_per_class != other.size_cv_per_class:
            return False
        if self.position_jitter_per_class != other.position_jitter_per_class:
            return False
        if self.heading_inversion_rate_per_class != other.heading_inversion_rate_per_class:
            return False
        if self.track_fragments_per_class != other.track_fragments_per_class:
            return False
        if self.track_purity_per_class != other.track_purity_per_class:
            return False
        if self.track_length_per_class != other.track_length_per_class:
            return False
        if self.ece_proxy != other.ece_proxy:
            return False
        if self.unconfirmed_high_conf_rate != other.unconfirmed_high_conf_rate:
            return False
        if self.critical_inconsistency_per_s != other.critical_inconsistency_per_s:
            return False
        if self.sync_offset_ms != other.sync_offset_ms:
            return False
        if self.sensor_health != other.sensor_health:
            return False
        if self.flight_regime_altitude_m != other.flight_regime_altitude_m:
            return False
        if self.flight_regime_speed_mps != other.flight_regime_speed_mps:
            return False
        if self.flight_regime_climb_rate_mps != other.flight_regime_climb_rate_mps:
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
    def model_based(self):
        """Message field 'model_based'."""
        return self._model_based

    @model_based.setter
    def model_based(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'model_based' field must be of type 'bool'"
        self._model_based = value

    @builtins.property
    def params_hash(self):
        """Message field 'params_hash'."""
        return self._params_hash

    @params_hash.setter
    def params_hash(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'params_hash' field must be of type 'str'"
        self._params_hash = value

    @builtins.property
    def window_sec(self):
        """Message field 'window_sec'."""
        return self._window_sec

    @window_sec.setter
    def window_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'window_sec' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'window_sec' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._window_sec = value

    @builtins.property
    def warming_up(self):
        """Message field 'warming_up'."""
        return self._warming_up

    @warming_up.setter
    def warming_up(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'warming_up' field must be of type 'bool'"
        self._warming_up = value

    @builtins.property
    def n_frames_in_window(self):
        """Message field 'n_frames_in_window'."""
        return self._n_frames_in_window

    @n_frames_in_window.setter
    def n_frames_in_window(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'n_frames_in_window' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'n_frames_in_window' field must be an unsigned integer in [0, 4294967295]"
        self._n_frames_in_window = value

    @builtins.property
    def classes(self):
        """Message field 'classes'."""
        return self._classes

    @classes.setter
    def classes(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'classes' field must be a set or sequence and each value of type 'str'"
        self._classes = value

    @builtins.property
    def lateral_deviation_mean(self):
        """Message field 'lateral_deviation_mean'."""
        return self._lateral_deviation_mean

    @lateral_deviation_mean.setter
    def lateral_deviation_mean(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'lateral_deviation_mean' array.array() must have the type code of 'd'"
                self._lateral_deviation_mean = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'lateral_deviation_mean' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._lateral_deviation_mean = array.array('d', value)

    @builtins.property
    def lateral_deviation_min(self):
        """Message field 'lateral_deviation_min'."""
        return self._lateral_deviation_min

    @lateral_deviation_min.setter
    def lateral_deviation_min(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'lateral_deviation_min' array.array() must have the type code of 'd'"
                self._lateral_deviation_min = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'lateral_deviation_min' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._lateral_deviation_min = array.array('d', value)

    @builtins.property
    def lateral_deviation_max(self):
        """Message field 'lateral_deviation_max'."""
        return self._lateral_deviation_max

    @lateral_deviation_max.setter
    def lateral_deviation_max(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'lateral_deviation_max' array.array() must have the type code of 'd'"
                self._lateral_deviation_max = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'lateral_deviation_max' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._lateral_deviation_max = array.array('d', value)

    @builtins.property
    def yaw_deviation_mean(self):
        """Message field 'yaw_deviation_mean'."""
        return self._yaw_deviation_mean

    @yaw_deviation_mean.setter
    def yaw_deviation_mean(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'yaw_deviation_mean' array.array() must have the type code of 'd'"
                self._yaw_deviation_mean = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'yaw_deviation_mean' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._yaw_deviation_mean = array.array('d', value)

    @builtins.property
    def yaw_rate_mean(self):
        """Message field 'yaw_rate_mean'."""
        return self._yaw_rate_mean

    @yaw_rate_mean.setter
    def yaw_rate_mean(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'yaw_rate_mean' array.array() must have the type code of 'd'"
                self._yaw_rate_mean = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'yaw_rate_mean' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._yaw_rate_mean = array.array('d', value)

    @builtins.property
    def predicted_path_deviation_mean(self):
        """Message field 'predicted_path_deviation_mean'."""
        return self._predicted_path_deviation_mean

    @predicted_path_deviation_mean.setter
    def predicted_path_deviation_mean(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'predicted_path_deviation_mean' array.array() must have the type code of 'd'"
                self._predicted_path_deviation_mean = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'predicted_path_deviation_mean' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._predicted_path_deviation_mean = array.array('d', value)

    @builtins.property
    def total_objects_count(self):
        """Message field 'total_objects_count'."""
        return self._total_objects_count

    @total_objects_count.setter
    def total_objects_count(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'total_objects_count' array.array() must have the type code of 'd'"
                self._total_objects_count = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'total_objects_count' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._total_objects_count = array.array('d', value)

    @builtins.property
    def average_objects_count(self):
        """Message field 'average_objects_count'."""
        return self._average_objects_count

    @average_objects_count.setter
    def average_objects_count(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'average_objects_count' array.array() must have the type code of 'd'"
                self._average_objects_count = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'average_objects_count' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._average_objects_count = array.array('d', value)

    @builtins.property
    def interval_average_objects_count(self):
        """Message field 'interval_average_objects_count'."""
        return self._interval_average_objects_count

    @interval_average_objects_count.setter
    def interval_average_objects_count(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'interval_average_objects_count' array.array() must have the type code of 'd'"
                self._interval_average_objects_count = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'interval_average_objects_count' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._interval_average_objects_count = array.array('d', value)

    @builtins.property
    def all_object_count(self):
        """Message field 'all_object_count'."""
        return self._all_object_count

    @all_object_count.setter
    def all_object_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'all_object_count' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'all_object_count' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._all_object_count = value

    @builtins.property
    def object_count_per_class(self):
        """Message field 'object_count_per_class'."""
        return self._object_count_per_class

    @object_count_per_class.setter
    def object_count_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'object_count_per_class' array.array() must have the type code of 'd'"
                self._object_count_per_class = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'object_count_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._object_count_per_class = array.array('d', value)

    @builtins.property
    def max_distance_per_class(self):
        """Message field 'max_distance_per_class'."""
        return self._max_distance_per_class

    @max_distance_per_class.setter
    def max_distance_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'max_distance_per_class' array.array() must have the type code of 'd'"
                self._max_distance_per_class = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'max_distance_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._max_distance_per_class = array.array('d', value)

    @builtins.property
    def meas_to_tracked_latency_ms(self):
        """Message field 'meas_to_tracked_latency_ms'."""
        return self._meas_to_tracked_latency_ms

    @meas_to_tracked_latency_ms.setter
    def meas_to_tracked_latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'meas_to_tracked_latency_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'meas_to_tracked_latency_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._meas_to_tracked_latency_ms = value

    @builtins.property
    def prediction_latency_ms(self):
        """Message field 'prediction_latency_ms'."""
        return self._prediction_latency_ms

    @prediction_latency_ms.setter
    def prediction_latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'prediction_latency_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'prediction_latency_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._prediction_latency_ms = value

    @builtins.property
    def total_latency_ms(self):
        """Message field 'total_latency_ms'."""
        return self._total_latency_ms

    @total_latency_ms.setter
    def total_latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_latency_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_latency_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_latency_ms = value

    @builtins.property
    def cross_confirm_rate(self):
        """Message field 'cross_confirm_rate'."""
        return self._cross_confirm_rate

    @cross_confirm_rate.setter
    def cross_confirm_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cross_confirm_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cross_confirm_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cross_confirm_rate = value

    @builtins.property
    def unconfirmed_rate(self):
        """Message field 'unconfirmed_rate'."""
        return self._unconfirmed_rate

    @unconfirmed_rate.setter
    def unconfirmed_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'unconfirmed_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'unconfirmed_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._unconfirmed_rate = value

    @builtins.property
    def missed_by_other_rate(self):
        """Message field 'missed_by_other_rate'."""
        return self._missed_by_other_rate

    @missed_by_other_rate.setter
    def missed_by_other_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'missed_by_other_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'missed_by_other_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._missed_by_other_rate = value

    @builtins.property
    def class_disagree_rate(self):
        """Message field 'class_disagree_rate'."""
        return self._class_disagree_rate

    @class_disagree_rate.setter
    def class_disagree_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'class_disagree_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'class_disagree_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._class_disagree_rate = value

    @builtins.property
    def range_discrepancy_mean(self):
        """Message field 'range_discrepancy_mean'."""
        return self._range_discrepancy_mean

    @range_discrepancy_mean.setter
    def range_discrepancy_mean(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'range_discrepancy_mean' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'range_discrepancy_mean' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._range_discrepancy_mean = value

    @builtins.property
    def range_discrepancy_p95(self):
        """Message field 'range_discrepancy_p95'."""
        return self._range_discrepancy_p95

    @range_discrepancy_p95.setter
    def range_discrepancy_p95(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'range_discrepancy_p95' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'range_discrepancy_p95' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._range_discrepancy_p95 = value

    @builtins.property
    def size_cv_per_class(self):
        """Message field 'size_cv_per_class'."""
        return self._size_cv_per_class

    @size_cv_per_class.setter
    def size_cv_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'size_cv_per_class' array.array() must have the type code of 'd'"
                self._size_cv_per_class = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'size_cv_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._size_cv_per_class = array.array('d', value)

    @builtins.property
    def position_jitter_per_class(self):
        """Message field 'position_jitter_per_class'."""
        return self._position_jitter_per_class

    @position_jitter_per_class.setter
    def position_jitter_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'position_jitter_per_class' array.array() must have the type code of 'd'"
                self._position_jitter_per_class = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'position_jitter_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._position_jitter_per_class = array.array('d', value)

    @builtins.property
    def heading_inversion_rate_per_class(self):
        """Message field 'heading_inversion_rate_per_class'."""
        return self._heading_inversion_rate_per_class

    @heading_inversion_rate_per_class.setter
    def heading_inversion_rate_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'heading_inversion_rate_per_class' array.array() must have the type code of 'd'"
                self._heading_inversion_rate_per_class = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'heading_inversion_rate_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._heading_inversion_rate_per_class = array.array('d', value)

    @builtins.property
    def track_fragments_per_class(self):
        """Message field 'track_fragments_per_class'."""
        return self._track_fragments_per_class

    @track_fragments_per_class.setter
    def track_fragments_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'track_fragments_per_class' array.array() must have the type code of 'd'"
                self._track_fragments_per_class = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'track_fragments_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._track_fragments_per_class = array.array('d', value)

    @builtins.property
    def track_purity_per_class(self):
        """Message field 'track_purity_per_class'."""
        return self._track_purity_per_class

    @track_purity_per_class.setter
    def track_purity_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'track_purity_per_class' array.array() must have the type code of 'd'"
                self._track_purity_per_class = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'track_purity_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._track_purity_per_class = array.array('d', value)

    @builtins.property
    def track_length_per_class(self):
        """Message field 'track_length_per_class'."""
        return self._track_length_per_class

    @track_length_per_class.setter
    def track_length_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'track_length_per_class' array.array() must have the type code of 'd'"
                self._track_length_per_class = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'track_length_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._track_length_per_class = array.array('d', value)

    @builtins.property
    def ece_proxy(self):
        """Message field 'ece_proxy'."""
        return self._ece_proxy

    @ece_proxy.setter
    def ece_proxy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ece_proxy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ece_proxy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ece_proxy = value

    @builtins.property
    def unconfirmed_high_conf_rate(self):
        """Message field 'unconfirmed_high_conf_rate'."""
        return self._unconfirmed_high_conf_rate

    @unconfirmed_high_conf_rate.setter
    def unconfirmed_high_conf_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'unconfirmed_high_conf_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'unconfirmed_high_conf_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._unconfirmed_high_conf_rate = value

    @builtins.property
    def critical_inconsistency_per_s(self):
        """Message field 'critical_inconsistency_per_s'."""
        return self._critical_inconsistency_per_s

    @critical_inconsistency_per_s.setter
    def critical_inconsistency_per_s(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'critical_inconsistency_per_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'critical_inconsistency_per_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._critical_inconsistency_per_s = value

    @builtins.property
    def sync_offset_ms(self):
        """Message field 'sync_offset_ms'."""
        return self._sync_offset_ms

    @sync_offset_ms.setter
    def sync_offset_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sync_offset_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sync_offset_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sync_offset_ms = value

    @builtins.property
    def sensor_health(self):
        """Message field 'sensor_health'."""
        return self._sensor_health

    @sensor_health.setter
    def sensor_health(self, value):
        if self._check_fields:
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'sensor_health' field must be a set or sequence and each value of type 'bool'"
        self._sensor_health = value

    @builtins.property
    def flight_regime_altitude_m(self):
        """Message field 'flight_regime_altitude_m'."""
        return self._flight_regime_altitude_m

    @flight_regime_altitude_m.setter
    def flight_regime_altitude_m(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'flight_regime_altitude_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'flight_regime_altitude_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._flight_regime_altitude_m = value

    @builtins.property
    def flight_regime_speed_mps(self):
        """Message field 'flight_regime_speed_mps'."""
        return self._flight_regime_speed_mps

    @flight_regime_speed_mps.setter
    def flight_regime_speed_mps(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'flight_regime_speed_mps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'flight_regime_speed_mps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._flight_regime_speed_mps = value

    @builtins.property
    def flight_regime_climb_rate_mps(self):
        """Message field 'flight_regime_climb_rate_mps'."""
        return self._flight_regime_climb_rate_mps

    @flight_regime_climb_rate_mps.setter
    def flight_regime_climb_rate_mps(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'flight_regime_climb_rate_mps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'flight_regime_climb_rate_mps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._flight_regime_climb_rate_mps = value
