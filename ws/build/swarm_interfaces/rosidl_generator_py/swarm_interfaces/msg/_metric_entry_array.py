# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_interfaces:msg/MetricEntryArray.idl
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


class Metaclass_MetricEntryArray(type):
    """Metaclass of message 'MetricEntryArray'."""

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
                'swarm_interfaces.msg.MetricEntryArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__metric_entry_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__metric_entry_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__metric_entry_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__metric_entry_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__metric_entry_array

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from swarm_interfaces.msg import MetricEntry
            if MetricEntry.__class__._TYPE_SUPPORT is None:
                MetricEntry.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MetricEntryArray(metaclass=Metaclass_MetricEntryArray):
    """Message class 'MetricEntryArray'."""

    __slots__ = [
        '_header',
        '_model_based',
        '_params_hash',
        '_window_sec',
        '_warming_up',
        '_n_frames_in_window',
        '_entries',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'model_based': 'boolean',
        'params_hash': 'string',
        'window_sec': 'double',
        'warming_up': 'boolean',
        'n_frames_in_window': 'uint32',
        'entries': 'sequence<swarm_interfaces/MetricEntry>',
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
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['swarm_interfaces', 'msg'], 'MetricEntry')),  # noqa: E501
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
        self.entries = kwargs.get('entries', [])

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
        if self.entries != other.entries:
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
    def entries(self):
        """Message field 'entries'."""
        return self._entries

    @entries.setter
    def entries(self, value):
        if self._check_fields:
            from swarm_interfaces.msg import MetricEntry
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
                 all(isinstance(v, MetricEntry) for v in value) and
                 True), \
                "The 'entries' field must be a set or sequence and each value of type 'MetricEntry'"
        self._entries = value
