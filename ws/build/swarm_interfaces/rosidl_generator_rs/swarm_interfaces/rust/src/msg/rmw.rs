#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneActiveSet() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__DroneActiveSet__init(msg: *mut DroneActiveSet) -> bool;
    fn swarm_interfaces__msg__DroneActiveSet__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DroneActiveSet>, size: usize) -> bool;
    fn swarm_interfaces__msg__DroneActiveSet__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DroneActiveSet>);
    fn swarm_interfaces__msg__DroneActiveSet__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DroneActiveSet>, out_seq: *mut rosidl_runtime_rs::Sequence<DroneActiveSet>) -> bool;
}

// Corresponds to swarm_interfaces__msg__DroneActiveSet
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Level-triggered active set of drone IDs

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneActiveSet {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_ids: rosidl_runtime_rs::Sequence<u32>,

}



impl Default for DroneActiveSet {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__DroneActiveSet__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__DroneActiveSet__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DroneActiveSet {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneActiveSet__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneActiveSet__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneActiveSet__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DroneActiveSet {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DroneActiveSet where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/DroneActiveSet";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneActiveSet() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneReference() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__DroneReference__init(msg: *mut DroneReference) -> bool;
    fn swarm_interfaces__msg__DroneReference__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DroneReference>, size: usize) -> bool;
    fn swarm_interfaces__msg__DroneReference__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DroneReference>);
    fn swarm_interfaces__msg__DroneReference__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DroneReference>, out_seq: *mut rosidl_runtime_rs::Sequence<DroneReference>) -> bool;
}

// Corresponds to swarm_interfaces__msg__DroneReference
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Reference pose and maximum speed for a single active drone

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneReference {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,

    /// 0 = use default speed limit
    pub max_speed: f64,

    /// absolute altitude, valid range [2.5, 35.0]
    pub z: f64,

    /// reference UGV for the relative pose
    pub ugv_id: u32,

    /// true = (x, y, yaw) are relative to the UGV body frame
    pub frame_relative: bool,

}



impl Default for DroneReference {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__DroneReference__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__DroneReference__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DroneReference {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneReference__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneReference__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneReference__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DroneReference {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DroneReference where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/DroneReference";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneReference() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneReferenceArray() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__DroneReferenceArray__init(msg: *mut DroneReferenceArray) -> bool;
    fn swarm_interfaces__msg__DroneReferenceArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DroneReferenceArray>, size: usize) -> bool;
    fn swarm_interfaces__msg__DroneReferenceArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DroneReferenceArray>);
    fn swarm_interfaces__msg__DroneReferenceArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DroneReferenceArray>, out_seq: *mut rosidl_runtime_rs::Sequence<DroneReferenceArray>) -> bool;
}

// Corresponds to swarm_interfaces__msg__DroneReferenceArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Array of references for active drones

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneReferenceArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub references: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DroneReference>,

}



impl Default for DroneReferenceArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__DroneReferenceArray__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__DroneReferenceArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DroneReferenceArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneReferenceArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneReferenceArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneReferenceArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DroneReferenceArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DroneReferenceArray where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/DroneReferenceArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneReferenceArray() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneCommand() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__DroneCommand__init(msg: *mut DroneCommand) -> bool;
    fn swarm_interfaces__msg__DroneCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DroneCommand>, size: usize) -> bool;
    fn swarm_interfaces__msg__DroneCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DroneCommand>);
    fn swarm_interfaces__msg__DroneCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DroneCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<DroneCommand>) -> bool;
}

// Corresponds to swarm_interfaces__msg__DroneCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Actuation velocity command for a single drone in world frame 'map' (SI units)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vy: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_rate: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vz: f64,

}



impl Default for DroneCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__DroneCommand__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__DroneCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DroneCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DroneCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DroneCommand where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/DroneCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneCommand() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneCommandArray() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__DroneCommandArray__init(msg: *mut DroneCommandArray) -> bool;
    fn swarm_interfaces__msg__DroneCommandArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DroneCommandArray>, size: usize) -> bool;
    fn swarm_interfaces__msg__DroneCommandArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DroneCommandArray>);
    fn swarm_interfaces__msg__DroneCommandArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DroneCommandArray>, out_seq: *mut rosidl_runtime_rs::Sequence<DroneCommandArray>) -> bool;
}

// Corresponds to swarm_interfaces__msg__DroneCommandArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Array of actuation commands for all N_max drones, ordered by drone_id

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneCommandArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commands: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DroneCommand>,

}



impl Default for DroneCommandArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__DroneCommandArray__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__DroneCommandArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DroneCommandArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneCommandArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneCommandArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneCommandArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DroneCommandArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DroneCommandArray where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/DroneCommandArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneCommandArray() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneState() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__DroneState__init(msg: *mut DroneState) -> bool;
    fn swarm_interfaces__msg__DroneState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DroneState>, size: usize) -> bool;
    fn swarm_interfaces__msg__DroneState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DroneState>);
    fn swarm_interfaces__msg__DroneState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DroneState>, out_seq: *mut rosidl_runtime_rs::Sequence<DroneState>) -> bool;
}

// Corresponds to swarm_interfaces__msg__DroneState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Kinematic state of a single drone in world frame 'map' (SI units)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vy: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_rate: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vz: f64,

}



impl Default for DroneState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__DroneState__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__DroneState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DroneState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DroneState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DroneState where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/DroneState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneState() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneStateArray() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__DroneStateArray__init(msg: *mut DroneStateArray) -> bool;
    fn swarm_interfaces__msg__DroneStateArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DroneStateArray>, size: usize) -> bool;
    fn swarm_interfaces__msg__DroneStateArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DroneStateArray>);
    fn swarm_interfaces__msg__DroneStateArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DroneStateArray>, out_seq: *mut rosidl_runtime_rs::Sequence<DroneStateArray>) -> bool;
}

// Corresponds to swarm_interfaces__msg__DroneStateArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Full kinematic state of all N_max drones

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DroneState>,

}



impl Default for DroneStateArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__DroneStateArray__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__DroneStateArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DroneStateArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneStateArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneStateArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneStateArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DroneStateArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DroneStateArray where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/DroneStateArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneStateArray() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneStatus() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__DroneStatus__init(msg: *mut DroneStatus) -> bool;
    fn swarm_interfaces__msg__DroneStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DroneStatus>, size: usize) -> bool;
    fn swarm_interfaces__msg__DroneStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DroneStatus>);
    fn swarm_interfaces__msg__DroneStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DroneStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<DroneStatus>) -> bool;
}

// Corresponds to swarm_interfaces__msg__DroneStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Status and diagnostics of a single drone in the planner

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position_error: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_error: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub eta: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub replan_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub compute_time_us: f64,

}

impl DroneStatus {
    /// Operational Modes
    pub const MODE_INACTIVE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_HOLD: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_PLANNING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_TRACKING: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_REACHED: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_REFERENCE_STALE: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_REFERENCE_INVALID: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_PLAN_FAILED: u8 = 7;

}


impl Default for DroneStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__DroneStatus__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__DroneStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DroneStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DroneStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DroneStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DroneStatus where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/DroneStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DroneStatus() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__PlannerStatus() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__PlannerStatus__init(msg: *mut PlannerStatus) -> bool;
    fn swarm_interfaces__msg__PlannerStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlannerStatus>, size: usize) -> bool;
    fn swarm_interfaces__msg__PlannerStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlannerStatus>);
    fn swarm_interfaces__msg__PlannerStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlannerStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<PlannerStatus>) -> bool;
}

// Corresponds to swarm_interfaces__msg__PlannerStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Global diagnostics of the drone planner and controller node

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlannerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drones: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DroneStatus>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cycle_time_us: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cycle_time_max_us: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deadline_misses: u32,

    /// total references clamped to the altitude/speed limits
    pub clamped_references: u32,

}



impl Default for PlannerStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__PlannerStatus__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__PlannerStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlannerStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__PlannerStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__PlannerStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__PlannerStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlannerStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlannerStatus where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/PlannerStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__PlannerStatus() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UavMetric() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__UavMetric__init(msg: *mut UavMetric) -> bool;
    fn swarm_interfaces__msg__UavMetric__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UavMetric>, size: usize) -> bool;
    fn swarm_interfaces__msg__UavMetric__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UavMetric>);
    fn swarm_interfaces__msg__UavMetric__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UavMetric>, out_seq: *mut rosidl_runtime_rs::Sequence<UavMetric>) -> bool;
}

// Corresponds to swarm_interfaces__msg__UavMetric
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Every metric the multi-objective optimizer uses, for ONE UAV slot (release 3.2.0).
///
/// One row of the RViz2 metrics dashboard. Field for field this is what the optimizer
/// reads or produces; see docs/PLANO_PAINEL_METRICAS_RVIZ.md §1.1 for the source of
/// each field and docs/CONTRATO_OTIMIZADOR.md for the contract it belongs to.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UavMetric {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_id: u32,

    /// exactly /drones/state.active (objective 3: minimize)
    pub active: bool,

    /// DroneStatus mode: 0 inactive .. 7 plan failed
    pub mode: u8,

    /// Pose in the map frame (the frame every reference is resolved into).
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,

    /// altitude: optimization variable, [2.5, 35.0] m
    pub z: f64,

    /// Kinematics. speed_3d = |(vx, vy, vz)|, limited to 5.0 m/s.
    pub vx: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vy: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vz: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_3d: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_rate: f64,

    /// Link to the nearest UGV (objective 2). Valid only while the UAV is active AND the
    /// communication layer has a link for it; `has_link` is the validity flag.
    pub has_link: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nearest_ugv_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ugv_distance_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latency_ms: f64,

    /// false = non-line-of-sight (NLOS penalty)
    pub los: bool,

    /// Objective 1: how many distinct targets this UAV's own sensors are detecting now
    /// (union over its LiDAR and camera streams), plus how many sensor streams feed it.
    pub detections_now: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_streams: u32,

    /// Execution quality reported by the planner.
    pub position_error: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_error: f64,

    /// Reference currently applied to this UAV.
    pub has_reference: bool,

    /// true = expressed in the nearest UGV's body frame
    pub reference_relative: bool,

    /// as received from the optimizer
    pub reference_z_requested: f64,

    /// after the [2.5, 35.0] saturation
    pub reference_z_clamped: f64,

    /// true when the requested z left the operating range
    pub reference_z_clamped_flag: bool,

    /// time since the last reference arrived
    pub reference_age_s: f64,

}



impl Default for UavMetric {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__UavMetric__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__UavMetric__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UavMetric {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavMetric__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavMetric__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavMetric__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UavMetric {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UavMetric where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/UavMetric";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UavMetric() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__SwarmMetrics() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__SwarmMetrics__init(msg: *mut SwarmMetrics) -> bool;
    fn swarm_interfaces__msg__SwarmMetrics__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SwarmMetrics>, size: usize) -> bool;
    fn swarm_interfaces__msg__SwarmMetrics__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SwarmMetrics>);
    fn swarm_interfaces__msg__SwarmMetrics__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SwarmMetrics>, out_seq: *mut rosidl_runtime_rs::Sequence<SwarmMetrics>) -> bool;
}

// Corresponds to swarm_interfaces__msg__SwarmMetrics
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Snapshot of every metric the optimizer uses: aggregate block + one row per UAV slot.
/// Published by swarm_visualizer's metrics panel (5 Hz) and rendered by RViz2.
/// Sources are listed in docs/PLANO_PAINEL_METRICAS_RVIZ.md §1.2.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwarmMetrics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// --- objective 3 -----------------------------------------------------------------
    /// len(active_ids): exact, never averaged
    pub active_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_ids: rosidl_runtime_rs::Sequence<u32>,

    /// --- objectives 1 and 2, 60 s sliding window (/metrics/optimizer_feedback) --------
    pub detections_mean_60s: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latency_mean_60s: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latency_max_60s: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub samples_in_window: u32,

    /// 300 = 60 s x 5 Hz
    pub window_capacity: u32,

    /// --- ROI coverage (/coverage/metrics) --------------------------------------
    pub coverage_ratio: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ugv_weighted_coverage: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub redundancy_score: f64,

    /// --- health ----------------------------------------------------------------------
    pub planner_cycle_us: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planner_deadline_misses: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub clamped_references: u32,

    /// measured /clock rate
    pub clock_hz: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sim_time_s: f64,

    /// --- per UAV (one entry per slot, active or not) ---------------------------------
    pub uavs: rosidl_runtime_rs::Sequence<super::super::msg::rmw::UavMetric>,

}



impl Default for SwarmMetrics {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__SwarmMetrics__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__SwarmMetrics__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SwarmMetrics {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__SwarmMetrics__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__SwarmMetrics__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__SwarmMetrics__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SwarmMetrics {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SwarmMetrics where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/SwarmMetrics";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__SwarmMetrics() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UavDetectionCount() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__UavDetectionCount__init(msg: *mut UavDetectionCount) -> bool;
    fn swarm_interfaces__msg__UavDetectionCount__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UavDetectionCount>, size: usize) -> bool;
    fn swarm_interfaces__msg__UavDetectionCount__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UavDetectionCount>);
    fn swarm_interfaces__msg__UavDetectionCount__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UavDetectionCount>, out_seq: *mut rosidl_runtime_rs::Sequence<UavDetectionCount>) -> bool;
}

// Corresponds to swarm_interfaces__msg__UavDetectionCount
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// How many distinct targets ONE UAV is detecting right now (release 3.2.0).
///
/// Computed in C++ by swarm_visualizer's marker publisher from the per-sensor streams
/// (`/sensors/<id>/detections`, grouped by `parent_actor_id`). It exists so the Python
/// metrics panel does not have to subscribe to ten 50 Hz streams itself: doing that
/// cost 68 % of a core in deserialisation alone (measured; see MEDICOES M7e).

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UavDetectionCount {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_id: u32,

    /// distinct non-occluded actors over the UAV's own sensors
    pub detections_now: u32,

    /// how many sensor streams reported within the timeout
    pub sensor_streams: u32,

}



impl Default for UavDetectionCount {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__UavDetectionCount__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__UavDetectionCount__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UavDetectionCount {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavDetectionCount__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavDetectionCount__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavDetectionCount__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UavDetectionCount {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UavDetectionCount where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/UavDetectionCount";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UavDetectionCount() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UavDetectionCountArray() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__UavDetectionCountArray__init(msg: *mut UavDetectionCountArray) -> bool;
    fn swarm_interfaces__msg__UavDetectionCountArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UavDetectionCountArray>, size: usize) -> bool;
    fn swarm_interfaces__msg__UavDetectionCountArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UavDetectionCountArray>);
    fn swarm_interfaces__msg__UavDetectionCountArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UavDetectionCountArray>, out_seq: *mut rosidl_runtime_rs::Sequence<UavDetectionCountArray>) -> bool;
}

// Corresponds to swarm_interfaces__msg__UavDetectionCountArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// One entry per UAV that has sensor streams (see UavDetectionCount). Published at 5 Hz.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UavDetectionCountArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uavs: rosidl_runtime_rs::Sequence<super::super::msg::rmw::UavDetectionCount>,

}



impl Default for UavDetectionCountArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__UavDetectionCountArray__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__UavDetectionCountArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UavDetectionCountArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavDetectionCountArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavDetectionCountArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavDetectionCountArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UavDetectionCountArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UavDetectionCountArray where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/UavDetectionCountArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UavDetectionCountArray() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DetectionSummary() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__DetectionSummary__init(msg: *mut DetectionSummary) -> bool;
    fn swarm_interfaces__msg__DetectionSummary__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetectionSummary>, size: usize) -> bool;
    fn swarm_interfaces__msg__DetectionSummary__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetectionSummary>);
    fn swarm_interfaces__msg__DetectionSummary__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetectionSummary>, out_seq: *mut rosidl_runtime_rs::Sequence<DetectionSummary>) -> bool;
}

// Corresponds to swarm_interfaces__msg__DetectionSummary
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// How many distinct objects the active UAVs are detecting right now (release 3.2.0).
///
/// Published by swarm_visualizer's marker publisher, which is where the per-sensor
/// streams are already reduced. It exists so the metrics panel can print the same
/// summary that the 3D overlay shows ("SEEN NOW: 7 (buildings 2, vehicles 3, ...)")
/// and the operator can compare it with `/metrics/optimizer_feedback`, which reports a
/// 60 s mean and not an instantaneous count.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectionSummary {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub buildings: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vehicles: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pedestrians: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet: u32,

    /// Objects that are inside some sensor's field of view but blocked by an occluder: the
    /// overlay draws them in red, so "inside the FoV and not seen" is visible instead of
    /// silently missing. `partially_blocked` counts the ones detected with a partial
    /// silhouette.
    pub blocked: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub partially_blocked: u32,

}



impl Default for DetectionSummary {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__DetectionSummary__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__DetectionSummary__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetectionSummary {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DetectionSummary__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DetectionSummary__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__DetectionSummary__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetectionSummary {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetectionSummary where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/DetectionSummary";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__DetectionSummary() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__OptimizerFeedback() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__OptimizerFeedback__init(msg: *mut OptimizerFeedback) -> bool;
    fn swarm_interfaces__msg__OptimizerFeedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OptimizerFeedback>, size: usize) -> bool;
    fn swarm_interfaces__msg__OptimizerFeedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OptimizerFeedback>);
    fn swarm_interfaces__msg__OptimizerFeedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OptimizerFeedback>, out_seq: *mut rosidl_runtime_rs::Sequence<OptimizerFeedback>) -> bool;
}

// Corresponds to swarm_interfaces__msg__OptimizerFeedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Sliding-window metrics for the multi-objective optimizer (5 Hz publication)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OptimizerFeedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// exact active UAV list (never averaged)
    pub active_ids: rosidl_runtime_rs::Sequence<u32>,

    /// mean distinct detected targets in the 60 s window
    pub detections_mean_60s: f64,

    /// mean latency over the window
    pub latency_mean_60s: f64,

    /// worst latency in the window
    pub latency_max_60s: f64,

    /// samples currently in the window
    pub samples_in_window: u32,

}



impl Default for OptimizerFeedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__OptimizerFeedback__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__OptimizerFeedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OptimizerFeedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__OptimizerFeedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__OptimizerFeedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__OptimizerFeedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OptimizerFeedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OptimizerFeedback where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/OptimizerFeedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__OptimizerFeedback() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UavLinkLatency() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__UavLinkLatency__init(msg: *mut UavLinkLatency) -> bool;
    fn swarm_interfaces__msg__UavLinkLatency__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UavLinkLatency>, size: usize) -> bool;
    fn swarm_interfaces__msg__UavLinkLatency__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UavLinkLatency>);
    fn swarm_interfaces__msg__UavLinkLatency__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UavLinkLatency>, out_seq: *mut rosidl_runtime_rs::Sequence<UavLinkLatency>) -> bool;
}

// Corresponds to swarm_interfaces__msg__UavLinkLatency
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Communication latency between one active UAV and its nearest UGV

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UavLinkLatency {

    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_id: u32,

    /// nearest UGV (from /comm/nearest_ugv)
    pub ugv_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latency_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_m: f64,

    /// true = line of sight (no building in between)
    pub los: bool,

}



impl Default for UavLinkLatency {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__UavLinkLatency__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__UavLinkLatency__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UavLinkLatency {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavLinkLatency__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavLinkLatency__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavLinkLatency__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UavLinkLatency {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UavLinkLatency where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/UavLinkLatency";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UavLinkLatency() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UavLinkLatencyArray() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__UavLinkLatencyArray__init(msg: *mut UavLinkLatencyArray) -> bool;
    fn swarm_interfaces__msg__UavLinkLatencyArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UavLinkLatencyArray>, size: usize) -> bool;
    fn swarm_interfaces__msg__UavLinkLatencyArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UavLinkLatencyArray>);
    fn swarm_interfaces__msg__UavLinkLatencyArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UavLinkLatencyArray>, out_seq: *mut rosidl_runtime_rs::Sequence<UavLinkLatencyArray>) -> bool;
}

// Corresponds to swarm_interfaces__msg__UavLinkLatencyArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Per-UAV latency to the nearest UGV (one entry per ACTIVE UAV, published at 5 Hz)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UavLinkLatencyArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub links: rosidl_runtime_rs::Sequence<super::super::msg::rmw::UavLinkLatency>,

}



impl Default for UavLinkLatencyArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__UavLinkLatencyArray__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__UavLinkLatencyArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UavLinkLatencyArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavLinkLatencyArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavLinkLatencyArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UavLinkLatencyArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UavLinkLatencyArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UavLinkLatencyArray where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/UavLinkLatencyArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UavLinkLatencyArray() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UgvCommand() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__UgvCommand__init(msg: *mut UgvCommand) -> bool;
    fn swarm_interfaces__msg__UgvCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UgvCommand>, size: usize) -> bool;
    fn swarm_interfaces__msg__UgvCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UgvCommand>);
    fn swarm_interfaces__msg__UgvCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UgvCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<UgvCommand>) -> bool;
}

// Corresponds to swarm_interfaces__msg__UgvCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Carla-style vehicle control for one UGV

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UgvCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ugv_id: u32,

    /// [0.0, 1.0]
    pub throttle: f64,

    /// [-1.0, 1.0]
    pub steer: f64,

    /// [0.0, 1.0]
    pub brake: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_brake: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reverse: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_cmd: bool,

}



impl Default for UgvCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__UgvCommand__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__UgvCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UgvCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UgvCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UgvCommand where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/UgvCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UgvCommand() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UgvCommandArray() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__UgvCommandArray__init(msg: *mut UgvCommandArray) -> bool;
    fn swarm_interfaces__msg__UgvCommandArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UgvCommandArray>, size: usize) -> bool;
    fn swarm_interfaces__msg__UgvCommandArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UgvCommandArray>);
    fn swarm_interfaces__msg__UgvCommandArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UgvCommandArray>, out_seq: *mut rosidl_runtime_rs::Sequence<UgvCommandArray>) -> bool;
}

// Corresponds to swarm_interfaces__msg__UgvCommandArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Control for every UGV of the fleet

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UgvCommandArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commands: rosidl_runtime_rs::Sequence<super::super::msg::rmw::UgvCommand>,

}



impl Default for UgvCommandArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__UgvCommandArray__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__UgvCommandArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UgvCommandArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvCommandArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvCommandArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvCommandArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UgvCommandArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UgvCommandArray where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/UgvCommandArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UgvCommandArray() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UgvState() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__UgvState__init(msg: *mut UgvState) -> bool;
    fn swarm_interfaces__msg__UgvState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UgvState>, size: usize) -> bool;
    fn swarm_interfaces__msg__UgvState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UgvState>);
    fn swarm_interfaces__msg__UgvState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UgvState>, out_seq: *mut rosidl_runtime_rs::Sequence<UgvState>) -> bool;
}

// Corresponds to swarm_interfaces__msg__UgvState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// State of one UGV of the pooled fleet (frame 'map', SI units)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UgvState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ugv_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,

    /// longitudinal speed
    pub v: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub route_length_m: f64,

}



impl Default for UgvState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__UgvState__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__UgvState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UgvState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UgvState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UgvState where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/UgvState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UgvState() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UgvStateArray() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__UgvStateArray__init(msg: *mut UgvStateArray) -> bool;
    fn swarm_interfaces__msg__UgvStateArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UgvStateArray>, size: usize) -> bool;
    fn swarm_interfaces__msg__UgvStateArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UgvStateArray>);
    fn swarm_interfaces__msg__UgvStateArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UgvStateArray>, out_seq: *mut rosidl_runtime_rs::Sequence<UgvStateArray>) -> bool;
}

// Corresponds to swarm_interfaces__msg__UgvStateArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// State of every UGV in the fleet

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UgvStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::UgvState>,

}



impl Default for UgvStateArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__UgvStateArray__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__UgvStateArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UgvStateArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvStateArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvStateArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__UgvStateArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UgvStateArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UgvStateArray where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/UgvStateArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__UgvStateArray() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__MetricEntry() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__MetricEntry__init(msg: *mut MetricEntry) -> bool;
    fn swarm_interfaces__msg__MetricEntry__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MetricEntry>, size: usize) -> bool;
    fn swarm_interfaces__msg__MetricEntry__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MetricEntry>);
    fn swarm_interfaces__msg__MetricEntry__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MetricEntry>, out_seq: *mut rosidl_runtime_rs::Sequence<MetricEntry>) -> bool;
}

// Corresponds to swarm_interfaces__msg__MetricEntry
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Single generic metric entry

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetricEntry {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unit: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub valid: bool,

}



impl Default for MetricEntry {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__MetricEntry__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__MetricEntry__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MetricEntry {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__MetricEntry__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__MetricEntry__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__MetricEntry__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MetricEntry {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MetricEntry where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/MetricEntry";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__MetricEntry() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__MetricEntryArray() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__MetricEntryArray__init(msg: *mut MetricEntryArray) -> bool;
    fn swarm_interfaces__msg__MetricEntryArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MetricEntryArray>, size: usize) -> bool;
    fn swarm_interfaces__msg__MetricEntryArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MetricEntryArray>);
    fn swarm_interfaces__msg__MetricEntryArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MetricEntryArray>, out_seq: *mut rosidl_runtime_rs::Sequence<MetricEntryArray>) -> bool;
}

// Corresponds to swarm_interfaces__msg__MetricEntryArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Array of generic metric entries with metadata

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetricEntryArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model_based: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params_hash: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub window_sec: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warming_up: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub n_frames_in_window: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub entries: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MetricEntry>,

}



impl Default for MetricEntryArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__MetricEntryArray__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__MetricEntryArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MetricEntryArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__MetricEntryArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__MetricEntryArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__MetricEntryArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MetricEntryArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MetricEntryArray where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/MetricEntryArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__MetricEntryArray() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__ExpectedMetricsGt() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__ExpectedMetricsGt__init(msg: *mut ExpectedMetricsGt) -> bool;
    fn swarm_interfaces__msg__ExpectedMetricsGt__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExpectedMetricsGt>, size: usize) -> bool;
    fn swarm_interfaces__msg__ExpectedMetricsGt__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExpectedMetricsGt>);
    fn swarm_interfaces__msg__ExpectedMetricsGt__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExpectedMetricsGt>, out_seq: *mut rosidl_runtime_rs::Sequence<ExpectedMetricsGt>) -> bool;
}

// Corresponds to swarm_interfaces__msg__ExpectedMetricsGt
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Structured expected perception metrics WITH Ground Truth (G01-G20)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpectedMetricsGt {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model_based: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params_hash: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub window_sec: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warming_up: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub n_frames_in_window: u32,

    /// G01 / G02 / G03 - AP, APH, F1
    pub map: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub maph: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub classes: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ap_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aph_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub f1_max_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub optimal_conf_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// G04 - Analyzer Ratios
    pub ratio_tp_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ratio_fp_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ratio_fn_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// G05 - Error Statistics (GT - Est)
    pub err_dist_mean_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_dist_rms_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_yaw_mean_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_yaw_std_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_vel_mean_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// G06 - MOTP
    pub motp_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// G07 - CLEAR MOTA & ID Switches
    pub mota_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id_switch_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// G08 - Trajectory Prediction
    pub pred_ade: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pred_fde: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pred_miss_rate: f64,

    /// G09 - BEV Corner Dispersion
    pub corner_mean_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub corner_p95_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// G10 - Heading Flip Rate
    pub flip_rate_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mflip_rate: f64,

    /// G11 - Nearest Surface Footprint Distance
    pub nsurf_mean_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// G12 - Expected Calibration Error
    pub ece: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ece_macro: f64,

    /// G13 - Confident Error Rate
    pub confident_error_rate: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confident_errors_per_frame: f64,

    /// G14 - Class Confusion Matrix
    pub confusion_pairs: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confusion_values: rosidl_runtime_rs::Sequence<f64>,

    /// G15 & G16 - Critical Reachability & Collision Weighted AP
    pub critical_fp: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub critical_fn: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cw_map: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cw_map_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// G17 - Consecutive FN Duration Span
    pub fn_span_mean_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// G18 - Frame Pass Rates
    pub pass_rate_num_tp: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pass_rate_num_gt_tp: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pass_rate_metrics_score: f64,

    /// G19 - nuScenes Errors
    pub err_ate_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_aoe_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_ase_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_ave_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// G20 - Stratified Base Counts
    pub n_gt_total: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_tp_total: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_fp_total: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_fn_total: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub n_gt_per_class: rosidl_runtime_rs::Sequence<u32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_tp_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_fp_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_fn_per_class: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for ExpectedMetricsGt {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__ExpectedMetricsGt__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__ExpectedMetricsGt__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExpectedMetricsGt {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__ExpectedMetricsGt__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__ExpectedMetricsGt__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__ExpectedMetricsGt__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExpectedMetricsGt {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExpectedMetricsGt where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/ExpectedMetricsGt";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__ExpectedMetricsGt() }
  }
}


#[link(name = "swarm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__ExpectedMetricsNoGt() -> *const std::ffi::c_void;
}

#[link(name = "swarm_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_interfaces__msg__ExpectedMetricsNoGt__init(msg: *mut ExpectedMetricsNoGt) -> bool;
    fn swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExpectedMetricsNoGt>, size: usize) -> bool;
    fn swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExpectedMetricsNoGt>);
    fn swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExpectedMetricsNoGt>, out_seq: *mut rosidl_runtime_rs::Sequence<ExpectedMetricsNoGt>) -> bool;
}

// Corresponds to swarm_interfaces__msg__ExpectedMetricsNoGt
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Structured expected perception metrics WITHOUT Ground Truth (N01-N20)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpectedMetricsNoGt {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model_based: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params_hash: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub window_sec: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warming_up: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub n_frames_in_window: u32,

    /// N01 - Lateral Deviation (moving average)
    pub classes: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lateral_deviation_mean: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lateral_deviation_min: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lateral_deviation_max: rosidl_runtime_rs::Sequence<f64>,

    /// N02 - Yaw Deviation
    pub yaw_deviation_mean: rosidl_runtime_rs::Sequence<f64>,

    /// N03 - Yaw Rate (stationary)
    pub yaw_rate_mean: rosidl_runtime_rs::Sequence<f64>,

    /// N04 - Predicted Path Deviation
    pub predicted_path_deviation_mean: rosidl_runtime_rs::Sequence<f64>,

    /// N05, N06, N07, N08 - Object Counts
    pub total_objects_count: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub average_objects_count: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub interval_average_objects_count: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub all_object_count: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_count_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// N09 - Expected Maximum Detection Range
    pub max_distance_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// N10 - Latencies
    pub meas_to_tracked_latency_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub prediction_latency_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_latency_ms: f64,

    /// N11 - Cross-Sensor Confirmation
    pub cross_confirm_rate: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unconfirmed_rate: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub missed_by_other_rate: f64,

    /// N12 - Class Disagreement
    pub class_disagree_rate: f64,

    /// N13 - Range Discrepancy
    pub range_discrepancy_mean: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub range_discrepancy_p95: f64,

    /// N14 - Stationary Jitter & Size CV
    pub size_cv_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position_jitter_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// N15 - Heading Inversion Rate
    pub heading_inversion_rate_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// N16 - Track Quality
    pub track_fragments_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub track_purity_per_class: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub track_length_per_class: rosidl_runtime_rs::Sequence<f64>,

    /// N17 - ECE Proxy
    pub ece_proxy: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unconfirmed_high_conf_rate: f64,

    /// N18 - Critical Inconsistency
    pub critical_inconsistency_per_s: f64,

    /// N19 - Sensor Health & Sync
    pub sync_offset_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_health: rosidl_runtime_rs::Sequence<bool>,

    /// N20 - Flight Regime Covariates
    pub flight_regime_altitude_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flight_regime_speed_mps: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flight_regime_climb_rate_mps: f64,

}



impl Default for ExpectedMetricsNoGt {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_interfaces__msg__ExpectedMetricsNoGt__init(&mut msg as *mut _) {
        panic!("Call to swarm_interfaces__msg__ExpectedMetricsNoGt__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExpectedMetricsNoGt {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExpectedMetricsNoGt {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExpectedMetricsNoGt where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_interfaces/msg/ExpectedMetricsNoGt";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_interfaces__msg__ExpectedMetricsNoGt() }
  }
}


