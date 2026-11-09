# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_interfaces:msg/ExpectedMetricsGt.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'ap_per_class'
# Member 'aph_per_class'
# Member 'f1_max_per_class'
# Member 'optimal_conf_per_class'
# Member 'ratio_tp_per_class'
# Member 'ratio_fp_per_class'
# Member 'ratio_fn_per_class'
# Member 'err_dist_mean_per_class'
# Member 'err_dist_rms_per_class'
# Member 'err_yaw_mean_per_class'
# Member 'err_yaw_std_per_class'
# Member 'err_vel_mean_per_class'
# Member 'motp_per_class'
# Member 'mota_per_class'
# Member 'id_switch_per_class'
# Member 'corner_mean_per_class'
# Member 'corner_p95_per_class'
# Member 'flip_rate_per_class'
# Member 'nsurf_mean_per_class'
# Member 'confusion_values'
# Member 'cw_map_per_class'
# Member 'fn_span_mean_per_class'
# Member 'err_ate_per_class'
# Member 'err_aoe_per_class'
# Member 'err_ase_per_class'
# Member 'err_ave_per_class'
# Member 'n_gt_per_class'
# Member 'expected_tp_per_class'
# Member 'expected_fp_per_class'
# Member 'expected_fn_per_class'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExpectedMetricsGt(type):
    """Metaclass of message 'ExpectedMetricsGt'."""

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
                'swarm_interfaces.msg.ExpectedMetricsGt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__expected_metrics_gt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__expected_metrics_gt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__expected_metrics_gt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__expected_metrics_gt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__expected_metrics_gt

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


class ExpectedMetricsGt(metaclass=Metaclass_ExpectedMetricsGt):
    """Message class 'ExpectedMetricsGt'."""

    __slots__ = [
        '_header',
        '_model_based',
        '_params_hash',
        '_window_sec',
        '_warming_up',
        '_n_frames_in_window',
        '_map',
        '_maph',
        '_classes',
        '_ap_per_class',
        '_aph_per_class',
        '_f1_max_per_class',
        '_optimal_conf_per_class',
        '_ratio_tp_per_class',
        '_ratio_fp_per_class',
        '_ratio_fn_per_class',
        '_err_dist_mean_per_class',
        '_err_dist_rms_per_class',
        '_err_yaw_mean_per_class',
        '_err_yaw_std_per_class',
        '_err_vel_mean_per_class',
        '_motp_per_class',
        '_mota_per_class',
        '_id_switch_per_class',
        '_pred_ade',
        '_pred_fde',
        '_pred_miss_rate',
        '_corner_mean_per_class',
        '_corner_p95_per_class',
        '_flip_rate_per_class',
        '_mflip_rate',
        '_nsurf_mean_per_class',
        '_ece',
        '_ece_macro',
        '_confident_error_rate',
        '_confident_errors_per_frame',
        '_confusion_pairs',
        '_confusion_values',
        '_critical_fp',
        '_critical_fn',
        '_cw_map',
        '_cw_map_per_class',
        '_fn_span_mean_per_class',
        '_pass_rate_num_tp',
        '_pass_rate_num_gt_tp',
        '_pass_rate_metrics_score',
        '_err_ate_per_class',
        '_err_aoe_per_class',
        '_err_ase_per_class',
        '_err_ave_per_class',
        '_n_gt_total',
        '_expected_tp_total',
        '_expected_fp_total',
        '_expected_fn_total',
        '_n_gt_per_class',
        '_expected_tp_per_class',
        '_expected_fp_per_class',
        '_expected_fn_per_class',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'model_based': 'boolean',
        'params_hash': 'string',
        'window_sec': 'double',
        'warming_up': 'boolean',
        'n_frames_in_window': 'uint32',
        'map': 'double',
        'maph': 'double',
        'classes': 'sequence<string>',
        'ap_per_class': 'sequence<double>',
        'aph_per_class': 'sequence<double>',
        'f1_max_per_class': 'sequence<double>',
        'optimal_conf_per_class': 'sequence<double>',
        'ratio_tp_per_class': 'sequence<double>',
        'ratio_fp_per_class': 'sequence<double>',
        'ratio_fn_per_class': 'sequence<double>',
        'err_dist_mean_per_class': 'sequence<double>',
        'err_dist_rms_per_class': 'sequence<double>',
        'err_yaw_mean_per_class': 'sequence<double>',
        'err_yaw_std_per_class': 'sequence<double>',
        'err_vel_mean_per_class': 'sequence<double>',
        'motp_per_class': 'sequence<double>',
        'mota_per_class': 'sequence<double>',
        'id_switch_per_class': 'sequence<double>',
        'pred_ade': 'double',
        'pred_fde': 'double',
        'pred_miss_rate': 'double',
        'corner_mean_per_class': 'sequence<double>',
        'corner_p95_per_class': 'sequence<double>',
        'flip_rate_per_class': 'sequence<double>',
        'mflip_rate': 'double',
        'nsurf_mean_per_class': 'sequence<double>',
        'ece': 'double',
        'ece_macro': 'double',
        'confident_error_rate': 'double',
        'confident_errors_per_frame': 'double',
        'confusion_pairs': 'sequence<string>',
        'confusion_values': 'sequence<double>',
        'critical_fp': 'double',
        'critical_fn': 'double',
        'cw_map': 'double',
        'cw_map_per_class': 'sequence<double>',
        'fn_span_mean_per_class': 'sequence<double>',
        'pass_rate_num_tp': 'double',
        'pass_rate_num_gt_tp': 'double',
        'pass_rate_metrics_score': 'double',
        'err_ate_per_class': 'sequence<double>',
        'err_aoe_per_class': 'sequence<double>',
        'err_ase_per_class': 'sequence<double>',
        'err_ave_per_class': 'sequence<double>',
        'n_gt_total': 'uint32',
        'expected_tp_total': 'double',
        'expected_fp_total': 'double',
        'expected_fn_total': 'double',
        'n_gt_per_class': 'sequence<uint32>',
        'expected_tp_per_class': 'sequence<double>',
        'expected_fp_per_class': 'sequence<double>',
        'expected_fn_per_class': 'sequence<double>',
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
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
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
        self.map = kwargs.get('map', float())
        self.maph = kwargs.get('maph', float())
        self.classes = kwargs.get('classes', [])
        self.ap_per_class = array.array('d', kwargs.get('ap_per_class', []))
        self.aph_per_class = array.array('d', kwargs.get('aph_per_class', []))
        self.f1_max_per_class = array.array('d', kwargs.get('f1_max_per_class', []))
        self.optimal_conf_per_class = array.array('d', kwargs.get('optimal_conf_per_class', []))
        self.ratio_tp_per_class = array.array('d', kwargs.get('ratio_tp_per_class', []))
        self.ratio_fp_per_class = array.array('d', kwargs.get('ratio_fp_per_class', []))
        self.ratio_fn_per_class = array.array('d', kwargs.get('ratio_fn_per_class', []))
        self.err_dist_mean_per_class = array.array('d', kwargs.get('err_dist_mean_per_class', []))
        self.err_dist_rms_per_class = array.array('d', kwargs.get('err_dist_rms_per_class', []))
        self.err_yaw_mean_per_class = array.array('d', kwargs.get('err_yaw_mean_per_class', []))
        self.err_yaw_std_per_class = array.array('d', kwargs.get('err_yaw_std_per_class', []))
        self.err_vel_mean_per_class = array.array('d', kwargs.get('err_vel_mean_per_class', []))
        self.motp_per_class = array.array('d', kwargs.get('motp_per_class', []))
        self.mota_per_class = array.array('d', kwargs.get('mota_per_class', []))
        self.id_switch_per_class = array.array('d', kwargs.get('id_switch_per_class', []))
        self.pred_ade = kwargs.get('pred_ade', float())
        self.pred_fde = kwargs.get('pred_fde', float())
        self.pred_miss_rate = kwargs.get('pred_miss_rate', float())
        self.corner_mean_per_class = array.array('d', kwargs.get('corner_mean_per_class', []))
        self.corner_p95_per_class = array.array('d', kwargs.get('corner_p95_per_class', []))
        self.flip_rate_per_class = array.array('d', kwargs.get('flip_rate_per_class', []))
        self.mflip_rate = kwargs.get('mflip_rate', float())
        self.nsurf_mean_per_class = array.array('d', kwargs.get('nsurf_mean_per_class', []))
        self.ece = kwargs.get('ece', float())
        self.ece_macro = kwargs.get('ece_macro', float())
        self.confident_error_rate = kwargs.get('confident_error_rate', float())
        self.confident_errors_per_frame = kwargs.get('confident_errors_per_frame', float())
        self.confusion_pairs = kwargs.get('confusion_pairs', [])
        self.confusion_values = array.array('d', kwargs.get('confusion_values', []))
        self.critical_fp = kwargs.get('critical_fp', float())
        self.critical_fn = kwargs.get('critical_fn', float())
        self.cw_map = kwargs.get('cw_map', float())
        self.cw_map_per_class = array.array('d', kwargs.get('cw_map_per_class', []))
        self.fn_span_mean_per_class = array.array('d', kwargs.get('fn_span_mean_per_class', []))
        self.pass_rate_num_tp = kwargs.get('pass_rate_num_tp', float())
        self.pass_rate_num_gt_tp = kwargs.get('pass_rate_num_gt_tp', float())
        self.pass_rate_metrics_score = kwargs.get('pass_rate_metrics_score', float())
        self.err_ate_per_class = array.array('d', kwargs.get('err_ate_per_class', []))
        self.err_aoe_per_class = array.array('d', kwargs.get('err_aoe_per_class', []))
        self.err_ase_per_class = array.array('d', kwargs.get('err_ase_per_class', []))
        self.err_ave_per_class = array.array('d', kwargs.get('err_ave_per_class', []))
        self.n_gt_total = kwargs.get('n_gt_total', int())
        self.expected_tp_total = kwargs.get('expected_tp_total', float())
        self.expected_fp_total = kwargs.get('expected_fp_total', float())
        self.expected_fn_total = kwargs.get('expected_fn_total', float())
        self.n_gt_per_class = array.array('I', kwargs.get('n_gt_per_class', []))
        self.expected_tp_per_class = array.array('d', kwargs.get('expected_tp_per_class', []))
        self.expected_fp_per_class = array.array('d', kwargs.get('expected_fp_per_class', []))
        self.expected_fn_per_class = array.array('d', kwargs.get('expected_fn_per_class', []))

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
        if self.map != other.map:
            return False
        if self.maph != other.maph:
            return False
        if self.classes != other.classes:
            return False
        if self.ap_per_class != other.ap_per_class:
            return False
        if self.aph_per_class != other.aph_per_class:
            return False
        if self.f1_max_per_class != other.f1_max_per_class:
            return False
        if self.optimal_conf_per_class != other.optimal_conf_per_class:
            return False
        if self.ratio_tp_per_class != other.ratio_tp_per_class:
            return False
        if self.ratio_fp_per_class != other.ratio_fp_per_class:
            return False
        if self.ratio_fn_per_class != other.ratio_fn_per_class:
            return False
        if self.err_dist_mean_per_class != other.err_dist_mean_per_class:
            return False
        if self.err_dist_rms_per_class != other.err_dist_rms_per_class:
            return False
        if self.err_yaw_mean_per_class != other.err_yaw_mean_per_class:
            return False
        if self.err_yaw_std_per_class != other.err_yaw_std_per_class:
            return False
        if self.err_vel_mean_per_class != other.err_vel_mean_per_class:
            return False
        if self.motp_per_class != other.motp_per_class:
            return False
        if self.mota_per_class != other.mota_per_class:
            return False
        if self.id_switch_per_class != other.id_switch_per_class:
            return False
        if self.pred_ade != other.pred_ade:
            return False
        if self.pred_fde != other.pred_fde:
            return False
        if self.pred_miss_rate != other.pred_miss_rate:
            return False
        if self.corner_mean_per_class != other.corner_mean_per_class:
            return False
        if self.corner_p95_per_class != other.corner_p95_per_class:
            return False
        if self.flip_rate_per_class != other.flip_rate_per_class:
            return False
        if self.mflip_rate != other.mflip_rate:
            return False
        if self.nsurf_mean_per_class != other.nsurf_mean_per_class:
            return False
        if self.ece != other.ece:
            return False
        if self.ece_macro != other.ece_macro:
            return False
        if self.confident_error_rate != other.confident_error_rate:
            return False
        if self.confident_errors_per_frame != other.confident_errors_per_frame:
            return False
        if self.confusion_pairs != other.confusion_pairs:
            return False
        if self.confusion_values != other.confusion_values:
            return False
        if self.critical_fp != other.critical_fp:
            return False
        if self.critical_fn != other.critical_fn:
            return False
        if self.cw_map != other.cw_map:
            return False
        if self.cw_map_per_class != other.cw_map_per_class:
            return False
        if self.fn_span_mean_per_class != other.fn_span_mean_per_class:
            return False
        if self.pass_rate_num_tp != other.pass_rate_num_tp:
            return False
        if self.pass_rate_num_gt_tp != other.pass_rate_num_gt_tp:
            return False
        if self.pass_rate_metrics_score != other.pass_rate_metrics_score:
            return False
        if self.err_ate_per_class != other.err_ate_per_class:
            return False
        if self.err_aoe_per_class != other.err_aoe_per_class:
            return False
        if self.err_ase_per_class != other.err_ase_per_class:
            return False
        if self.err_ave_per_class != other.err_ave_per_class:
            return False
        if self.n_gt_total != other.n_gt_total:
            return False
        if self.expected_tp_total != other.expected_tp_total:
            return False
        if self.expected_fp_total != other.expected_fp_total:
            return False
        if self.expected_fn_total != other.expected_fn_total:
            return False
        if self.n_gt_per_class != other.n_gt_per_class:
            return False
        if self.expected_tp_per_class != other.expected_tp_per_class:
            return False
        if self.expected_fp_per_class != other.expected_fp_per_class:
            return False
        if self.expected_fn_per_class != other.expected_fn_per_class:
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

    @builtins.property  # noqa: A003
    def map(self):  # noqa: A003
        """Message field 'map'."""
        return self._map

    @map.setter  # noqa: A003
    def map(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'map' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'map' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._map = value

    @builtins.property
    def maph(self):
        """Message field 'maph'."""
        return self._maph

    @maph.setter
    def maph(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'maph' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'maph' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._maph = value

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
    def ap_per_class(self):
        """Message field 'ap_per_class'."""
        return self._ap_per_class

    @ap_per_class.setter
    def ap_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'ap_per_class' array.array() must have the type code of 'd'"
                self._ap_per_class = value
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
                "The 'ap_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ap_per_class = array.array('d', value)

    @builtins.property
    def aph_per_class(self):
        """Message field 'aph_per_class'."""
        return self._aph_per_class

    @aph_per_class.setter
    def aph_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'aph_per_class' array.array() must have the type code of 'd'"
                self._aph_per_class = value
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
                "The 'aph_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._aph_per_class = array.array('d', value)

    @builtins.property
    def f1_max_per_class(self):
        """Message field 'f1_max_per_class'."""
        return self._f1_max_per_class

    @f1_max_per_class.setter
    def f1_max_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'f1_max_per_class' array.array() must have the type code of 'd'"
                self._f1_max_per_class = value
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
                "The 'f1_max_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._f1_max_per_class = array.array('d', value)

    @builtins.property
    def optimal_conf_per_class(self):
        """Message field 'optimal_conf_per_class'."""
        return self._optimal_conf_per_class

    @optimal_conf_per_class.setter
    def optimal_conf_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'optimal_conf_per_class' array.array() must have the type code of 'd'"
                self._optimal_conf_per_class = value
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
                "The 'optimal_conf_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._optimal_conf_per_class = array.array('d', value)

    @builtins.property
    def ratio_tp_per_class(self):
        """Message field 'ratio_tp_per_class'."""
        return self._ratio_tp_per_class

    @ratio_tp_per_class.setter
    def ratio_tp_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'ratio_tp_per_class' array.array() must have the type code of 'd'"
                self._ratio_tp_per_class = value
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
                "The 'ratio_tp_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ratio_tp_per_class = array.array('d', value)

    @builtins.property
    def ratio_fp_per_class(self):
        """Message field 'ratio_fp_per_class'."""
        return self._ratio_fp_per_class

    @ratio_fp_per_class.setter
    def ratio_fp_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'ratio_fp_per_class' array.array() must have the type code of 'd'"
                self._ratio_fp_per_class = value
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
                "The 'ratio_fp_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ratio_fp_per_class = array.array('d', value)

    @builtins.property
    def ratio_fn_per_class(self):
        """Message field 'ratio_fn_per_class'."""
        return self._ratio_fn_per_class

    @ratio_fn_per_class.setter
    def ratio_fn_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'ratio_fn_per_class' array.array() must have the type code of 'd'"
                self._ratio_fn_per_class = value
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
                "The 'ratio_fn_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ratio_fn_per_class = array.array('d', value)

    @builtins.property
    def err_dist_mean_per_class(self):
        """Message field 'err_dist_mean_per_class'."""
        return self._err_dist_mean_per_class

    @err_dist_mean_per_class.setter
    def err_dist_mean_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'err_dist_mean_per_class' array.array() must have the type code of 'd'"
                self._err_dist_mean_per_class = value
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
                "The 'err_dist_mean_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._err_dist_mean_per_class = array.array('d', value)

    @builtins.property
    def err_dist_rms_per_class(self):
        """Message field 'err_dist_rms_per_class'."""
        return self._err_dist_rms_per_class

    @err_dist_rms_per_class.setter
    def err_dist_rms_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'err_dist_rms_per_class' array.array() must have the type code of 'd'"
                self._err_dist_rms_per_class = value
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
                "The 'err_dist_rms_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._err_dist_rms_per_class = array.array('d', value)

    @builtins.property
    def err_yaw_mean_per_class(self):
        """Message field 'err_yaw_mean_per_class'."""
        return self._err_yaw_mean_per_class

    @err_yaw_mean_per_class.setter
    def err_yaw_mean_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'err_yaw_mean_per_class' array.array() must have the type code of 'd'"
                self._err_yaw_mean_per_class = value
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
                "The 'err_yaw_mean_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._err_yaw_mean_per_class = array.array('d', value)

    @builtins.property
    def err_yaw_std_per_class(self):
        """Message field 'err_yaw_std_per_class'."""
        return self._err_yaw_std_per_class

    @err_yaw_std_per_class.setter
    def err_yaw_std_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'err_yaw_std_per_class' array.array() must have the type code of 'd'"
                self._err_yaw_std_per_class = value
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
                "The 'err_yaw_std_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._err_yaw_std_per_class = array.array('d', value)

    @builtins.property
    def err_vel_mean_per_class(self):
        """Message field 'err_vel_mean_per_class'."""
        return self._err_vel_mean_per_class

    @err_vel_mean_per_class.setter
    def err_vel_mean_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'err_vel_mean_per_class' array.array() must have the type code of 'd'"
                self._err_vel_mean_per_class = value
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
                "The 'err_vel_mean_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._err_vel_mean_per_class = array.array('d', value)

    @builtins.property
    def motp_per_class(self):
        """Message field 'motp_per_class'."""
        return self._motp_per_class

    @motp_per_class.setter
    def motp_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'motp_per_class' array.array() must have the type code of 'd'"
                self._motp_per_class = value
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
                "The 'motp_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._motp_per_class = array.array('d', value)

    @builtins.property
    def mota_per_class(self):
        """Message field 'mota_per_class'."""
        return self._mota_per_class

    @mota_per_class.setter
    def mota_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'mota_per_class' array.array() must have the type code of 'd'"
                self._mota_per_class = value
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
                "The 'mota_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._mota_per_class = array.array('d', value)

    @builtins.property
    def id_switch_per_class(self):
        """Message field 'id_switch_per_class'."""
        return self._id_switch_per_class

    @id_switch_per_class.setter
    def id_switch_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'id_switch_per_class' array.array() must have the type code of 'd'"
                self._id_switch_per_class = value
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
                "The 'id_switch_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._id_switch_per_class = array.array('d', value)

    @builtins.property
    def pred_ade(self):
        """Message field 'pred_ade'."""
        return self._pred_ade

    @pred_ade.setter
    def pred_ade(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pred_ade' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pred_ade' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pred_ade = value

    @builtins.property
    def pred_fde(self):
        """Message field 'pred_fde'."""
        return self._pred_fde

    @pred_fde.setter
    def pred_fde(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pred_fde' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pred_fde' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pred_fde = value

    @builtins.property
    def pred_miss_rate(self):
        """Message field 'pred_miss_rate'."""
        return self._pred_miss_rate

    @pred_miss_rate.setter
    def pred_miss_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pred_miss_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pred_miss_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pred_miss_rate = value

    @builtins.property
    def corner_mean_per_class(self):
        """Message field 'corner_mean_per_class'."""
        return self._corner_mean_per_class

    @corner_mean_per_class.setter
    def corner_mean_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'corner_mean_per_class' array.array() must have the type code of 'd'"
                self._corner_mean_per_class = value
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
                "The 'corner_mean_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._corner_mean_per_class = array.array('d', value)

    @builtins.property
    def corner_p95_per_class(self):
        """Message field 'corner_p95_per_class'."""
        return self._corner_p95_per_class

    @corner_p95_per_class.setter
    def corner_p95_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'corner_p95_per_class' array.array() must have the type code of 'd'"
                self._corner_p95_per_class = value
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
                "The 'corner_p95_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._corner_p95_per_class = array.array('d', value)

    @builtins.property
    def flip_rate_per_class(self):
        """Message field 'flip_rate_per_class'."""
        return self._flip_rate_per_class

    @flip_rate_per_class.setter
    def flip_rate_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'flip_rate_per_class' array.array() must have the type code of 'd'"
                self._flip_rate_per_class = value
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
                "The 'flip_rate_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._flip_rate_per_class = array.array('d', value)

    @builtins.property
    def mflip_rate(self):
        """Message field 'mflip_rate'."""
        return self._mflip_rate

    @mflip_rate.setter
    def mflip_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mflip_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mflip_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mflip_rate = value

    @builtins.property
    def nsurf_mean_per_class(self):
        """Message field 'nsurf_mean_per_class'."""
        return self._nsurf_mean_per_class

    @nsurf_mean_per_class.setter
    def nsurf_mean_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'nsurf_mean_per_class' array.array() must have the type code of 'd'"
                self._nsurf_mean_per_class = value
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
                "The 'nsurf_mean_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._nsurf_mean_per_class = array.array('d', value)

    @builtins.property
    def ece(self):
        """Message field 'ece'."""
        return self._ece

    @ece.setter
    def ece(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ece' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ece' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ece = value

    @builtins.property
    def ece_macro(self):
        """Message field 'ece_macro'."""
        return self._ece_macro

    @ece_macro.setter
    def ece_macro(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ece_macro' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ece_macro' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ece_macro = value

    @builtins.property
    def confident_error_rate(self):
        """Message field 'confident_error_rate'."""
        return self._confident_error_rate

    @confident_error_rate.setter
    def confident_error_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'confident_error_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confident_error_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confident_error_rate = value

    @builtins.property
    def confident_errors_per_frame(self):
        """Message field 'confident_errors_per_frame'."""
        return self._confident_errors_per_frame

    @confident_errors_per_frame.setter
    def confident_errors_per_frame(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'confident_errors_per_frame' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confident_errors_per_frame' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confident_errors_per_frame = value

    @builtins.property
    def confusion_pairs(self):
        """Message field 'confusion_pairs'."""
        return self._confusion_pairs

    @confusion_pairs.setter
    def confusion_pairs(self, value):
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
                "The 'confusion_pairs' field must be a set or sequence and each value of type 'str'"
        self._confusion_pairs = value

    @builtins.property
    def confusion_values(self):
        """Message field 'confusion_values'."""
        return self._confusion_values

    @confusion_values.setter
    def confusion_values(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'confusion_values' array.array() must have the type code of 'd'"
                self._confusion_values = value
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
                "The 'confusion_values' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._confusion_values = array.array('d', value)

    @builtins.property
    def critical_fp(self):
        """Message field 'critical_fp'."""
        return self._critical_fp

    @critical_fp.setter
    def critical_fp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'critical_fp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'critical_fp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._critical_fp = value

    @builtins.property
    def critical_fn(self):
        """Message field 'critical_fn'."""
        return self._critical_fn

    @critical_fn.setter
    def critical_fn(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'critical_fn' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'critical_fn' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._critical_fn = value

    @builtins.property
    def cw_map(self):
        """Message field 'cw_map'."""
        return self._cw_map

    @cw_map.setter
    def cw_map(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cw_map' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cw_map' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cw_map = value

    @builtins.property
    def cw_map_per_class(self):
        """Message field 'cw_map_per_class'."""
        return self._cw_map_per_class

    @cw_map_per_class.setter
    def cw_map_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'cw_map_per_class' array.array() must have the type code of 'd'"
                self._cw_map_per_class = value
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
                "The 'cw_map_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cw_map_per_class = array.array('d', value)

    @builtins.property
    def fn_span_mean_per_class(self):
        """Message field 'fn_span_mean_per_class'."""
        return self._fn_span_mean_per_class

    @fn_span_mean_per_class.setter
    def fn_span_mean_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'fn_span_mean_per_class' array.array() must have the type code of 'd'"
                self._fn_span_mean_per_class = value
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
                "The 'fn_span_mean_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._fn_span_mean_per_class = array.array('d', value)

    @builtins.property
    def pass_rate_num_tp(self):
        """Message field 'pass_rate_num_tp'."""
        return self._pass_rate_num_tp

    @pass_rate_num_tp.setter
    def pass_rate_num_tp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pass_rate_num_tp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pass_rate_num_tp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pass_rate_num_tp = value

    @builtins.property
    def pass_rate_num_gt_tp(self):
        """Message field 'pass_rate_num_gt_tp'."""
        return self._pass_rate_num_gt_tp

    @pass_rate_num_gt_tp.setter
    def pass_rate_num_gt_tp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pass_rate_num_gt_tp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pass_rate_num_gt_tp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pass_rate_num_gt_tp = value

    @builtins.property
    def pass_rate_metrics_score(self):
        """Message field 'pass_rate_metrics_score'."""
        return self._pass_rate_metrics_score

    @pass_rate_metrics_score.setter
    def pass_rate_metrics_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pass_rate_metrics_score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pass_rate_metrics_score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pass_rate_metrics_score = value

    @builtins.property
    def err_ate_per_class(self):
        """Message field 'err_ate_per_class'."""
        return self._err_ate_per_class

    @err_ate_per_class.setter
    def err_ate_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'err_ate_per_class' array.array() must have the type code of 'd'"
                self._err_ate_per_class = value
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
                "The 'err_ate_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._err_ate_per_class = array.array('d', value)

    @builtins.property
    def err_aoe_per_class(self):
        """Message field 'err_aoe_per_class'."""
        return self._err_aoe_per_class

    @err_aoe_per_class.setter
    def err_aoe_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'err_aoe_per_class' array.array() must have the type code of 'd'"
                self._err_aoe_per_class = value
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
                "The 'err_aoe_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._err_aoe_per_class = array.array('d', value)

    @builtins.property
    def err_ase_per_class(self):
        """Message field 'err_ase_per_class'."""
        return self._err_ase_per_class

    @err_ase_per_class.setter
    def err_ase_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'err_ase_per_class' array.array() must have the type code of 'd'"
                self._err_ase_per_class = value
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
                "The 'err_ase_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._err_ase_per_class = array.array('d', value)

    @builtins.property
    def err_ave_per_class(self):
        """Message field 'err_ave_per_class'."""
        return self._err_ave_per_class

    @err_ave_per_class.setter
    def err_ave_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'err_ave_per_class' array.array() must have the type code of 'd'"
                self._err_ave_per_class = value
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
                "The 'err_ave_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._err_ave_per_class = array.array('d', value)

    @builtins.property
    def n_gt_total(self):
        """Message field 'n_gt_total'."""
        return self._n_gt_total

    @n_gt_total.setter
    def n_gt_total(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'n_gt_total' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'n_gt_total' field must be an unsigned integer in [0, 4294967295]"
        self._n_gt_total = value

    @builtins.property
    def expected_tp_total(self):
        """Message field 'expected_tp_total'."""
        return self._expected_tp_total

    @expected_tp_total.setter
    def expected_tp_total(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'expected_tp_total' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'expected_tp_total' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._expected_tp_total = value

    @builtins.property
    def expected_fp_total(self):
        """Message field 'expected_fp_total'."""
        return self._expected_fp_total

    @expected_fp_total.setter
    def expected_fp_total(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'expected_fp_total' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'expected_fp_total' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._expected_fp_total = value

    @builtins.property
    def expected_fn_total(self):
        """Message field 'expected_fn_total'."""
        return self._expected_fn_total

    @expected_fn_total.setter
    def expected_fn_total(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'expected_fn_total' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'expected_fn_total' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._expected_fn_total = value

    @builtins.property
    def n_gt_per_class(self):
        """Message field 'n_gt_per_class'."""
        return self._n_gt_per_class

    @n_gt_per_class.setter
    def n_gt_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'n_gt_per_class' array.array() must have the type code of 'I'"
                self._n_gt_per_class = value
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
                "The 'n_gt_per_class' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._n_gt_per_class = array.array('I', value)

    @builtins.property
    def expected_tp_per_class(self):
        """Message field 'expected_tp_per_class'."""
        return self._expected_tp_per_class

    @expected_tp_per_class.setter
    def expected_tp_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'expected_tp_per_class' array.array() must have the type code of 'd'"
                self._expected_tp_per_class = value
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
                "The 'expected_tp_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._expected_tp_per_class = array.array('d', value)

    @builtins.property
    def expected_fp_per_class(self):
        """Message field 'expected_fp_per_class'."""
        return self._expected_fp_per_class

    @expected_fp_per_class.setter
    def expected_fp_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'expected_fp_per_class' array.array() must have the type code of 'd'"
                self._expected_fp_per_class = value
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
                "The 'expected_fp_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._expected_fp_per_class = array.array('d', value)

    @builtins.property
    def expected_fn_per_class(self):
        """Message field 'expected_fn_per_class'."""
        return self._expected_fn_per_class

    @expected_fn_per_class.setter
    def expected_fn_per_class(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'expected_fn_per_class' array.array() must have the type code of 'd'"
                self._expected_fn_per_class = value
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
                "The 'expected_fn_per_class' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._expected_fn_per_class = array.array('d', value)
