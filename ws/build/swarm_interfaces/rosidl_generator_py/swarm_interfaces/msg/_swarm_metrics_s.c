// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from swarm_interfaces:msg/SwarmMetrics.idl
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
#include "swarm_interfaces/msg/detail/swarm_metrics__struct.h"
#include "swarm_interfaces/msg/detail/swarm_metrics__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "swarm_interfaces/msg/detail/uav_metric__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool swarm_interfaces__msg__uav_metric__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * swarm_interfaces__msg__uav_metric__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool swarm_interfaces__msg__swarm_metrics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("swarm_interfaces.msg._swarm_metrics.SwarmMetrics", full_classname_dest, 48) == 0);
  }
  swarm_interfaces__msg__SwarmMetrics * ros_message = _ros_message;
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
  {  // active_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->active_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // active_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_ids");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint32_t);
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->active_ids), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->active_ids.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'active_ids'");
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
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->active_ids), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->active_ids.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint32_t tmp = PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // detections_mean_60s
    PyObject * field = PyObject_GetAttrString(_pymsg, "detections_mean_60s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->detections_mean_60s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latency_mean_60s
    PyObject * field = PyObject_GetAttrString(_pymsg, "latency_mean_60s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latency_mean_60s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latency_max_60s
    PyObject * field = PyObject_GetAttrString(_pymsg, "latency_max_60s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latency_max_60s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // samples_in_window
    PyObject * field = PyObject_GetAttrString(_pymsg, "samples_in_window");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->samples_in_window = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // window_capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "window_capacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->window_capacity = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coverage_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "coverage_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->coverage_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ugv_weighted_coverage
    PyObject * field = PyObject_GetAttrString(_pymsg, "ugv_weighted_coverage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ugv_weighted_coverage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // redundancy_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "redundancy_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->redundancy_score = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // planner_cycle_us
    PyObject * field = PyObject_GetAttrString(_pymsg, "planner_cycle_us");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->planner_cycle_us = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // planner_deadline_misses
    PyObject * field = PyObject_GetAttrString(_pymsg, "planner_deadline_misses");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->planner_deadline_misses = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // clamped_references
    PyObject * field = PyObject_GetAttrString(_pymsg, "clamped_references");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->clamped_references = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // clock_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "clock_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->clock_hz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sim_time_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "sim_time_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sim_time_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uavs
    PyObject * field = PyObject_GetAttrString(_pymsg, "uavs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'uavs'");
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
    if (!swarm_interfaces__msg__UavMetric__Sequence__init(&(ros_message->uavs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create swarm_interfaces__msg__UavMetric__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    swarm_interfaces__msg__UavMetric * dest = ros_message->uavs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!swarm_interfaces__msg__uav_metric__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * swarm_interfaces__msg__swarm_metrics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SwarmMetrics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("swarm_interfaces.msg._swarm_metrics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SwarmMetrics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  swarm_interfaces__msg__SwarmMetrics * ros_message = (swarm_interfaces__msg__SwarmMetrics *)raw_ros_message;
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
  {  // active_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->active_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_ids
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "active_ids");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->active_ids.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint32_t * src = &(ros_message->active_ids.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->active_ids.size * sizeof(uint32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // detections_mean_60s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->detections_mean_60s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detections_mean_60s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latency_mean_60s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latency_mean_60s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latency_mean_60s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latency_max_60s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latency_max_60s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latency_max_60s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // samples_in_window
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->samples_in_window);
    {
      int rc = PyObject_SetAttrString(_pymessage, "samples_in_window", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // window_capacity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->window_capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "window_capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coverage_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->coverage_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coverage_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ugv_weighted_coverage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ugv_weighted_coverage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ugv_weighted_coverage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // redundancy_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->redundancy_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "redundancy_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // planner_cycle_us
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->planner_cycle_us);
    {
      int rc = PyObject_SetAttrString(_pymessage, "planner_cycle_us", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // planner_deadline_misses
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->planner_deadline_misses);
    {
      int rc = PyObject_SetAttrString(_pymessage, "planner_deadline_misses", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clamped_references
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->clamped_references);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clamped_references", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clock_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->clock_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clock_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sim_time_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sim_time_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sim_time_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uavs
    PyObject * field = NULL;
    size_t size = ros_message->uavs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    swarm_interfaces__msg__UavMetric * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->uavs.data[i]);
      PyObject * pyitem = swarm_interfaces__msg__uav_metric__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "uavs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
