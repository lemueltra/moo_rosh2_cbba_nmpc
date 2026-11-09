#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to swarm_world_interfaces__srv__SpawnActor_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpawnActor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub role_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub transform: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parent_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attribute_keys: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attribute_values: Vec<std::string::String>,

}



impl Default for SpawnActor_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SpawnActor_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SpawnActor_Request {
  type RmwMsg = super::srv::rmw::SpawnActor_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_id: msg.type_id.as_str().into(),
        role_name: msg.role_name.as_str().into(),
        transform: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.transform)).into_owned(),
        parent_id: msg.parent_id,
        attribute_keys: msg.attribute_keys
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        attribute_values: msg.attribute_values
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_id: msg.type_id.as_str().into(),
        role_name: msg.role_name.as_str().into(),
        transform: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.transform)).into_owned(),
      parent_id: msg.parent_id,
        attribute_keys: msg.attribute_keys
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        attribute_values: msg.attribute_values
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_id: msg.type_id.to_string(),
      role_name: msg.role_name.to_string(),
      transform: geometry_msgs::msg::Pose::from_rmw_message(msg.transform),
      parent_id: msg.parent_id,
      attribute_keys: msg.attribute_keys
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      attribute_values: msg.attribute_values
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__SpawnActor_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub error_message: std::string::String,

}



impl Default for SpawnActor_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SpawnActor_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SpawnActor_Response {
  type RmwMsg = super::srv::rmw::SpawnActor_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        actor_id: msg.actor_id,
        error_message: msg.error_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      actor_id: msg.actor_id,
        error_message: msg.error_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      actor_id: msg.actor_id,
      error_message: msg.error_message.to_string(),
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__DestroyActor_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DestroyActor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actor_id: u32,

}



impl Default for DestroyActor_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DestroyActor_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DestroyActor_Request {
  type RmwMsg = super::srv::rmw::DestroyActor_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        actor_id: msg.actor_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      actor_id: msg.actor_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      actor_id: msg.actor_id,
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__DestroyActor_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DestroyActor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: std::string::String,

}



impl Default for DestroyActor_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DestroyActor_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DestroyActor_Response {
  type RmwMsg = super::srv::rmw::DestroyActor_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        error_message: msg.error_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        error_message: msg.error_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      error_message: msg.error_message.to_string(),
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__AttachSensor_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AttachSensor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor: super::msg::SensorDefinition,

}



impl Default for AttachSensor_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AttachSensor_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AttachSensor_Request {
  type RmwMsg = super::srv::rmw::AttachSensor_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sensor: super::msg::SensorDefinition::into_rmw_message(std::borrow::Cow::Owned(msg.sensor)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sensor: super::msg::SensorDefinition::into_rmw_message(std::borrow::Cow::Borrowed(&msg.sensor)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sensor: super::msg::SensorDefinition::from_rmw_message(msg.sensor),
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__AttachSensor_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub error_message: std::string::String,

}



impl Default for AttachSensor_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AttachSensor_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AttachSensor_Response {
  type RmwMsg = super::srv::rmw::AttachSensor_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        sensor_id: msg.sensor_id,
        error_message: msg.error_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      sensor_id: msg.sensor_id,
        error_message: msg.error_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      sensor_id: msg.sensor_id,
      error_message: msg.error_message.to_string(),
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__DetachSensor_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetachSensor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_id: u32,

}



impl Default for DetachSensor_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DetachSensor_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DetachSensor_Request {
  type RmwMsg = super::srv::rmw::DetachSensor_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sensor_id: msg.sensor_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sensor_id: msg.sensor_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sensor_id: msg.sensor_id,
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__DetachSensor_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetachSensor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: std::string::String,

}



impl Default for DetachSensor_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DetachSensor_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DetachSensor_Response {
  type RmwMsg = super::srv::rmw::DetachSensor_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        error_message: msg.error_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        error_message: msg.error_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      error_message: msg.error_message.to_string(),
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__SetWeather_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWeather_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub preset_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub custom_parameters: super::msg::WeatherPreset,


    // This member is not documented.
    #[allow(missing_docs)]
    pub use_custom: bool,

}



impl Default for SetWeather_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetWeather_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetWeather_Request {
  type RmwMsg = super::srv::rmw::SetWeather_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        preset_name: msg.preset_name.as_str().into(),
        custom_parameters: super::msg::WeatherPreset::into_rmw_message(std::borrow::Cow::Owned(msg.custom_parameters)).into_owned(),
        use_custom: msg.use_custom,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        preset_name: msg.preset_name.as_str().into(),
        custom_parameters: super::msg::WeatherPreset::into_rmw_message(std::borrow::Cow::Borrowed(&msg.custom_parameters)).into_owned(),
      use_custom: msg.use_custom,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      preset_name: msg.preset_name.to_string(),
      custom_parameters: super::msg::WeatherPreset::from_rmw_message(msg.custom_parameters),
      use_custom: msg.use_custom,
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__SetWeather_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWeather_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: std::string::String,

}



impl Default for SetWeather_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetWeather_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetWeather_Response {
  type RmwMsg = super::srv::rmw::SetWeather_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        error_message: msg.error_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        error_message: msg.error_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      error_message: msg.error_message.to_string(),
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__SetTimeMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetTimeMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetTimeMode_Request {
  type RmwMsg = super::srv::rmw::SetTimeMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time_mode: msg.time_mode,
        fixed_delta_seconds: msg.fixed_delta_seconds,
        sync_timeout_sec: msg.sync_timeout_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      time_mode: msg.time_mode,
      fixed_delta_seconds: msg.fixed_delta_seconds,
      sync_timeout_sec: msg.sync_timeout_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time_mode: msg.time_mode,
      fixed_delta_seconds: msg.fixed_delta_seconds,
      sync_timeout_sec: msg.sync_timeout_sec,
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__SetTimeMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetTimeMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: std::string::String,

}



impl Default for SetTimeMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetTimeMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetTimeMode_Response {
  type RmwMsg = super::srv::rmw::SetTimeMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        error_message: msg.error_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        error_message: msg.error_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      error_message: msg.error_message.to_string(),
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__StepWorld_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StepWorld_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StepWorld_Request {
  type RmwMsg = super::srv::rmw::StepWorld_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        step_count: msg.step_count,
        timeout_sec: msg.timeout_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      step_count: msg.step_count,
      timeout_sec: msg.timeout_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      step_count: msg.step_count,
      timeout_sec: msg.timeout_sec,
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__StepWorld_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub error_message: std::string::String,

}



impl Default for StepWorld_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StepWorld_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StepWorld_Response {
  type RmwMsg = super::srv::rmw::StepWorld_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        frame_id: msg.frame_id,
        sim_time_seconds: msg.sim_time_seconds,
        error_message: msg.error_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      frame_id: msg.frame_id,
      sim_time_seconds: msg.sim_time_seconds,
        error_message: msg.error_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      frame_id: msg.frame_id,
      sim_time_seconds: msg.sim_time_seconds,
      error_message: msg.error_message.to_string(),
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__ConfigureUavRig_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConfigureUavRig_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub uav_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rig_override: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reset_to_default: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detach_current_sensors: bool,

}



impl Default for ConfigureUavRig_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ConfigureUavRig_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ConfigureUavRig_Request {
  type RmwMsg = super::srv::rmw::ConfigureUavRig_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        uav_id: msg.uav_id,
        rig_override: msg.rig_override.as_str().into(),
        reset_to_default: msg.reset_to_default,
        detach_current_sensors: msg.detach_current_sensors,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      uav_id: msg.uav_id,
        rig_override: msg.rig_override.as_str().into(),
      reset_to_default: msg.reset_to_default,
      detach_current_sensors: msg.detach_current_sensors,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      uav_id: msg.uav_id,
      rig_override: msg.rig_override.to_string(),
      reset_to_default: msg.reset_to_default,
      detach_current_sensors: msg.detach_current_sensors,
    }
  }
}


// Corresponds to swarm_world_interfaces__srv__ConfigureUavRig_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConfigureUavRig_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attached_sensor_ids: Vec<u32>,

}



impl Default for ConfigureUavRig_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ConfigureUavRig_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ConfigureUavRig_Response {
  type RmwMsg = super::srv::rmw::ConfigureUavRig_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        error_message: msg.error_message.as_str().into(),
        attached_sensor_ids: msg.attached_sensor_ids.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        error_message: msg.error_message.as_str().into(),
        attached_sensor_ids: msg.attached_sensor_ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      error_message: msg.error_message.to_string(),
      attached_sensor_ids: msg.attached_sensor_ids.into(),
    }
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


