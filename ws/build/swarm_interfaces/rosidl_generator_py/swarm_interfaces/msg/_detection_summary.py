# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_interfaces:msg/DetectionSummary.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectionSummary(type):
    """Metaclass of message 'DetectionSummary'."""

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
                'swarm_interfaces.msg.DetectionSummary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detection_summary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detection_summary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detection_summary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detection_summary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detection_summary

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


class DetectionSummary(metaclass=Metaclass_DetectionSummary):
    """Message class 'DetectionSummary'."""

    __slots__ = [
        '_header',
        '_total',
        '_buildings',
        '_vehicles',
        '_pedestrians',
        '_fleet',
        '_blocked',
        '_partially_blocked',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'total': 'uint32',
        'buildings': 'uint32',
        'vehicles': 'uint32',
        'pedestrians': 'uint32',
        'fleet': 'uint32',
        'blocked': 'uint32',
        'partially_blocked': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.total = kwargs.get('total', int())
        self.buildings = kwargs.get('buildings', int())
        self.vehicles = kwargs.get('vehicles', int())
        self.pedestrians = kwargs.get('pedestrians', int())
        self.fleet = kwargs.get('fleet', int())
        self.blocked = kwargs.get('blocked', int())
        self.partially_blocked = kwargs.get('partially_blocked', int())

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
        if self.total != other.total:
            return False
        if self.buildings != other.buildings:
            return False
        if self.vehicles != other.vehicles:
            return False
        if self.pedestrians != other.pedestrians:
            return False
        if self.fleet != other.fleet:
            return False
        if self.blocked != other.blocked:
            return False
        if self.partially_blocked != other.partially_blocked:
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
    def total(self):
        """Message field 'total'."""
        return self._total

    @total.setter
    def total(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total' field must be an unsigned integer in [0, 4294967295]"
        self._total = value

    @builtins.property
    def buildings(self):
        """Message field 'buildings'."""
        return self._buildings

    @buildings.setter
    def buildings(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'buildings' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'buildings' field must be an unsigned integer in [0, 4294967295]"
        self._buildings = value

    @builtins.property
    def vehicles(self):
        """Message field 'vehicles'."""
        return self._vehicles

    @vehicles.setter
    def vehicles(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'vehicles' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'vehicles' field must be an unsigned integer in [0, 4294967295]"
        self._vehicles = value

    @builtins.property
    def pedestrians(self):
        """Message field 'pedestrians'."""
        return self._pedestrians

    @pedestrians.setter
    def pedestrians(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pedestrians' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pedestrians' field must be an unsigned integer in [0, 4294967295]"
        self._pedestrians = value

    @builtins.property
    def fleet(self):
        """Message field 'fleet'."""
        return self._fleet

    @fleet.setter
    def fleet(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fleet' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'fleet' field must be an unsigned integer in [0, 4294967295]"
        self._fleet = value

    @builtins.property
    def blocked(self):
        """Message field 'blocked'."""
        return self._blocked

    @blocked.setter
    def blocked(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'blocked' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'blocked' field must be an unsigned integer in [0, 4294967295]"
        self._blocked = value

    @builtins.property
    def partially_blocked(self):
        """Message field 'partially_blocked'."""
        return self._partially_blocked

    @partially_blocked.setter
    def partially_blocked(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'partially_blocked' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'partially_blocked' field must be an unsigned integer in [0, 4294967295]"
        self._partially_blocked = value
