# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_world_interfaces:msg/NpcSpawnSummary.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'vehicle_actor_ids'
# Member 'pedestrian_actor_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NpcSpawnSummary(type):
    """Metaclass of message 'NpcSpawnSummary'."""

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
                'swarm_world_interfaces.msg.NpcSpawnSummary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__npc_spawn_summary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__npc_spawn_summary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__npc_spawn_summary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__npc_spawn_summary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__npc_spawn_summary

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


class NpcSpawnSummary(metaclass=Metaclass_NpcSpawnSummary):
    """Message class 'NpcSpawnSummary'."""

    __slots__ = [
        '_header',
        '_seed',
        '_requested_vehicles',
        '_requested_pedestrians',
        '_spawned_vehicles',
        '_spawned_pedestrians',
        '_vehicle_actor_ids',
        '_pedestrian_actor_ids',
        '_vehicle_types',
        '_pedestrian_types',
        '_elapsed_s',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'seed': 'uint32',
        'requested_vehicles': 'uint32',
        'requested_pedestrians': 'uint32',
        'spawned_vehicles': 'uint32',
        'spawned_pedestrians': 'uint32',
        'vehicle_actor_ids': 'sequence<uint32>',
        'pedestrian_actor_ids': 'sequence<uint32>',
        'vehicle_types': 'sequence<string>',
        'pedestrian_types': 'sequence<string>',
        'elapsed_s': 'double',
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
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
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
        self.seed = kwargs.get('seed', int())
        self.requested_vehicles = kwargs.get('requested_vehicles', int())
        self.requested_pedestrians = kwargs.get('requested_pedestrians', int())
        self.spawned_vehicles = kwargs.get('spawned_vehicles', int())
        self.spawned_pedestrians = kwargs.get('spawned_pedestrians', int())
        self.vehicle_actor_ids = array.array('I', kwargs.get('vehicle_actor_ids', []))
        self.pedestrian_actor_ids = array.array('I', kwargs.get('pedestrian_actor_ids', []))
        self.vehicle_types = kwargs.get('vehicle_types', [])
        self.pedestrian_types = kwargs.get('pedestrian_types', [])
        self.elapsed_s = kwargs.get('elapsed_s', float())

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
        if self.seed != other.seed:
            return False
        if self.requested_vehicles != other.requested_vehicles:
            return False
        if self.requested_pedestrians != other.requested_pedestrians:
            return False
        if self.spawned_vehicles != other.spawned_vehicles:
            return False
        if self.spawned_pedestrians != other.spawned_pedestrians:
            return False
        if self.vehicle_actor_ids != other.vehicle_actor_ids:
            return False
        if self.pedestrian_actor_ids != other.pedestrian_actor_ids:
            return False
        if self.vehicle_types != other.vehicle_types:
            return False
        if self.pedestrian_types != other.pedestrian_types:
            return False
        if self.elapsed_s != other.elapsed_s:
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
    def seed(self):
        """Message field 'seed'."""
        return self._seed

    @seed.setter
    def seed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'seed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'seed' field must be an unsigned integer in [0, 4294967295]"
        self._seed = value

    @builtins.property
    def requested_vehicles(self):
        """Message field 'requested_vehicles'."""
        return self._requested_vehicles

    @requested_vehicles.setter
    def requested_vehicles(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'requested_vehicles' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'requested_vehicles' field must be an unsigned integer in [0, 4294967295]"
        self._requested_vehicles = value

    @builtins.property
    def requested_pedestrians(self):
        """Message field 'requested_pedestrians'."""
        return self._requested_pedestrians

    @requested_pedestrians.setter
    def requested_pedestrians(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'requested_pedestrians' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'requested_pedestrians' field must be an unsigned integer in [0, 4294967295]"
        self._requested_pedestrians = value

    @builtins.property
    def spawned_vehicles(self):
        """Message field 'spawned_vehicles'."""
        return self._spawned_vehicles

    @spawned_vehicles.setter
    def spawned_vehicles(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'spawned_vehicles' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'spawned_vehicles' field must be an unsigned integer in [0, 4294967295]"
        self._spawned_vehicles = value

    @builtins.property
    def spawned_pedestrians(self):
        """Message field 'spawned_pedestrians'."""
        return self._spawned_pedestrians

    @spawned_pedestrians.setter
    def spawned_pedestrians(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'spawned_pedestrians' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'spawned_pedestrians' field must be an unsigned integer in [0, 4294967295]"
        self._spawned_pedestrians = value

    @builtins.property
    def vehicle_actor_ids(self):
        """Message field 'vehicle_actor_ids'."""
        return self._vehicle_actor_ids

    @vehicle_actor_ids.setter
    def vehicle_actor_ids(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'vehicle_actor_ids' array.array() must have the type code of 'I'"
                self._vehicle_actor_ids = value
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
                "The 'vehicle_actor_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._vehicle_actor_ids = array.array('I', value)

    @builtins.property
    def pedestrian_actor_ids(self):
        """Message field 'pedestrian_actor_ids'."""
        return self._pedestrian_actor_ids

    @pedestrian_actor_ids.setter
    def pedestrian_actor_ids(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'pedestrian_actor_ids' array.array() must have the type code of 'I'"
                self._pedestrian_actor_ids = value
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
                "The 'pedestrian_actor_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._pedestrian_actor_ids = array.array('I', value)

    @builtins.property
    def vehicle_types(self):
        """Message field 'vehicle_types'."""
        return self._vehicle_types

    @vehicle_types.setter
    def vehicle_types(self, value):
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
                "The 'vehicle_types' field must be a set or sequence and each value of type 'str'"
        self._vehicle_types = value

    @builtins.property
    def pedestrian_types(self):
        """Message field 'pedestrian_types'."""
        return self._pedestrian_types

    @pedestrian_types.setter
    def pedestrian_types(self, value):
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
                "The 'pedestrian_types' field must be a set or sequence and each value of type 'str'"
        self._pedestrian_types = value

    @builtins.property
    def elapsed_s(self):
        """Message field 'elapsed_s'."""
        return self._elapsed_s

    @elapsed_s.setter
    def elapsed_s(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'elapsed_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'elapsed_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._elapsed_s = value
