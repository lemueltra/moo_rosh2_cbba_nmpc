// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from swarm_world_interfaces:msg/SensorDetectionArray.idl
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
#include "swarm_world_interfaces/msg/detail/sensor_detection_array__struct.h"
#include "swarm_world_interfaces/msg/detail/sensor_detection_array__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "swarm_world_interfaces/msg/detail/sensor_detection__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool swarm_world_interfaces__msg__sensor_detection__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * swarm_world_interfaces__msg__sensor_detection__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool swarm_world_interfaces__msg__sensor_detection_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("swarm_world_interfaces.msg._sensor_detection_array.SensorDetectionArray", full_classname_dest, 71) == 0);
  }
  swarm_world_interfaces__msg__SensorDetectionArray * ros_message = _ros_message;
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
  {  // sensor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // parent_actor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "parent_actor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parent_actor_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sensor_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sensor_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_fov_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_fov_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_fov_deg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // upper_fov_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "upper_fov_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->upper_fov_deg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lower_fov_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "lower_fov_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lower_fov_deg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // detections
    PyObject * field = PyObject_GetAttrString(_pymsg, "detections");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'detections'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!swarm_world_interfaces__msg__SensorDetection__Sequence__init(&(ros_message->detections), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create swarm_world_interfaces__msg__SensorDetection__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    swarm_world_interfaces__msg__SensorDetection * dest = ros_message->detections.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!swarm_world_interfaces__msg__sensor_detection__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * swarm_world_interfaces__msg__sensor_detection_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorDetectionArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("swarm_world_interfaces.msg._sensor_detection_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorDetectionArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  swarm_world_interfaces__msg__SensorDetectionArray * ros_message = (swarm_world_interfaces__msg__SensorDetectionArray *)raw_ros_message;
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
  {  // sensor_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parent_actor_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->parent_actor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parent_actor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sensor_type.data,
      strlen(ros_message->sensor_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_fov_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_fov_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_fov_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // upper_fov_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->upper_fov_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "upper_fov_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lower_fov_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lower_fov_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lower_fov_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detections
    PyObject * field = NULL;
    size_t size = ros_message->detections.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    swarm_world_interfaces__msg__SensorDetection * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->detections.data[i]);
      PyObject * pyitem = swarm_world_interfaces__msg__sensor_detection__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "detections", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
