// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from swarm_interfaces:msg/UavMetric.idl
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
#include "swarm_interfaces/msg/detail/uav_metric__struct.h"
#include "swarm_interfaces/msg/detail/uav_metric__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool swarm_interfaces__msg__uav_metric__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("swarm_interfaces.msg._uav_metric.UavMetric", full_classname_dest, 42) == 0);
  }
  swarm_interfaces__msg__UavMetric * ros_message = _ros_message;
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
  {  // drone_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drone_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // active
    PyObject * field = PyObject_GetAttrString(_pymsg, "active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active = (Py_True == field);
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
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vx
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_3d
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_3d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_3d = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // has_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_link");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_link = (Py_True == field);
    Py_DECREF(field);
  }
  {  // nearest_ugv_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "nearest_ugv_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nearest_ugv_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ugv_distance_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "ugv_distance_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ugv_distance_m = PyFloat_AS_DOUBLE(field);
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
  {  // los
    PyObject * field = PyObject_GetAttrString(_pymsg, "los");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->los = (Py_True == field);
    Py_DECREF(field);
  }
  {  // detections_now
    PyObject * field = PyObject_GetAttrString(_pymsg, "detections_now");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->detections_now = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sensor_streams
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_streams");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_streams = PyLong_AsUnsignedLong(field);
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
  {  // has_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_reference");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_reference = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reference_relative
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_relative");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reference_relative = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reference_z_requested
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_z_requested");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reference_z_requested = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reference_z_clamped
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_z_clamped");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reference_z_clamped = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reference_z_clamped_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_z_clamped_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reference_z_clamped_flag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reference_age_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_age_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reference_age_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * swarm_interfaces__msg__uav_metric__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UavMetric */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("swarm_interfaces.msg._uav_metric");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UavMetric");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  swarm_interfaces__msg__UavMetric * ros_message = (swarm_interfaces__msg__UavMetric *)raw_ros_message;
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
  {  // active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active", field);
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
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_3d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_3d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_3d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_link
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_link ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nearest_ugv_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nearest_ugv_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nearest_ugv_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ugv_distance_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ugv_distance_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ugv_distance_m", field);
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
  {  // detections_now
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->detections_now);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detections_now", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_streams
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_streams);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_streams", field);
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
  {  // has_reference
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_reference ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_relative
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reference_relative ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_relative", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_z_requested
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reference_z_requested);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_z_requested", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_z_clamped
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reference_z_clamped);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_z_clamped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_z_clamped_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reference_z_clamped_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_z_clamped_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_age_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reference_age_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_age_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
