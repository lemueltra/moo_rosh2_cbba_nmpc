# generated from rosidl_generator_py/resource/_idl.py.em
# with input from swarm_world_interfaces:srv/SetTimeMode.idl
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


class Metaclass_SetTimeMode_Request(type):
    """Metaclass of message 'SetTimeMode_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TIME_MODE_ASYNC': 0,
        'TIME_MODE_SYNC': 1,
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
                'swarm_world_interfaces.srv.SetTimeMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_time_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_time_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_time_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_time_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_time_mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TIME_MODE_ASYNC': cls.__constants['TIME_MODE_ASYNC'],
            'TIME_MODE_SYNC': cls.__constants['TIME_MODE_SYNC'],
        }

    @property
    def TIME_MODE_ASYNC(self):
        """Message constant 'TIME_MODE_ASYNC'."""
        return Metaclass_SetTimeMode_Request.__constants['TIME_MODE_ASYNC']

    @property
    def TIME_MODE_SYNC(self):
        """Message constant 'TIME_MODE_SYNC'."""
        return Metaclass_SetTimeMode_Request.__constants['TIME_MODE_SYNC']


class SetTimeMode_Request(metaclass=Metaclass_SetTimeMode_Request):
    """
    Message class 'SetTimeMode_Request'.

    Constants:
      TIME_MODE_ASYNC
      TIME_MODE_SYNC
    """

    __slots__ = [
        '_time_mode',
        '_fixed_delta_seconds',
        '_sync_timeout_sec',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'time_mode': 'uint8',
        'fixed_delta_seconds': 'double',
        'sync_timeout_sec': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.time_mode = kwargs.get('time_mode', int())
        self.fixed_delta_seconds = kwargs.get('fixed_delta_seconds', float())
        self.sync_timeout_sec = kwargs.get('sync_timeout_sec', float())

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
        if self.time_mode != other.time_mode:
            return False
        if self.fixed_delta_seconds != other.fixed_delta_seconds:
            return False
        if self.sync_timeout_sec != other.sync_timeout_sec:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time_mode(self):
        """Message field 'time_mode'."""
        return self._time_mode

    @time_mode.setter
    def time_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'time_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'time_mode' field must be an unsigned integer in [0, 255]"
        self._time_mode = value

    @builtins.property
    def fixed_delta_seconds(self):
        """Message field 'fixed_delta_seconds'."""
        return self._fixed_delta_seconds

    @fixed_delta_seconds.setter
    def fixed_delta_seconds(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'fixed_delta_seconds' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fixed_delta_seconds' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fixed_delta_seconds = value

    @builtins.property
    def sync_timeout_sec(self):
        """Message field 'sync_timeout_sec'."""
        return self._sync_timeout_sec

    @sync_timeout_sec.setter
    def sync_timeout_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sync_timeout_sec' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sync_timeout_sec' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sync_timeout_sec = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetTimeMode_Response(type):
    """Metaclass of message 'SetTimeMode_Response'."""

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
                'swarm_world_interfaces.srv.SetTimeMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_time_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_time_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_time_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_time_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_time_mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetTimeMode_Response(metaclass=Metaclass_SetTimeMode_Response):
    """Message class 'SetTimeMode_Response'."""

    __slots__ = [
        '_success',
        '_error_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetTimeMode_Event(type):
    """Metaclass of message 'SetTimeMode_Event'."""

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
                'swarm_world_interfaces.srv.SetTimeMode_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_time_mode__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_time_mode__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_time_mode__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_time_mode__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_time_mode__event

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


class SetTimeMode_Event(metaclass=Metaclass_SetTimeMode_Event):
    """Message class 'SetTimeMode_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<swarm_world_interfaces/SetTimeMode_Request, 1>',
        'response': 'sequence<swarm_world_interfaces/SetTimeMode_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['swarm_world_interfaces', 'srv'], 'SetTimeMode_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['swarm_world_interfaces', 'srv'], 'SetTimeMode_Response'), 1),  # noqa: E501
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
            from swarm_world_interfaces.srv import SetTimeMode_Request
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
                 all(isinstance(v, SetTimeMode_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SetTimeMode_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from swarm_world_interfaces.srv import SetTimeMode_Response
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
                 all(isinstance(v, SetTimeMode_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SetTimeMode_Response'"
        self._response = value


class Metaclass_SetTimeMode(type):
    """Metaclass of service 'SetTimeMode'."""

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
                'swarm_world_interfaces.srv.SetTimeMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_time_mode

            from swarm_world_interfaces.srv import _set_time_mode
            if _set_time_mode.Metaclass_SetTimeMode_Request._TYPE_SUPPORT is None:
                _set_time_mode.Metaclass_SetTimeMode_Request.__import_type_support__()
            if _set_time_mode.Metaclass_SetTimeMode_Response._TYPE_SUPPORT is None:
                _set_time_mode.Metaclass_SetTimeMode_Response.__import_type_support__()
            if _set_time_mode.Metaclass_SetTimeMode_Event._TYPE_SUPPORT is None:
                _set_time_mode.Metaclass_SetTimeMode_Event.__import_type_support__()


class SetTimeMode(metaclass=Metaclass_SetTimeMode):
    from swarm_world_interfaces.srv._set_time_mode import SetTimeMode_Request as Request
    from swarm_world_interfaces.srv._set_time_mode import SetTimeMode_Response as Response
    from swarm_world_interfaces.srv._set_time_mode import SetTimeMode_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
