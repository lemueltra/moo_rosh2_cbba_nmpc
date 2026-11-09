#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SpawnActor_Request() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__SpawnActor_Request__init(msg: *mut SpawnActor_Request) -> bool;
    fn swarm_world_interfaces__srv__SpawnActor_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpawnActor_Request>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__SpawnActor_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpawnActor_Request>);
    fn swarm_world_interfaces__srv__SpawnActor_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpawnActor_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SpawnActor_Request>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__SpawnActor_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnActor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub role_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub transform: geometry_msgs::msg::rmw::Pose,


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



impl Default for SpawnActor_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__SpawnActor_Request__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__SpawnActor_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpawnActor_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SpawnActor_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SpawnActor_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SpawnActor_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpawnActor_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpawnActor_Request where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/SpawnActor_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SpawnActor_Request() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SpawnActor_Response() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__SpawnActor_Response__init(msg: *mut SpawnActor_Response) -> bool;
    fn swarm_world_interfaces__srv__SpawnActor_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpawnActor_Response>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__SpawnActor_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpawnActor_Response>);
    fn swarm_world_interfaces__srv__SpawnActor_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpawnActor_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SpawnActor_Response>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__SpawnActor_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnActor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,

}



impl Default for SpawnActor_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__SpawnActor_Response__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__SpawnActor_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpawnActor_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SpawnActor_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SpawnActor_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SpawnActor_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpawnActor_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpawnActor_Response where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/SpawnActor_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SpawnActor_Response() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__DestroyActor_Request() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__DestroyActor_Request__init(msg: *mut DestroyActor_Request) -> bool;
    fn swarm_world_interfaces__srv__DestroyActor_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DestroyActor_Request>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__DestroyActor_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DestroyActor_Request>);
    fn swarm_world_interfaces__srv__DestroyActor_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DestroyActor_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DestroyActor_Request>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__DestroyActor_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DestroyActor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actor_id: u32,

}



impl Default for DestroyActor_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__DestroyActor_Request__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__DestroyActor_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DestroyActor_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DestroyActor_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DestroyActor_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DestroyActor_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DestroyActor_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DestroyActor_Request where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/DestroyActor_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__DestroyActor_Request() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__DestroyActor_Response() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__DestroyActor_Response__init(msg: *mut DestroyActor_Response) -> bool;
    fn swarm_world_interfaces__srv__DestroyActor_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DestroyActor_Response>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__DestroyActor_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DestroyActor_Response>);
    fn swarm_world_interfaces__srv__DestroyActor_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DestroyActor_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DestroyActor_Response>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__DestroyActor_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DestroyActor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,

}



impl Default for DestroyActor_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__DestroyActor_Response__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__DestroyActor_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DestroyActor_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DestroyActor_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DestroyActor_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DestroyActor_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DestroyActor_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DestroyActor_Response where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/DestroyActor_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__DestroyActor_Response() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__AttachSensor_Request() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__AttachSensor_Request__init(msg: *mut AttachSensor_Request) -> bool;
    fn swarm_world_interfaces__srv__AttachSensor_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AttachSensor_Request>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__AttachSensor_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AttachSensor_Request>);
    fn swarm_world_interfaces__srv__AttachSensor_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AttachSensor_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AttachSensor_Request>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__AttachSensor_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AttachSensor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor: super::super::msg::rmw::SensorDefinition,

}



impl Default for AttachSensor_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__AttachSensor_Request__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__AttachSensor_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AttachSensor_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__AttachSensor_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__AttachSensor_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__AttachSensor_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AttachSensor_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AttachSensor_Request where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/AttachSensor_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__AttachSensor_Request() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__AttachSensor_Response() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__AttachSensor_Response__init(msg: *mut AttachSensor_Response) -> bool;
    fn swarm_world_interfaces__srv__AttachSensor_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AttachSensor_Response>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__AttachSensor_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AttachSensor_Response>);
    fn swarm_world_interfaces__srv__AttachSensor_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AttachSensor_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AttachSensor_Response>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__AttachSensor_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AttachSensor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,

}



impl Default for AttachSensor_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__AttachSensor_Response__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__AttachSensor_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AttachSensor_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__AttachSensor_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__AttachSensor_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__AttachSensor_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AttachSensor_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AttachSensor_Response where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/AttachSensor_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__AttachSensor_Response() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__DetachSensor_Request() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__DetachSensor_Request__init(msg: *mut DetachSensor_Request) -> bool;
    fn swarm_world_interfaces__srv__DetachSensor_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetachSensor_Request>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__DetachSensor_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetachSensor_Request>);
    fn swarm_world_interfaces__srv__DetachSensor_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetachSensor_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DetachSensor_Request>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__DetachSensor_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetachSensor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_id: u32,

}



impl Default for DetachSensor_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__DetachSensor_Request__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__DetachSensor_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetachSensor_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DetachSensor_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DetachSensor_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DetachSensor_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetachSensor_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetachSensor_Request where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/DetachSensor_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__DetachSensor_Request() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__DetachSensor_Response() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__DetachSensor_Response__init(msg: *mut DetachSensor_Response) -> bool;
    fn swarm_world_interfaces__srv__DetachSensor_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetachSensor_Response>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__DetachSensor_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetachSensor_Response>);
    fn swarm_world_interfaces__srv__DetachSensor_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetachSensor_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DetachSensor_Response>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__DetachSensor_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetachSensor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,

}



impl Default for DetachSensor_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__DetachSensor_Response__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__DetachSensor_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetachSensor_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DetachSensor_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DetachSensor_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__DetachSensor_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetachSensor_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetachSensor_Response where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/DetachSensor_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__DetachSensor_Response() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SetWeather_Request() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__SetWeather_Request__init(msg: *mut SetWeather_Request) -> bool;
    fn swarm_world_interfaces__srv__SetWeather_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetWeather_Request>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__SetWeather_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetWeather_Request>);
    fn swarm_world_interfaces__srv__SetWeather_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetWeather_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetWeather_Request>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__SetWeather_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWeather_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub preset_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub custom_parameters: super::super::msg::rmw::WeatherPreset,


    // This member is not documented.
    #[allow(missing_docs)]
    pub use_custom: bool,

}



impl Default for SetWeather_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__SetWeather_Request__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__SetWeather_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetWeather_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetWeather_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetWeather_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetWeather_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetWeather_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetWeather_Request where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/SetWeather_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SetWeather_Request() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SetWeather_Response() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__SetWeather_Response__init(msg: *mut SetWeather_Response) -> bool;
    fn swarm_world_interfaces__srv__SetWeather_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetWeather_Response>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__SetWeather_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetWeather_Response>);
    fn swarm_world_interfaces__srv__SetWeather_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetWeather_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetWeather_Response>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__SetWeather_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWeather_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,

}



impl Default for SetWeather_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__SetWeather_Response__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__SetWeather_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetWeather_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetWeather_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetWeather_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetWeather_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetWeather_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetWeather_Response where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/SetWeather_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SetWeather_Response() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SetTimeMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__SetTimeMode_Request__init(msg: *mut SetTimeMode_Request) -> bool;
    fn swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetTimeMode_Request>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetTimeMode_Request>);
    fn swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetTimeMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetTimeMode_Request>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__SetTimeMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTimeMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fixed_delta_seconds: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sync_timeout_sec: f64,

}

impl SetTimeMode_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TIME_MODE_ASYNC: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TIME_MODE_SYNC: u8 = 1;

}


impl Default for SetTimeMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__SetTimeMode_Request__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__SetTimeMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetTimeMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetTimeMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetTimeMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/SetTimeMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SetTimeMode_Request() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SetTimeMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__SetTimeMode_Response__init(msg: *mut SetTimeMode_Response) -> bool;
    fn swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetTimeMode_Response>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetTimeMode_Response>);
    fn swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetTimeMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetTimeMode_Response>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__SetTimeMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTimeMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,

}



impl Default for SetTimeMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__SetTimeMode_Response__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__SetTimeMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetTimeMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetTimeMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetTimeMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/SetTimeMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__SetTimeMode_Response() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__StepWorld_Request() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__StepWorld_Request__init(msg: *mut StepWorld_Request) -> bool;
    fn swarm_world_interfaces__srv__StepWorld_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StepWorld_Request>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__StepWorld_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StepWorld_Request>);
    fn swarm_world_interfaces__srv__StepWorld_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StepWorld_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StepWorld_Request>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__StepWorld_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StepWorld_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub step_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_sec: f64,

}



impl Default for StepWorld_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__StepWorld_Request__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__StepWorld_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StepWorld_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__StepWorld_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__StepWorld_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__StepWorld_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StepWorld_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StepWorld_Request where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/StepWorld_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__StepWorld_Request() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__StepWorld_Response() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__StepWorld_Response__init(msg: *mut StepWorld_Response) -> bool;
    fn swarm_world_interfaces__srv__StepWorld_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StepWorld_Response>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__StepWorld_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StepWorld_Response>);
    fn swarm_world_interfaces__srv__StepWorld_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StepWorld_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StepWorld_Response>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__StepWorld_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StepWorld_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sim_time_seconds: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,

}



impl Default for StepWorld_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__StepWorld_Response__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__StepWorld_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StepWorld_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__StepWorld_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__StepWorld_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__StepWorld_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StepWorld_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StepWorld_Response where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/StepWorld_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__StepWorld_Response() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__ConfigureUavRig_Request() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__ConfigureUavRig_Request__init(msg: *mut ConfigureUavRig_Request) -> bool;
    fn swarm_world_interfaces__srv__ConfigureUavRig_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConfigureUavRig_Request>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__ConfigureUavRig_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConfigureUavRig_Request>);
    fn swarm_world_interfaces__srv__ConfigureUavRig_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConfigureUavRig_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ConfigureUavRig_Request>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__ConfigureUavRig_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConfigureUavRig_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub uav_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rig_override: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reset_to_default: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detach_current_sensors: bool,

}



impl Default for ConfigureUavRig_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__ConfigureUavRig_Request__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__ConfigureUavRig_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConfigureUavRig_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__ConfigureUavRig_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__ConfigureUavRig_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__ConfigureUavRig_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConfigureUavRig_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConfigureUavRig_Request where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/ConfigureUavRig_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__ConfigureUavRig_Request() }
  }
}


#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__ConfigureUavRig_Response() -> *const std::ffi::c_void;
}

#[link(name = "swarm_world_interfaces__rosidl_generator_c")]
extern "C" {
    fn swarm_world_interfaces__srv__ConfigureUavRig_Response__init(msg: *mut ConfigureUavRig_Response) -> bool;
    fn swarm_world_interfaces__srv__ConfigureUavRig_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConfigureUavRig_Response>, size: usize) -> bool;
    fn swarm_world_interfaces__srv__ConfigureUavRig_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConfigureUavRig_Response>);
    fn swarm_world_interfaces__srv__ConfigureUavRig_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConfigureUavRig_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ConfigureUavRig_Response>) -> bool;
}

// Corresponds to swarm_world_interfaces__srv__ConfigureUavRig_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConfigureUavRig_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attached_sensor_ids: rosidl_runtime_rs::Sequence<u32>,

}



impl Default for ConfigureUavRig_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !swarm_world_interfaces__srv__ConfigureUavRig_Response__init(&mut msg as *mut _) {
        panic!("Call to swarm_world_interfaces__srv__ConfigureUavRig_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConfigureUavRig_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__ConfigureUavRig_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__ConfigureUavRig_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { swarm_world_interfaces__srv__ConfigureUavRig_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConfigureUavRig_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConfigureUavRig_Response where Self: Sized {
  const TYPE_NAME: &'static str = "swarm_world_interfaces/srv/ConfigureUavRig_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__swarm_world_interfaces__srv__ConfigureUavRig_Response() }
  }
}






#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__SpawnActor() -> *const std::ffi::c_void;
}

// Corresponds to swarm_world_interfaces__srv__SpawnActor
#[allow(missing_docs, non_camel_case_types)]
pub struct SpawnActor;

impl rosidl_runtime_rs::Service for SpawnActor {
    type Request = SpawnActor_Request;
    type Response = SpawnActor_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__SpawnActor() }
    }
}




#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__DestroyActor() -> *const std::ffi::c_void;
}

// Corresponds to swarm_world_interfaces__srv__DestroyActor
#[allow(missing_docs, non_camel_case_types)]
pub struct DestroyActor;

impl rosidl_runtime_rs::Service for DestroyActor {
    type Request = DestroyActor_Request;
    type Response = DestroyActor_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__DestroyActor() }
    }
}




#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__AttachSensor() -> *const std::ffi::c_void;
}

// Corresponds to swarm_world_interfaces__srv__AttachSensor
#[allow(missing_docs, non_camel_case_types)]
pub struct AttachSensor;

impl rosidl_runtime_rs::Service for AttachSensor {
    type Request = AttachSensor_Request;
    type Response = AttachSensor_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__AttachSensor() }
    }
}




#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__DetachSensor() -> *const std::ffi::c_void;
}

// Corresponds to swarm_world_interfaces__srv__DetachSensor
#[allow(missing_docs, non_camel_case_types)]
pub struct DetachSensor;

impl rosidl_runtime_rs::Service for DetachSensor {
    type Request = DetachSensor_Request;
    type Response = DetachSensor_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__DetachSensor() }
    }
}




#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__SetWeather() -> *const std::ffi::c_void;
}

// Corresponds to swarm_world_interfaces__srv__SetWeather
#[allow(missing_docs, non_camel_case_types)]
pub struct SetWeather;

impl rosidl_runtime_rs::Service for SetWeather {
    type Request = SetWeather_Request;
    type Response = SetWeather_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__SetWeather() }
    }
}




#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__SetTimeMode() -> *const std::ffi::c_void;
}

// Corresponds to swarm_world_interfaces__srv__SetTimeMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SetTimeMode;

impl rosidl_runtime_rs::Service for SetTimeMode {
    type Request = SetTimeMode_Request;
    type Response = SetTimeMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__SetTimeMode() }
    }
}




#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__StepWorld() -> *const std::ffi::c_void;
}

// Corresponds to swarm_world_interfaces__srv__StepWorld
#[allow(missing_docs, non_camel_case_types)]
pub struct StepWorld;

impl rosidl_runtime_rs::Service for StepWorld {
    type Request = StepWorld_Request;
    type Response = StepWorld_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__StepWorld() }
    }
}




#[link(name = "swarm_world_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__ConfigureUavRig() -> *const std::ffi::c_void;
}

// Corresponds to swarm_world_interfaces__srv__ConfigureUavRig
#[allow(missing_docs, non_camel_case_types)]
pub struct ConfigureUavRig;

impl rosidl_runtime_rs::Service for ConfigureUavRig {
    type Request = ConfigureUavRig_Request;
    type Response = ConfigureUavRig_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__swarm_world_interfaces__srv__ConfigureUavRig() }
    }
}


