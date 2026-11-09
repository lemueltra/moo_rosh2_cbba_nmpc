#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to swarm_world_interfaces__msg__ActorDefinition
/// Definition for spawning an actor (UGV, UAV, Walker)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActorDefinition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub role_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub initial_pose: geometry_msgs::msg::Pose,


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



impl Default for ActorDefinition {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActorDefinition::default())
  }
}

impl rosidl_runtime_rs::Message for ActorDefinition {
  type RmwMsg = super::msg::rmw::ActorDefinition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        actor_id: msg.actor_id,
        type_id: msg.type_id.as_str().into(),
        role_name: msg.role_name.as_str().into(),
        initial_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.initial_pose)).into_owned(),
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
      actor_id: msg.actor_id,
        type_id: msg.type_id.as_str().into(),
        role_name: msg.role_name.as_str().into(),
        initial_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.initial_pose)).into_owned(),
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
      actor_id: msg.actor_id,
      type_id: msg.type_id.to_string(),
      role_name: msg.role_name.to_string(),
      initial_pose: geometry_msgs::msg::Pose::from_rmw_message(msg.initial_pose),
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


// Corresponds to swarm_world_interfaces__msg__ActorState
/// Live state of an actor

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub role_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bounding_box_extent: geometry_msgs::msg::Vector3,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActorState::default())
  }
}

impl rosidl_runtime_rs::Message for ActorState {
  type RmwMsg = super::msg::rmw::ActorState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        actor_id: msg.actor_id,
        type_id: msg.type_id.as_str().into(),
        role_name: msg.role_name.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
        acceleration: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.acceleration)).into_owned(),
        bounding_box_extent: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.bounding_box_extent)).into_owned(),
        active: msg.active,
        control_source: msg.control_source,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      actor_id: msg.actor_id,
        type_id: msg.type_id.as_str().into(),
        role_name: msg.role_name.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
        acceleration: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.acceleration)).into_owned(),
        bounding_box_extent: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.bounding_box_extent)).into_owned(),
      active: msg.active,
      control_source: msg.control_source,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      actor_id: msg.actor_id,
      type_id: msg.type_id.to_string(),
      role_name: msg.role_name.to_string(),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      twist: geometry_msgs::msg::Twist::from_rmw_message(msg.twist),
      acceleration: geometry_msgs::msg::Vector3::from_rmw_message(msg.acceleration),
      bounding_box_extent: geometry_msgs::msg::Vector3::from_rmw_message(msg.bounding_box_extent),
      active: msg.active,
      control_source: msg.control_source,
    }
  }
}


// Corresponds to swarm_world_interfaces__msg__ActorStateArray
/// Array of actor live states

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActorStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actors: Vec<super::msg::ActorState>,

}



impl Default for ActorStateArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ActorStateArray::default())
  }
}

impl rosidl_runtime_rs::Message for ActorStateArray {
  type RmwMsg = super::msg::rmw::ActorStateArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        actors: msg.actors
          .into_iter()
          .map(|elem| super::msg::ActorState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        actors: msg.actors
          .iter()
          .map(|elem| super::msg::ActorState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      actors: msg.actors
          .into_iter()
          .map(super::msg::ActorState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to swarm_world_interfaces__msg__SensorDefinition
/// Definition for attaching a sensor (LiDAR, Radar, Camera) to an actor

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorDefinition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parent_actor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub transform: geometry_msgs::msg::Transform,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attribute_keys: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attribute_values: Vec<std::string::String>,

}



impl Default for SensorDefinition {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorDefinition::default())
  }
}

impl rosidl_runtime_rs::Message for SensorDefinition {
  type RmwMsg = super::msg::rmw::SensorDefinition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sensor_id: msg.sensor_id,
        type_id: msg.type_id.as_str().into(),
        parent_actor_id: msg.parent_actor_id,
        transform: geometry_msgs::msg::Transform::into_rmw_message(std::borrow::Cow::Owned(msg.transform)).into_owned(),
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
      sensor_id: msg.sensor_id,
        type_id: msg.type_id.as_str().into(),
      parent_actor_id: msg.parent_actor_id,
        transform: geometry_msgs::msg::Transform::into_rmw_message(std::borrow::Cow::Borrowed(&msg.transform)).into_owned(),
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
      sensor_id: msg.sensor_id,
      type_id: msg.type_id.to_string(),
      parent_actor_id: msg.parent_actor_id,
      transform: geometry_msgs::msg::Transform::from_rmw_message(msg.transform),
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


// Corresponds to swarm_world_interfaces__msg__SensorDetection
/// Single target detection from a sensor FoV evaluation

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorDetection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub actor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bbox_pose_world: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bbox_extent: geometry_msgs::msg::Vector3,


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
    pub aim_point: geometry_msgs::msg::Point,

}



impl Default for SensorDetection {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorDetection::default())
  }
}

impl rosidl_runtime_rs::Message for SensorDetection {
  type RmwMsg = super::msg::rmw::SensorDetection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        actor_id: msg.actor_id,
        class_name: msg.class_name.as_str().into(),
        bbox_pose_world: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.bbox_pose_world)).into_owned(),
        bbox_extent: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.bbox_extent)).into_owned(),
        range: msg.range,
        azimuth: msg.azimuth,
        elevation: msg.elevation,
        occluded: msg.occluded,
        partially_occluded: msg.partially_occluded,
        occlusion_ratio: msg.occlusion_ratio,
        aim_point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.aim_point)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      actor_id: msg.actor_id,
        class_name: msg.class_name.as_str().into(),
        bbox_pose_world: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.bbox_pose_world)).into_owned(),
        bbox_extent: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.bbox_extent)).into_owned(),
      range: msg.range,
      azimuth: msg.azimuth,
      elevation: msg.elevation,
      occluded: msg.occluded,
      partially_occluded: msg.partially_occluded,
      occlusion_ratio: msg.occlusion_ratio,
        aim_point: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.aim_point)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      actor_id: msg.actor_id,
      class_name: msg.class_name.to_string(),
      bbox_pose_world: geometry_msgs::msg::Pose::from_rmw_message(msg.bbox_pose_world),
      bbox_extent: geometry_msgs::msg::Vector3::from_rmw_message(msg.bbox_extent),
      range: msg.range,
      azimuth: msg.azimuth,
      elevation: msg.elevation,
      occluded: msg.occluded,
      partially_occluded: msg.partially_occluded,
      occlusion_ratio: msg.occlusion_ratio,
      aim_point: geometry_msgs::msg::Point::from_rmw_message(msg.aim_point),
    }
  }
}


// Corresponds to swarm_world_interfaces__msg__SensorDetectionArray
/// Array of detections from a sensor FoV evaluation

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorDetectionArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parent_actor_id: u32,

    /// The sensor volume these detections were computed with, so an operator (or a checker)
    /// never has to guess it: 'lidar', 'camera' or 'radar' plus the real numbers.
    pub sensor_type: std::string::String,


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
    pub detections: Vec<super::msg::SensorDetection>,

}



impl Default for SensorDetectionArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorDetectionArray::default())
  }
}

impl rosidl_runtime_rs::Message for SensorDetectionArray {
  type RmwMsg = super::msg::rmw::SensorDetectionArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sensor_id: msg.sensor_id,
        parent_actor_id: msg.parent_actor_id,
        sensor_type: msg.sensor_type.as_str().into(),
        range: msg.range,
        horizontal_fov_deg: msg.horizontal_fov_deg,
        upper_fov_deg: msg.upper_fov_deg,
        lower_fov_deg: msg.lower_fov_deg,
        detections: msg.detections
          .into_iter()
          .map(|elem| super::msg::SensorDetection::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      sensor_id: msg.sensor_id,
      parent_actor_id: msg.parent_actor_id,
        sensor_type: msg.sensor_type.as_str().into(),
      range: msg.range,
      horizontal_fov_deg: msg.horizontal_fov_deg,
      upper_fov_deg: msg.upper_fov_deg,
      lower_fov_deg: msg.lower_fov_deg,
        detections: msg.detections
          .iter()
          .map(|elem| super::msg::SensorDetection::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      sensor_id: msg.sensor_id,
      parent_actor_id: msg.parent_actor_id,
      sensor_type: msg.sensor_type.to_string(),
      range: msg.range,
      horizontal_fov_deg: msg.horizontal_fov_deg,
      upper_fov_deg: msg.upper_fov_deg,
      lower_fov_deg: msg.lower_fov_deg,
      detections: msg.detections
          .into_iter()
          .map(super::msg::SensorDetection::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to swarm_world_interfaces__msg__WeatherPreset
/// Atmospheric and environmental condition parameters

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WeatherPreset {

    // This member is not documented.
    #[allow(missing_docs)]
    pub preset_name: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WeatherPreset::default())
  }
}

impl rosidl_runtime_rs::Message for WeatherPreset {
  type RmwMsg = super::msg::rmw::WeatherPreset;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        preset_name: msg.preset_name.as_str().into(),
        cloudiness: msg.cloudiness,
        precipitation: msg.precipitation,
        precipitation_deposits: msg.precipitation_deposits,
        wind_intensity: msg.wind_intensity,
        sun_azimuth_angle: msg.sun_azimuth_angle,
        sun_altitude_angle: msg.sun_altitude_angle,
        fog_density: msg.fog_density,
        fog_distance: msg.fog_distance,
        fog_falloff: msg.fog_falloff,
        wetness: msg.wetness,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        preset_name: msg.preset_name.as_str().into(),
      cloudiness: msg.cloudiness,
      precipitation: msg.precipitation,
      precipitation_deposits: msg.precipitation_deposits,
      wind_intensity: msg.wind_intensity,
      sun_azimuth_angle: msg.sun_azimuth_angle,
      sun_altitude_angle: msg.sun_altitude_angle,
      fog_density: msg.fog_density,
      fog_distance: msg.fog_distance,
      fog_falloff: msg.fog_falloff,
      wetness: msg.wetness,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      preset_name: msg.preset_name.to_string(),
      cloudiness: msg.cloudiness,
      precipitation: msg.precipitation,
      precipitation_deposits: msg.precipitation_deposits,
      wind_intensity: msg.wind_intensity,
      sun_azimuth_angle: msg.sun_azimuth_angle,
      sun_altitude_angle: msg.sun_altitude_angle,
      fog_density: msg.fog_density,
      fog_distance: msg.fog_distance,
      fog_falloff: msg.fog_falloff,
      wetness: msg.wetness,
    }
  }
}


// Corresponds to swarm_world_interfaces__msg__SimulationStatus
/// Live simulation status and clock mode telemetry

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SimulationStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SimulationStatus::default())
  }
}

impl rosidl_runtime_rs::Message for SimulationStatus {
  type RmwMsg = super::msg::rmw::SimulationStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_mode: msg.time_mode,
        step_count: msg.step_count,
        elapsed_sim_time: msg.elapsed_sim_time,
        fixed_delta_seconds: msg.fixed_delta_seconds,
        num_active_ugvs: msg.num_active_ugvs,
        num_active_uavs: msg.num_active_uavs,
        num_active_sensors: msg.num_active_sensors,
        sync_waiting: msg.sync_waiting,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      time_mode: msg.time_mode,
      step_count: msg.step_count,
      elapsed_sim_time: msg.elapsed_sim_time,
      fixed_delta_seconds: msg.fixed_delta_seconds,
      num_active_ugvs: msg.num_active_ugvs,
      num_active_uavs: msg.num_active_uavs,
      num_active_sensors: msg.num_active_sensors,
      sync_waiting: msg.sync_waiting,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      time_mode: msg.time_mode,
      step_count: msg.step_count,
      elapsed_sim_time: msg.elapsed_sim_time,
      fixed_delta_seconds: msg.fixed_delta_seconds,
      num_active_ugvs: msg.num_active_ugvs,
      num_active_uavs: msg.num_active_uavs,
      num_active_sensors: msg.num_active_sensors,
      sync_waiting: msg.sync_waiting,
    }
  }
}


// Corresponds to swarm_world_interfaces__msg__NpcSpawnSummary
/// Result of one NPC spawning run (swarm_npc_spawner, milestone M3)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NpcSpawnSummary {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    pub vehicle_actor_ids: Vec<u32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pedestrian_actor_ids: Vec<u32>,

    /// cyclic blueprint list actually used
    pub vehicle_types: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pedestrian_types: Vec<std::string::String>,

    /// wall time spent spawning
    pub elapsed_s: f64,

}



impl Default for NpcSpawnSummary {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NpcSpawnSummary::default())
  }
}

impl rosidl_runtime_rs::Message for NpcSpawnSummary {
  type RmwMsg = super::msg::rmw::NpcSpawnSummary;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        seed: msg.seed,
        requested_vehicles: msg.requested_vehicles,
        requested_pedestrians: msg.requested_pedestrians,
        spawned_vehicles: msg.spawned_vehicles,
        spawned_pedestrians: msg.spawned_pedestrians,
        vehicle_actor_ids: msg.vehicle_actor_ids.as_slice().into(),
        pedestrian_actor_ids: msg.pedestrian_actor_ids.as_slice().into(),
        vehicle_types: msg.vehicle_types
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        pedestrian_types: msg.pedestrian_types
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        elapsed_s: msg.elapsed_s,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      seed: msg.seed,
      requested_vehicles: msg.requested_vehicles,
      requested_pedestrians: msg.requested_pedestrians,
      spawned_vehicles: msg.spawned_vehicles,
      spawned_pedestrians: msg.spawned_pedestrians,
        vehicle_actor_ids: msg.vehicle_actor_ids.as_slice().into(),
        pedestrian_actor_ids: msg.pedestrian_actor_ids.as_slice().into(),
        vehicle_types: msg.vehicle_types
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        pedestrian_types: msg.pedestrian_types
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      elapsed_s: msg.elapsed_s,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      seed: msg.seed,
      requested_vehicles: msg.requested_vehicles,
      requested_pedestrians: msg.requested_pedestrians,
      spawned_vehicles: msg.spawned_vehicles,
      spawned_pedestrians: msg.spawned_pedestrians,
      vehicle_actor_ids: msg.vehicle_actor_ids.into(),
      pedestrian_actor_ids: msg.pedestrian_actor_ids.into(),
      vehicle_types: msg.vehicle_types
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      pedestrian_types: msg.pedestrian_types
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      elapsed_s: msg.elapsed_s,
    }
  }
}


