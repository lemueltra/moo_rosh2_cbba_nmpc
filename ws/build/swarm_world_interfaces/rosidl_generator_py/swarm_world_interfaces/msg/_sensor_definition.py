# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_world_interfaces:msg/SensorDefinition.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorDefinition(type):
    """Metaclass of message 'SensorDefinition'."""

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
                'swarm_world_interfaces.msg.SensorDefinition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_definition
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_definition
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_definition
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_definition
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_definition

            from geometry_msgs.msg import Transform
            if Transform.__class__._TYPE_SUPPORT is None:
                Transform.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorDefinition(metaclass=Metaclass_SensorDefinition):
    """Message class 'SensorDefinition'."""

    __slots__ = [
        '_sensor_id',
        '_type_id',
        '_parent_actor_id',
        '_transform',
        '_attribute_keys',
        '_attribute_values',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'sensor_id': 'uint32',
        'type_id': 'string',
        'parent_actor_id': 'uint32',
        'transform': 'geometry_msgs/Transform',
        'attribute_keys': 'sequence<string>',
        'attribute_values': 'sequence<string>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
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
        self.sensor_id = kwargs.get('sensor_id', int())
        self.type_id = kwargs.get('type_id', str())
        self.parent_actor_id = kwargs.get('parent_actor_id', int())
        from geometry_msgs.msg import Transform
        self.transform = kwargs.get('transform', Transform())
        self.attribute_keys = kwargs.get('attribute_keys', [])
        self.attribute_values = kwargs.get('attribute_values', [])

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
        if self.sensor_id != other.sensor_id:
            return False
        if self.type_id != other.type_id:
            return False
        if self.parent_actor_id != other.parent_actor_id:
            return False
        if self.transform != other.transform:
            return False
        if self.attribute_keys != other.attribute_keys:
            return False
        if self.attribute_values != other.attribute_values:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensor_id' field must be an unsigned integer in [0, 4294967295]"
        self._sensor_id = value

    @builtins.property
    def type_id(self):
        """Message field 'type_id'."""
        return self._type_id

    @type_id.setter
    def type_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'type_id' field must be of type 'str'"
        self._type_id = value

    @builtins.property
    def parent_actor_id(self):
        """Message field 'parent_actor_id'."""
        return self._parent_actor_id

    @parent_actor_id.setter
    def parent_actor_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'parent_actor_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'parent_actor_id' field must be an unsigned integer in [0, 4294967295]"
        self._parent_actor_id = value

    @builtins.property
    def transform(self):
        """Message field 'transform'."""
        return self._transform

    @transform.setter
    def transform(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'transform' field must be a sub message of type 'Transform'"
        self._transform = value

    @builtins.property
    def attribute_keys(self):
        """Message field 'attribute_keys'."""
        return self._attribute_keys

    @attribute_keys.setter
    def attribute_keys(self, value):
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
                "The 'attribute_keys' field must be a set or sequence and each value of type 'str'"
        self._attribute_keys = value

    @builtins.property
    def attribute_values(self):
        """Message field 'attribute_values'."""
        return self._attribute_values

    @attribute_values.setter
    def attribute_values(self, value):
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
                "The 'attribute_values' field must be a set or sequence and each value of type 'str'"
        self._attribute_values = value
