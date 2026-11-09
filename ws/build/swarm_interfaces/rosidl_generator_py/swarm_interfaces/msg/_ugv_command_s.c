// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from swarm_interfaces:msg/UgvCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "swarm_interfaces/msg/detail/ugv_command__struct.h"
#include "swarm_interfaces/msg/detail/ugv_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool swarm_interfaces__msg__ugv_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("swarm_interfaces.msg._ugv_command.UgvCommand", full_classname_dest, 44) == 0);
  }
  swarm_interfaces__msg__UgvCommand * ros_message = _ros_message;
  {  // ugv_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "ugv_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ugv_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hand_brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "hand_brake");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hand_brake = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reverse
    PyObject * field = PyObject_GetAttrString(_pymsg, "reverse");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reverse = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_cmd = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * swarm_interfaces__msg__ugv_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UgvCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("swarm_interfaces.msg._ugv_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UgvCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  swarm_interfaces__msg__UgvCommand * ros_message = (swarm_interfaces__msg__UgvCommand *)raw_ros_message;
  {  // ugv_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ugv_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ugv_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hand_brake
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hand_brake ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hand_brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reverse
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reverse ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reverse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
