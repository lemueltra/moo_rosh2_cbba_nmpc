// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from swarm_interfaces:msg/UavLinkLatency.idl
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
#include "swarm_interfaces/msg/detail/uav_link_latency__struct.h"
#include "swarm_interfaces/msg/detail/uav_link_latency__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool swarm_interfaces__msg__uav_link_latency__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("swarm_interfaces.msg._uav_link_latency.UavLinkLatency", full_classname_dest, 53) == 0);
  }
  swarm_interfaces__msg__UavLinkLatency * ros_message = _ros_message;
  {  // drone_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drone_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ugv_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "ugv_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ugv_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // latency_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "latency_ms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latency_ms = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // los
    PyObject * field = PyObject_GetAttrString(_pymsg, "los");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->los = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * swarm_interfaces__msg__uav_link_latency__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UavLinkLatency */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("swarm_interfaces.msg._uav_link_latency");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UavLinkLatency");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  swarm_interfaces__msg__UavLinkLatency * ros_message = (swarm_interfaces__msg__UavLinkLatency *)raw_ros_message;
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
  {  // latency_ms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latency_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latency_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // los
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->los ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "los", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
