// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from swarm_interfaces:msg/DroneStatus.idl
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
#include "swarm_interfaces/msg/detail/drone_status__struct.h"
#include "swarm_interfaces/msg/detail/drone_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool swarm_interfaces__msg__drone_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("swarm_interfaces.msg._drone_status.DroneStatus", full_classname_dest, 46) == 0);
  }
  swarm_interfaces__msg__DroneStatus * ros_message = _ros_message;
  {  // drone_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drone_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eta
    PyObject * field = PyObject_GetAttrString(_pymsg, "eta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // replan_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "replan_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->replan_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // compute_time_us
    PyObject * field = PyObject_GetAttrString(_pymsg, "compute_time_us");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->compute_time_us = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * swarm_interfaces__msg__drone_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DroneStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("swarm_interfaces.msg._drone_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DroneStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  swarm_interfaces__msg__DroneStatus * ros_message = (swarm_interfaces__msg__DroneStatus *)raw_ros_message;
  {  // drone_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drone_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drone_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replan_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->replan_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replan_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // compute_time_us
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->compute_time_us);
    {
      int rc = PyObject_SetAttrString(_pymessage, "compute_time_us", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
