# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_world_interfaces:srv/ConfigureUavRig.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConfigureUavRig_Request(type):
    """Metaclass of message 'ConfigureUavRig_Request'."""

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
                'swarm_world_interfaces.srv.ConfigureUavRig_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__configure_uav_rig__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__configure_uav_rig__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__configure_uav_rig__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__configure_uav_rig__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__configure_uav_rig__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConfigureUavRig_Request(metaclass=Metaclass_ConfigureUavRig_Request):
    """Message class 'ConfigureUavRig_Request'."""

    __slots__ = [
        '_uav_id',
        '_rig_override',
        '_reset_to_default',
        '_detach_current_sensors',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'uav_id': 'int32',
        'rig_override': 'string',
        'reset_to_default': 'boolean',
        'detach_current_sensors': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.uav_id = kwargs.get('uav_id', int())
        self.rig_override = kwargs.get('rig_override', str())
        self.reset_to_default = kwargs.get('reset_to_default', bool())
        self.detach_current_sensors = kwargs.get('detach_current_sensors', bool())

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
        if self.uav_id != other.uav_id:
            return False
        if self.rig_override != other.rig_override:
            return False
        if self.reset_to_default != other.reset_to_default:
            return False
        if self.detach_current_sensors != other.detach_current_sensors:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def uav_id(self):
        """Message field 'uav_id'."""
        return self._uav_id

    @uav_id.setter
    def uav_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'uav_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uav_id' field must be an integer in [-2147483648, 2147483647]"
        self._uav_id = value

    @builtins.property
    def rig_override(self):
        """Message field 'rig_override'."""
        return self._rig_override

    @rig_override.setter
    def rig_override(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'rig_override' field must be of type 'str'"
        self._rig_override = value

    @builtins.property
    def reset_to_default(self):
        """Message field 'reset_to_default'."""
        return self._reset_to_default

    @reset_to_default.setter
    def reset_to_default(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'reset_to_default' field must be of type 'bool'"
        self._reset_to_default = value

    @builtins.property
    def detach_current_sensors(self):
        """Message field 'detach_current_sensors'."""
        return self._detach_current_sensors

    @detach_current_sensors.setter
    def detach_current_sensors(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'detach_current_sensors' field must be of type 'bool'"
        self._detach_current_sensors = value


# Import statements for member types

# Member 'attached_sensor_ids'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ConfigureUavRig_Response(type):
    """Metaclass of message 'ConfigureUavRig_Response'."""

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
                'swarm_world_interfaces.srv.ConfigureUavRig_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__configure_uav_rig__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__configure_uav_rig__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__configure_uav_rig__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__configure_uav_rig__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__configure_uav_rig__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConfigureUavRig_Response(metaclass=Metaclass_ConfigureUavRig_Response):
    """Message class 'ConfigureUavRig_Response'."""

    __slots__ = [
        '_success',
        '_error_message',
        '_attached_sensor_ids',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_message': 'string',
        'attached_sensor_ids': 'sequence<uint32>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.error_message = kwargs.get('error_message', str())
        self.attached_sensor_ids = array.array('I', kwargs.get('attached_sensor_ids', []))

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
        if self.success != other.success:
            return False
        if self.error_message != other.error_message:
            return False
        if self.attached_sensor_ids != other.attached_sensor_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value

    @builtins.property
    def attached_sensor_ids(self):
        """Message field 'attached_sensor_ids'."""
        return self._attached_sensor_ids

    @attached_sensor_ids.setter
    def attached_sensor_ids(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'attached_sensor_ids' array.array() must have the type code of 'I'"
                self._attached_sensor_ids = value
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
                "The 'attached_sensor_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._attached_sensor_ids = array.array('I', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ConfigureUavRig_Event(type):
    """Metaclass of message 'ConfigureUavRig_Event'."""

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
                'swarm_world_interfaces.srv.ConfigureUavRig_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__configure_uav_rig__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__configure_uav_rig__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__configure_uav_rig__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__configure_uav_rig__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__configure_uav_rig__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConfigureUavRig_Event(metaclass=Metaclass_ConfigureUavRig_Event):
    """Message class 'ConfigureUavRig_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<swarm_world_interfaces/ConfigureUavRig_Request, 1>',
        'response': 'sequence<swarm_world_interfaces/ConfigureUavRig_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['swarm_world_interfaces', 'srv'], 'ConfigureUavRig_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['swarm_world_interfaces', 'srv'], 'ConfigureUavRig_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from swarm_world_interfaces.srv import ConfigureUavRig_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, ConfigureUavRig_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'ConfigureUavRig_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from swarm_world_interfaces.srv import ConfigureUavRig_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, ConfigureUavRig_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'ConfigureUavRig_Response'"
        self._response = value


class Metaclass_ConfigureUavRig(type):
    """Metaclass of service 'ConfigureUavRig'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('swarm_world_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'swarm_world_interfaces.srv.ConfigureUavRig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__configure_uav_rig

            from swarm_world_interfaces.srv import _configure_uav_rig
            if _configure_uav_rig.Metaclass_ConfigureUavRig_Request._TYPE_SUPPORT is None:
                _configure_uav_rig.Metaclass_ConfigureUavRig_Request.__import_type_support__()
            if _configure_uav_rig.Metaclass_ConfigureUavRig_Response._TYPE_SUPPORT is None:
                _configure_uav_rig.Metaclass_ConfigureUavRig_Response.__import_type_support__()
            if _configure_uav_rig.Metaclass_ConfigureUavRig_Event._TYPE_SUPPORT is None:
                _configure_uav_rig.Metaclass_ConfigureUavRig_Event.__import_type_support__()


class ConfigureUavRig(metaclass=Metaclass_ConfigureUavRig):
    from swarm_world_interfaces.srv._configure_uav_rig import ConfigureUavRig_Request as Request
    from swarm_world_interfaces.srv._configure_uav_rig import ConfigureUavRig_Response as Response
    from swarm_world_interfaces.srv._configure_uav_rig import ConfigureUavRig_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
