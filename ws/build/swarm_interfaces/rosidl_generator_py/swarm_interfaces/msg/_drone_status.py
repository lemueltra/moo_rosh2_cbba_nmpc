# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_interfaces:msg/DroneStatus.idl
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


class Metaclass_DroneStatus(type):
    """Metaclass of message 'DroneStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_INACTIVE': 0,
        'MODE_HOLD': 1,
        'MODE_PLANNING': 2,
        'MODE_TRACKING': 3,
        'MODE_REACHED': 4,
        'MODE_REFERENCE_STALE': 5,
        'MODE_REFERENCE_INVALID': 6,
        'MODE_PLAN_FAILED': 7,
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
                'swarm_interfaces.msg.DroneStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__drone_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__drone_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__drone_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__drone_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__drone_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_INACTIVE': cls.__constants['MODE_INACTIVE'],
            'MODE_HOLD': cls.__constants['MODE_HOLD'],
            'MODE_PLANNING': cls.__constants['MODE_PLANNING'],
            'MODE_TRACKING': cls.__constants['MODE_TRACKING'],
            'MODE_REACHED': cls.__constants['MODE_REACHED'],
            'MODE_REFERENCE_STALE': cls.__constants['MODE_REFERENCE_STALE'],
            'MODE_REFERENCE_INVALID': cls.__constants['MODE_REFERENCE_INVALID'],
            'MODE_PLAN_FAILED': cls.__constants['MODE_PLAN_FAILED'],
        }

    @property
    def MODE_INACTIVE(self):
        """Message constant 'MODE_INACTIVE'."""
        return Metaclass_DroneStatus.__constants['MODE_INACTIVE']

    @property
    def MODE_HOLD(self):
        """Message constant 'MODE_HOLD'."""
        return Metaclass_DroneStatus.__constants['MODE_HOLD']

    @property
    def MODE_PLANNING(self):
        """Message constant 'MODE_PLANNING'."""
        return Metaclass_DroneStatus.__constants['MODE_PLANNING']

    @property
    def MODE_TRACKING(self):
        """Message constant 'MODE_TRACKING'."""
        return Metaclass_DroneStatus.__constants['MODE_TRACKING']

    @property
    def MODE_REACHED(self):
        """Message constant 'MODE_REACHED'."""
        return Metaclass_DroneStatus.__constants['MODE_REACHED']

    @property
    def MODE_REFERENCE_STALE(self):
        """Message constant 'MODE_REFERENCE_STALE'."""
        return Metaclass_DroneStatus.__constants['MODE_REFERENCE_STALE']

    @property
    def MODE_REFERENCE_INVALID(self):
        """Message constant 'MODE_REFERENCE_INVALID'."""
        return Metaclass_DroneStatus.__constants['MODE_REFERENCE_INVALID']

    @property
    def MODE_PLAN_FAILED(self):
        """Message constant 'MODE_PLAN_FAILED'."""
        return Metaclass_DroneStatus.__constants['MODE_PLAN_FAILED']


class DroneStatus(metaclass=Metaclass_DroneStatus):
    """
    Message class 'DroneStatus'.

    Constants:
      MODE_INACTIVE
      MODE_HOLD
      MODE_PLANNING
      MODE_TRACKING
      MODE_REACHED
      MODE_REFERENCE_STALE
      MODE_REFERENCE_INVALID
      MODE_PLAN_FAILED
    """

    __slots__ = [
        '_drone_id',
        '_mode',
        '_position_error',
        '_yaw_error',
        '_eta',
        '_replan_count',
        '_compute_time_us',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'drone_id': 'uint32',
        'mode': 'uint8',
        'position_error': 'double',
        'yaw_error': 'double',
        'eta': 'double',
        'replan_count': 'uint32',
        'compute_time_us': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.drone_id = kwargs.get('drone_id', int())
        self.mode = kwargs.get('mode', int())
        self.position_error = kwargs.get('position_error', float())
        self.yaw_error = kwargs.get('yaw_error', float())
        self.eta = kwargs.get('eta', float())
        self.replan_count = kwargs.get('replan_count', int())
        self.compute_time_us = kwargs.get('compute_time_us', float())

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
        if self.mode != other.mode:
            return False
        if self.position_error != other.position_error:
            return False
        if self.yaw_error != other.yaw_error:
            return False
        if self.eta != other.eta:
            return False
        if self.replan_count != other.replan_count:
            return False
        if self.compute_time_us != other.compute_time_us:
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
    def eta(self):
        """Message field 'eta'."""
        return self._eta

    @eta.setter
    def eta(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'eta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'eta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._eta = value

    @builtins.property
    def replan_count(self):
        """Message field 'replan_count'."""
        return self._replan_count

    @replan_count.setter
    def replan_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'replan_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'replan_count' field must be an unsigned integer in [0, 4294967295]"
        self._replan_count = value

    @builtins.property
    def compute_time_us(self):
        """Message field 'compute_time_us'."""
        return self._compute_time_us

    @compute_time_us.setter
    def compute_time_us(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'compute_time_us' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'compute_time_us' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._compute_time_us = value
