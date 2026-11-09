# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_interfaces:msg/PlannerStatus.idl
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


class Metaclass_PlannerStatus(type):
    """Metaclass of message 'PlannerStatus'."""

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
                'swarm_interfaces.msg.PlannerStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planner_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planner_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planner_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planner_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planner_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from swarm_interfaces.msg import DroneStatus
            if DroneStatus.__class__._TYPE_SUPPORT is None:
                DroneStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlannerStatus(metaclass=Metaclass_PlannerStatus):
    """Message class 'PlannerStatus'."""

    __slots__ = [
        '_header',
        '_drones',
        '_cycle_time_us',
        '_cycle_time_max_us',
        '_deadline_misses',
        '_clamped_references',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'drones': 'sequence<swarm_interfaces/DroneStatus>',
        'cycle_time_us': 'double',
        'cycle_time_max_us': 'double',
        'deadline_misses': 'uint32',
        'clamped_references': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['swarm_interfaces', 'msg'], 'DroneStatus')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.drones = kwargs.get('drones', [])
        self.cycle_time_us = kwargs.get('cycle_time_us', float())
        self.cycle_time_max_us = kwargs.get('cycle_time_max_us', float())
        self.deadline_misses = kwargs.get('deadline_misses', int())
        self.clamped_references = kwargs.get('clamped_references', int())

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
        if self.drones != other.drones:
            return False
        if self.cycle_time_us != other.cycle_time_us:
            return False
        if self.cycle_time_max_us != other.cycle_time_max_us:
            return False
        if self.deadline_misses != other.deadline_misses:
            return False
        if self.clamped_references != other.clamped_references:
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
    def drones(self):
        """Message field 'drones'."""
        return self._drones

    @drones.setter
    def drones(self, value):
        if self._check_fields:
            from swarm_interfaces.msg import DroneStatus
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
                 all(isinstance(v, DroneStatus) for v in value) and
                 True), \
                "The 'drones' field must be a set or sequence and each value of type 'DroneStatus'"
        self._drones = value

    @builtins.property
    def cycle_time_us(self):
        """Message field 'cycle_time_us'."""
        return self._cycle_time_us

    @cycle_time_us.setter
    def cycle_time_us(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cycle_time_us' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cycle_time_us' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cycle_time_us = value

    @builtins.property
    def cycle_time_max_us(self):
        """Message field 'cycle_time_max_us'."""
        return self._cycle_time_max_us

    @cycle_time_max_us.setter
    def cycle_time_max_us(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cycle_time_max_us' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cycle_time_max_us' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cycle_time_max_us = value

    @builtins.property
    def deadline_misses(self):
        """Message field 'deadline_misses'."""
        return self._deadline_misses

    @deadline_misses.setter
    def deadline_misses(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'deadline_misses' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'deadline_misses' field must be an unsigned integer in [0, 4294967295]"
        self._deadline_misses = value

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
