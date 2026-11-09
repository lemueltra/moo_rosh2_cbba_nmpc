// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from swarm_interfaces:msg/MetricEntryArray.idl
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
#include "swarm_interfaces/msg/detail/metric_entry_array__struct.h"
#include "swarm_interfaces/msg/detail/metric_entry_array__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "swarm_interfaces/msg/detail/metric_entry__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool swarm_interfaces__msg__metric_entry__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * swarm_interfaces__msg__metric_entry__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool swarm_interfaces__msg__metric_entry_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("swarm_interfaces.msg._metric_entry_array.MetricEntryArray", full_classname_dest, 57) == 0);
  }
  swarm_interfaces__msg__MetricEntryArray * ros_message = _ros_message;
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
  {  // model_based
    PyObject * field = PyObject_GetAttrString(_pymsg, "model_based");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->model_based = (Py_True == field);
    Py_DECREF(field);
  }
  {  // params_hash
    PyObject * field = PyObject_GetAttrString(_pymsg, "params_hash");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->params_hash, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // window_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "window_sec");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->window_sec = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // warming_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "warming_up");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->warming_up = (Py_True == field);
    Py_DECREF(field);
  }
  {  // n_frames_in_window
    PyObject * field = PyObject_GetAttrString(_pymsg, "n_frames_in_window");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->n_frames_in_window = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // entries
    PyObject * field = PyObject_GetAttrString(_pymsg, "entries");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'entries'");
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
    if (!swarm_interfaces__msg__MetricEntry__Sequence__init(&(ros_message->entries), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create swarm_interfaces__msg__MetricEntry__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    swarm_interfaces__msg__MetricEntry * dest = ros_message->entries.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!swarm_interfaces__msg__metric_entry__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * swarm_interfaces__msg__metric_entry_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MetricEntryArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("swarm_interfaces.msg._metric_entry_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MetricEntryArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  swarm_interfaces__msg__MetricEntryArray * ros_message = (swarm_interfaces__msg__MetricEntryArray *)raw_ros_message;
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
  {  // model_based
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->model_based ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "model_based", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params_hash
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->params_hash.data,
      strlen(ros_message->params_hash.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params_hash", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // window_sec
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->window_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "window_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warming_up
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->warming_up ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warming_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // n_frames_in_window
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->n_frames_in_window);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n_frames_in_window", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // entries
    PyObject * field = NULL;
    size_t size = ros_message->entries.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    swarm_interfaces__msg__MetricEntry * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->entries.data[i]);
      PyObject * pyitem = swarm_interfaces__msg__metric_entry__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "entries", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
