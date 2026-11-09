#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__ActorDefinition() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__msg__ActorDefinition__init(msg: *mut ActorDefinition) -> bool;
    fn swarm_world_interfaces__msg__ActorDefinition__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActorDefinition>, size: usize) -> bool;
    fn swarm_world_interfaces__msg__ActorDefinition__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActorDefinition>);
    fn swarm_world_interfaces__msg__ActorDefinition__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActorDefinition>, out_seq: *mut rosidl_runtime_rs::Sequence<ActorDefinition>) -> bool;
}

// Corresponds to swarm_world_interfaces__msg__ActorDefinition
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Definition for spawning an actor (UGV, UAV, Walker)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActorDefinition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub role_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub initial_pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parent_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attribute_keys: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attribute_values: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for ActorDefinition {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__msg__ActorDefinition__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__msg__ActorDefinition__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActorDefinition {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__ActorDefinition__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__ActorDefinition__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__ActorDefinition__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActorDefinition {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActorDefinition where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/msg/ActorDefinition";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__ActorDefinition() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__ActorState() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__msg__ActorState__init(msg: *mut ActorState) -> bool;
    fn swarm_world_interfaces__msg__ActorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActorState>, size: usize) -> bool;
    fn swarm_world_interfaces__msg__ActorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActorState>);
    fn swarm_world_interfaces__msg__ActorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActorState>, out_seq: *mut rosidl_runtime_rs::Sequence<ActorState>) -> bool;
}

// Corresponds to swarm_world_interfaces__msg__ActorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Live state of an actor

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub role_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::rmw::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bounding_box_extent: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_source: u8,

}

impl ActorState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTROL_DISABLED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTROL_AUTOPILOT: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTROL_NATIVE_TOPIC: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTROL_CARLA_AIR_CMD: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTROL_DIRECT_API: u8 = 4;

}


impl Default for ActorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__msg__ActorState__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__msg__ActorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__ActorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__ActorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__ActorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActorState where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/msg/ActorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__ActorState() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__ActorStateArray() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__msg__ActorStateArray__init(msg: *mut ActorStateArray) -> bool;
    fn swarm_world_interfaces__msg__ActorStateArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActorStateArray>, size: usize) -> bool;
    fn swarm_world_interfaces__msg__ActorStateArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActorStateArray>);
    fn swarm_world_interfaces__msg__ActorStateArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActorStateArray>, out_seq: *mut rosidl_runtime_rs::Sequence<ActorStateArray>) -> bool;
}

// Corresponds to swarm_world_interfaces__msg__ActorStateArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Array of actor live states

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActorStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actors: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ActorState>,

}



impl Default for ActorStateArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__msg__ActorStateArray__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__msg__ActorStateArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActorStateArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__ActorStateArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__ActorStateArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__ActorStateArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActorStateArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActorStateArray where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/msg/ActorStateArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__ActorStateArray() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__SensorDefinition() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__msg__SensorDefinition__init(msg: *mut SensorDefinition) -> bool;
    fn swarm_world_interfaces__msg__SensorDefinition__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SensorDefinition>, size: usize) -> bool;
    fn swarm_world_interfaces__msg__SensorDefinition__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SensorDefinition>);
    fn swarm_world_interfaces__msg__SensorDefinition__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SensorDefinition>, out_seq: *mut rosidl_runtime_rs::Sequence<SensorDefinition>) -> bool;
}

// Corresponds to swarm_world_interfaces__msg__SensorDefinition
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Definition for attaching a sensor (LiDAR, Radar, Camera) to an actor

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorDefinition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parent_actor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub transform: geometry_msgs::msg::rmw::Transform,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attribute_keys: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attribute_values: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for SensorDefinition {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__msg__SensorDefinition__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__msg__SensorDefinition__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SensorDefinition {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SensorDefinition__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SensorDefinition__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SensorDefinition__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SensorDefinition {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SensorDefinition where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/msg/SensorDefinition";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__SensorDefinition() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__SensorDetection() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__msg__SensorDetection__init(msg: *mut SensorDetection) -> bool;
    fn swarm_world_interfaces__msg__SensorDetection__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SensorDetection>, size: usize) -> bool;
    fn swarm_world_interfaces__msg__SensorDetection__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SensorDetection>);
    fn swarm_world_interfaces__msg__SensorDetection__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SensorDetection>, out_seq: *mut rosidl_runtime_rs::Sequence<SensorDetection>) -> bool;
}

// Corresponds to swarm_world_interfaces__msg__SensorDetection
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Single target detection from a sensor FoV evaluation

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorDetection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bbox_pose_world: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bbox_extent: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub range: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub azimuth: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub elevation: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub occluded: bool,

    /// True when part of the outline is visible and part is blocked (detected, but not in
    /// full). occluded == true means nothing of it is visible, yet it is inside the FoV.
    pub partially_occluded: bool,

    /// Continuous fraction of target outline samples in FoV that are occluded [0.0, 1.0].
    /// 0.0 = completely free, 1.0 = completely occluded.
    pub occlusion_ratio: f64,

    /// Point of the target that range/azimuth/elevation refer to: the nearest visible point
    /// of its outline. Draw the detection ray to this point, not to the bbox centre (the
    /// centre of a building is inside the building).
    pub aim_point: geometry_msgs::msg::rmw::Point,

}



impl Default for SensorDetection {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__msg__SensorDetection__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__msg__SensorDetection__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SensorDetection {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SensorDetection__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SensorDetection__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SensorDetection__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SensorDetection {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SensorDetection where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/msg/SensorDetection";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__SensorDetection() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__SensorDetectionArray() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__msg__SensorDetectionArray__init(msg: *mut SensorDetectionArray) -> bool;
    fn swarm_world_interfaces__msg__SensorDetectionArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SensorDetectionArray>, size: usize) -> bool;
    fn swarm_world_interfaces__msg__SensorDetectionArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SensorDetectionArray>);
    fn swarm_world_interfaces__msg__SensorDetectionArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SensorDetectionArray>, out_seq: *mut rosidl_runtime_rs::Sequence<SensorDetectionArray>) -> bool;
}

// Corresponds to swarm_world_interfaces__msg__SensorDetectionArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Array of detections from a sensor FoV evaluation

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorDetectionArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parent_actor_id: u32,

    /// The sensor volume these detections were computed with, so an operator (or a checker)
    /// never has to guess it: 'lidar', 'camera' or 'radar' plus the real numbers.
    pub sensor_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub range: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizontal_fov_deg: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub upper_fov_deg: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lower_fov_deg: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detections: rosidl_runtime_rs::Sequence<super::super::msg::rmw::SensorDetection>,

}



impl Default for SensorDetectionArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__msg__SensorDetectionArray__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__msg__SensorDetectionArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SensorDetectionArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SensorDetectionArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SensorDetectionArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SensorDetectionArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SensorDetectionArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SensorDetectionArray where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/msg/SensorDetectionArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__SensorDetectionArray() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__WeatherPreset() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__msg__WeatherPreset__init(msg: *mut WeatherPreset) -> bool;
    fn swarm_world_interfaces__msg__WeatherPreset__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WeatherPreset>, size: usize) -> bool;
    fn swarm_world_interfaces__msg__WeatherPreset__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WeatherPreset>);
    fn swarm_world_interfaces__msg__WeatherPreset__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WeatherPreset>, out_seq: *mut rosidl_runtime_rs::Sequence<WeatherPreset>) -> bool;
}

// Corresponds to swarm_world_interfaces__msg__WeatherPreset
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Atmospheric and environmental condition parameters

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WeatherPreset {

    // This member is not documented.
    #[allow(missing_docs)]
    pub preset_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cloudiness: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub precipitation: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub precipitation_deposits: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wind_intensity: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sun_azimuth_angle: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sun_altitude_angle: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fog_density: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fog_distance: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fog_falloff: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wetness: f32,

}



impl Default for WeatherPreset {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__msg__WeatherPreset__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__msg__WeatherPreset__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WeatherPreset {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__WeatherPreset__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__WeatherPreset__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__WeatherPreset__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WeatherPreset {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WeatherPreset where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/msg/WeatherPreset";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__WeatherPreset() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__SimulationStatus() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__msg__SimulationStatus__init(msg: *mut SimulationStatus) -> bool;
    fn swarm_world_interfaces__msg__SimulationStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SimulationStatus>, size: usize) -> bool;
    fn swarm_world_interfaces__msg__SimulationStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SimulationStatus>);
    fn swarm_world_interfaces__msg__SimulationStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SimulationStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<SimulationStatus>) -> bool;
}

// Corresponds to swarm_world_interfaces__msg__SimulationStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Live simulation status and clock mode telemetry

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulationStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub step_count: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub elapsed_sim_time: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fixed_delta_seconds: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_active_ugvs: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_active_uavs: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_active_sensors: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sync_waiting: bool,

}

impl SimulationStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TIME_MODE_ASYNC: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TIME_MODE_SYNC: u8 = 1;

}


impl Default for SimulationStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__msg__SimulationStatus__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__msg__SimulationStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SimulationStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SimulationStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SimulationStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__SimulationStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SimulationStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SimulationStatus where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/msg/SimulationStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__SimulationStatus() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__NpcSpawnSummary() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__msg__NpcSpawnSummary__init(msg: *mut NpcSpawnSummary) -> bool;
    fn swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NpcSpawnSummary>, size: usize) -> bool;
    fn swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NpcSpawnSummary>);
    fn swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NpcSpawnSummary>, out_seq: *mut rosidl_runtime_rs::Sequence<NpcSpawnSummary>) -> bool;
}

// Corresponds to swarm_world_interfaces__msg__NpcSpawnSummary
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Result of one NPC spawning run (swarm_npc_spawner, milestone M3)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NpcSpawnSummary {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// seed used for the sampling (reproducibility)
    pub seed: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requested_vehicles: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requested_pedestrians: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spawned_vehicles: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spawned_pedestrians: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vehicle_actor_ids: rosidl_runtime_rs::Sequence<u32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pedestrian_actor_ids: rosidl_runtime_rs::Sequence<u32>,

    /// cyclic blueprint list actually used
    pub vehicle_types: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pedestrian_types: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// wall time spent spawning
    pub elapsed_s: f64,

}



impl Default for NpcSpawnSummary {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__msg__NpcSpawnSummary__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__msg__NpcSpawnSummary__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NpcSpawnSummary {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NpcSpawnSummary {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NpcSpawnSummary where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/msg/NpcSpawnSummary";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__msg__NpcSpawnSummary() }
  }
}


