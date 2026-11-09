# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_world_interfaces:msg/ActorState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActorState(type):
    """Metaclass of message 'ActorState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONTROL_DISABLED': 0,
        'CONTROL_AUTOPILOT': 1,
        'CONTROL_NATIVE_TOPIC': 2,
        'CONTROL_CARLA_AIR_CMD': 3,
        'CONTROL_DIRECT_API': 4,
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
                'swarm_world_interfaces.msg.ActorState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actor_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actor_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actor_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actor_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actor_state

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONTROL_DISABLED': cls.__constants['CONTROL_DISABLED'],
            'CONTROL_AUTOPILOT': cls.__constants['CONTROL_AUTOPILOT'],
            'CONTROL_NATIVE_TOPIC': cls.__constants['CONTROL_NATIVE_TOPIC'],
            'CONTROL_CARLA_AIR_CMD': cls.__constants['CONTROL_CARLA_AIR_CMD'],
            'CONTROL_DIRECT_API': cls.__constants['CONTROL_DIRECT_API'],
        }

    @property
    def CONTROL_DISABLED(self):
        """Message constant 'CONTROL_DISABLED'."""
        return Metaclass_ActorState.__constants['CONTROL_DISABLED']

    @property
    def CONTROL_AUTOPILOT(self):
        """Message constant 'CONTROL_AUTOPILOT'."""
        return Metaclass_ActorState.__constants['CONTROL_AUTOPILOT']

    @property
    def CONTROL_NATIVE_TOPIC(self):
        """Message constant 'CONTROL_NATIVE_TOPIC'."""
        return Metaclass_ActorState.__constants['CONTROL_NATIVE_TOPIC']

    @property
    def CONTROL_CARLA_AIR_CMD(self):
        """Message constant 'CONTROL_CARLA_AIR_CMD'."""
        return Metaclass_ActorState.__constants['CONTROL_CARLA_AIR_CMD']

    @property
    def CONTROL_DIRECT_API(self):
        """Message constant 'CONTROL_DIRECT_API'."""
        return Metaclass_ActorState.__constants['CONTROL_DIRECT_API']


class ActorState(metaclass=Metaclass_ActorState):
    """
    Message class 'ActorState'.

    Constants:
      CONTROL_DISABLED
      CONTROL_AUTOPILOT
      CONTROL_NATIVE_TOPIC
      CONTROL_CARLA_AIR_CMD
      CONTROL_DIRECT_API
    """

    __slots__ = [
        '_actor_id',
        '_type_id',
        '_role_name',
        '_pose',
        '_twist',
        '_acceleration',
        '_bounding_box_extent',
        '_active',
        '_control_source',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'actor_id': 'uint32',
        'type_id': 'string',
        'role_name': 'string',
        'pose': 'geometry_msgs/Pose',
        'twist': 'geometry_msgs/Twist',
        'acceleration': 'geometry_msgs/Vector3',
        'bounding_box_extent': 'geometry_msgs/Vector3',
        'active': 'boolean',
        'control_source': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.actor_id = kwargs.get('actor_id', int())
        self.type_id = kwargs.get('type_id', str())
        self.role_name = kwargs.get('role_name', str())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Twist
        self.twist = kwargs.get('twist', Twist())
        from geometry_msgs.msg import Vector3
        self.acceleration = kwargs.get('acceleration', Vector3())
        from geometry_msgs.msg import Vector3
        self.bounding_box_extent = kwargs.get('bounding_box_extent', Vector3())
        self.active = kwargs.get('active', bool())
        self.control_source = kwargs.get('control_source', int())

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
        if self.actor_id != other.actor_id:
            return False
        if self.type_id != other.type_id:
            return False
        if self.role_name != other.role_name:
            return False
        if self.pose != other.pose:
            return False
        if self.twist != other.twist:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.bounding_box_extent != other.bounding_box_extent:
            return False
        if self.active != other.active:
            return False
        if self.control_source != other.control_source:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def actor_id(self):
        """Message field 'actor_id'."""
        return self._actor_id

    @actor_id.setter
    def actor_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'actor_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'actor_id' field must be an unsigned integer in [0, 4294967295]"
        self._actor_id = value

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
    def role_name(self):
        """Message field 'role_name'."""
        return self._role_name

    @role_name.setter
    def role_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'role_name' field must be of type 'str'"
        self._role_name = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'twist' field must be a sub message of type 'Twist'"
        self._twist = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'acceleration' field must be a sub message of type 'Vector3'"
        self._acceleration = value

    @builtins.property
    def bounding_box_extent(self):
        """Message field 'bounding_box_extent'."""
        return self._bounding_box_extent

    @bounding_box_extent.setter
    def bounding_box_extent(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'bounding_box_extent' field must be a sub message of type 'Vector3'"
        self._bounding_box_extent = value

    @builtins.property
    def active(self):
        """Message field 'active'."""
        return self._active

    @active.setter
    def active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'active' field must be of type 'bool'"
        self._active = value

    @builtins.property
    def control_source(self):
        """Message field 'control_source'."""
        return self._control_source

    @control_source.setter
    def control_source(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'control_source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'control_source' field must be an unsigned integer in [0, 255]"
        self._control_source = value
