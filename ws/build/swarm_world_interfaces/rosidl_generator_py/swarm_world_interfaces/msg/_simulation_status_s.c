// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from swarm_world_interfaces:msg/SimulationStatus.idl
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
#include "swarm_world_interfaces/msg/detail/simulation_status__struct.h"
#include "swarm_world_interfaces/msg/detail/simulation_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool swarm_world_interfaces__msg__simulation_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("swarm_world_interfaces.msg._simulation_status.SimulationStatus", full_classname_dest, 62) == 0);
  }
  swarm_world_interfaces__msg__SimulationStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // step_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->step_count = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // elapsed_sim_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "elapsed_sim_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elapsed_sim_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fixed_delta_seconds
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_delta_seconds");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fixed_delta_seconds = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_active_ugvs
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_active_ugvs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_active_ugvs = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_active_uavs
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_active_uavs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_active_uavs = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_active_sensors
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_active_sensors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_active_sensors = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sync_waiting
    PyObject * field = PyObject_GetAttrString(_pymsg, "sync_waiting");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sync_waiting = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * swarm_world_interfaces__msg__simulation_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SimulationStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("swarm_world_interfaces.msg._simulation_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SimulationStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  swarm_world_interfaces__msg__SimulationStatus * ros_message = (swarm_world_interfaces__msg__SimulationStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->step_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elapsed_sim_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elapsed_sim_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elapsed_sim_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_delta_seconds
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fixed_delta_seconds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixed_delta_seconds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_active_ugvs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_active_ugvs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_active_ugvs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_active_uavs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_active_uavs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_active_uavs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_active_sensors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_active_sensors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_active_sensors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sync_waiting
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sync_waiting ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sync_waiting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
