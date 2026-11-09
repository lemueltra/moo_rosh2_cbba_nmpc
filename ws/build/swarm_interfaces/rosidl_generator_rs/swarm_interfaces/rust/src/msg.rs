#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to swarm_interfaces__msg__DroneActiveSet
/// Level-triggered active set of drone IDs

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneActiveSet {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_ids: Vec<u32>,

}



impl Default for DroneActiveSet {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DroneActiveSet::default())
  }
}

impl rosidl_runtime_rs::Message for DroneActiveSet {
  type RmwMsg = super::msg::rmw::DroneActiveSet;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        active_ids: msg.active_ids.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        active_ids: msg.active_ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      active_ids: msg.active_ids.into(),
    }
  }
}


// Corresponds to swarm_interfaces__msg__DroneReference
/// Reference pose and maximum speed for a single active drone

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DroneReference::default())
  }
}

impl rosidl_runtime_rs::Message for DroneReference {
  type RmwMsg = super::msg::rmw::DroneReference;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_id: msg.drone_id,
        x: msg.x,
        y: msg.y,
        yaw: msg.yaw,
        max_speed: msg.max_speed,
        z: msg.z,
        ugv_id: msg.ugv_id,
        frame_relative: msg.frame_relative,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      drone_id: msg.drone_id,
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      max_speed: msg.max_speed,
      z: msg.z,
      ugv_id: msg.ugv_id,
      frame_relative: msg.frame_relative,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drone_id: msg.drone_id,
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      max_speed: msg.max_speed,
      z: msg.z,
      ugv_id: msg.ugv_id,
      frame_relative: msg.frame_relative,
    }
  }
}


// Corresponds to swarm_interfaces__msg__DroneReferenceArray
/// Array of references for active drones

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneReferenceArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub references: Vec<super::msg::DroneReference>,

}



impl Default for DroneReferenceArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DroneReferenceArray::default())
  }
}

impl rosidl_runtime_rs::Message for DroneReferenceArray {
  type RmwMsg = super::msg::rmw::DroneReferenceArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        references: msg.references
          .into_iter()
          .map(|elem| super::msg::DroneReference::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        references: msg.references
          .iter()
          .map(|elem| super::msg::DroneReference::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      references: msg.references
          .into_iter()
          .map(super::msg::DroneReference::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to swarm_interfaces__msg__DroneCommand
/// Actuation velocity command for a single drone in world frame 'map' (SI units)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DroneCommand::default())
  }
}

impl rosidl_runtime_rs::Message for DroneCommand {
  type RmwMsg = super::msg::rmw::DroneCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_id: msg.drone_id,
        active: msg.active,
        vx: msg.vx,
        vy: msg.vy,
        yaw_rate: msg.yaw_rate,
        vz: msg.vz,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      drone_id: msg.drone_id,
      active: msg.active,
      vx: msg.vx,
      vy: msg.vy,
      yaw_rate: msg.yaw_rate,
      vz: msg.vz,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drone_id: msg.drone_id,
      active: msg.active,
      vx: msg.vx,
      vy: msg.vy,
      yaw_rate: msg.yaw_rate,
      vz: msg.vz,
    }
  }
}


// Corresponds to swarm_interfaces__msg__DroneCommandArray
/// Array of actuation commands for all N_max drones, ordered by drone_id

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneCommandArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commands: Vec<super::msg::DroneCommand>,

}



impl Default for DroneCommandArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DroneCommandArray::default())
  }
}

impl rosidl_runtime_rs::Message for DroneCommandArray {
  type RmwMsg = super::msg::rmw::DroneCommandArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        commands: msg.commands
          .into_iter()
          .map(|elem| super::msg::DroneCommand::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        commands: msg.commands
          .iter()
          .map(|elem| super::msg::DroneCommand::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      commands: msg.commands
          .into_iter()
          .map(super::msg::DroneCommand::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to swarm_interfaces__msg__DroneState
/// Kinematic state of a single drone in world frame 'map' (SI units)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DroneState::default())
  }
}

impl rosidl_runtime_rs::Message for DroneState {
  type RmwMsg = super::msg::rmw::DroneState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_id: msg.drone_id,
        active: msg.active,
        x: msg.x,
        y: msg.y,
        yaw: msg.yaw,
        vx: msg.vx,
        vy: msg.vy,
        yaw_rate: msg.yaw_rate,
        z: msg.z,
        vz: msg.vz,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      drone_id: msg.drone_id,
      active: msg.active,
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      vx: msg.vx,
      vy: msg.vy,
      yaw_rate: msg.yaw_rate,
      z: msg.z,
      vz: msg.vz,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drone_id: msg.drone_id,
      active: msg.active,
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      vx: msg.vx,
      vy: msg.vy,
      yaw_rate: msg.yaw_rate,
      z: msg.z,
      vz: msg.vz,
    }
  }
}


// Corresponds to swarm_interfaces__msg__DroneStateArray
/// Full kinematic state of all N_max drones

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DroneStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: Vec<super::msg::DroneState>,

}



impl Default for DroneStateArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DroneStateArray::default())
  }
}

impl rosidl_runtime_rs::Message for DroneStateArray {
  type RmwMsg = super::msg::rmw::DroneStateArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        states: msg.states
          .into_iter()
          .map(|elem| super::msg::DroneState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        states: msg.states
          .iter()
          .map(|elem| super::msg::DroneState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      states: msg.states
          .into_iter()
          .map(super::msg::DroneState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to swarm_interfaces__msg__DroneStatus
/// Status and diagnostics of a single drone in the planner

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DroneStatus::default())
  }
}

impl rosidl_runtime_rs::Message for DroneStatus {
  type RmwMsg = super::msg::rmw::DroneStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_id: msg.drone_id,
        mode: msg.mode,
        position_error: msg.position_error,
        yaw_error: msg.yaw_error,
        eta: msg.eta,
        replan_count: msg.replan_count,
        compute_time_us: msg.compute_time_us,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      drone_id: msg.drone_id,
      mode: msg.mode,
      position_error: msg.position_error,
      yaw_error: msg.yaw_error,
      eta: msg.eta,
      replan_count: msg.replan_count,
      compute_time_us: msg.compute_time_us,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drone_id: msg.drone_id,
      mode: msg.mode,
      position_error: msg.position_error,
      yaw_error: msg.yaw_error,
      eta: msg.eta,
      replan_count: msg.replan_count,
      compute_time_us: msg.compute_time_us,
    }
  }
}


// Corresponds to swarm_interfaces__msg__PlannerStatus
/// Global diagnostics of the drone planner and controller node

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlannerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drones: Vec<super::msg::DroneStatus>,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PlannerStatus::default())
  }
}

impl rosidl_runtime_rs::Message for PlannerStatus {
  type RmwMsg = super::msg::rmw::PlannerStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        drones: msg.drones
          .into_iter()
          .map(|elem| super::msg::DroneStatus::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cycle_time_us: msg.cycle_time_us,
        cycle_time_max_us: msg.cycle_time_max_us,
        deadline_misses: msg.deadline_misses,
        clamped_references: msg.clamped_references,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        drones: msg.drones
          .iter()
          .map(|elem| super::msg::DroneStatus::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      cycle_time_us: msg.cycle_time_us,
      cycle_time_max_us: msg.cycle_time_max_us,
      deadline_misses: msg.deadline_misses,
      clamped_references: msg.clamped_references,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      drones: msg.drones
          .into_iter()
          .map(super::msg::DroneStatus::from_rmw_message)
          .collect(),
      cycle_time_us: msg.cycle_time_us,
      cycle_time_max_us: msg.cycle_time_max_us,
      deadline_misses: msg.deadline_misses,
      clamped_references: msg.clamped_references,
    }
  }
}


// Corresponds to swarm_interfaces__msg__UavMetric
/// Every metric the multi-objective optimizer uses, for ONE UAV slot (release 3.2.0).
///
/// One row of the RViz2 metrics dashboard. Field for field this is what the optimizer
/// reads or produces; see docs/PLANO_PAINEL_METRICAS_RVIZ.md §1.1 for the source of
/// each field and docs/CONTRATO_OTIMIZADOR.md for the contract it belongs to.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UavMetric {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UavMetric::default())
  }
}

impl rosidl_runtime_rs::Message for UavMetric {
  type RmwMsg = super::msg::rmw::UavMetric;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        drone_id: msg.drone_id,
        active: msg.active,
        mode: msg.mode,
        x: msg.x,
        y: msg.y,
        yaw: msg.yaw,
        z: msg.z,
        vx: msg.vx,
        vy: msg.vy,
        vz: msg.vz,
        speed_3d: msg.speed_3d,
        yaw_rate: msg.yaw_rate,
        has_link: msg.has_link,
        nearest_ugv_id: msg.nearest_ugv_id,
        ugv_distance_m: msg.ugv_distance_m,
        latency_ms: msg.latency_ms,
        los: msg.los,
        detections_now: msg.detections_now,
        sensor_streams: msg.sensor_streams,
        position_error: msg.position_error,
        yaw_error: msg.yaw_error,
        has_reference: msg.has_reference,
        reference_relative: msg.reference_relative,
        reference_z_requested: msg.reference_z_requested,
        reference_z_clamped: msg.reference_z_clamped,
        reference_z_clamped_flag: msg.reference_z_clamped_flag,
        reference_age_s: msg.reference_age_s,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      drone_id: msg.drone_id,
      active: msg.active,
      mode: msg.mode,
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      z: msg.z,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      speed_3d: msg.speed_3d,
      yaw_rate: msg.yaw_rate,
      has_link: msg.has_link,
      nearest_ugv_id: msg.nearest_ugv_id,
      ugv_distance_m: msg.ugv_distance_m,
      latency_ms: msg.latency_ms,
      los: msg.los,
      detections_now: msg.detections_now,
      sensor_streams: msg.sensor_streams,
      position_error: msg.position_error,
      yaw_error: msg.yaw_error,
      has_reference: msg.has_reference,
      reference_relative: msg.reference_relative,
      reference_z_requested: msg.reference_z_requested,
      reference_z_clamped: msg.reference_z_clamped,
      reference_z_clamped_flag: msg.reference_z_clamped_flag,
      reference_age_s: msg.reference_age_s,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      drone_id: msg.drone_id,
      active: msg.active,
      mode: msg.mode,
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      z: msg.z,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      speed_3d: msg.speed_3d,
      yaw_rate: msg.yaw_rate,
      has_link: msg.has_link,
      nearest_ugv_id: msg.nearest_ugv_id,
      ugv_distance_m: msg.ugv_distance_m,
      latency_ms: msg.latency_ms,
      los: msg.los,
      detections_now: msg.detections_now,
      sensor_streams: msg.sensor_streams,
      position_error: msg.position_error,
      yaw_error: msg.yaw_error,
      has_reference: msg.has_reference,
      reference_relative: msg.reference_relative,
      reference_z_requested: msg.reference_z_requested,
      reference_z_clamped: msg.reference_z_clamped,
      reference_z_clamped_flag: msg.reference_z_clamped_flag,
      reference_age_s: msg.reference_age_s,
    }
  }
}


// Corresponds to swarm_interfaces__msg__SwarmMetrics
/// Snapshot of every metric the optimizer uses: aggregate block + one row per UAV slot.
/// Published by swarm_visualizer's metrics panel (5 Hz) and rendered by RViz2.
/// Sources are listed in docs/PLANO_PAINEL_METRICAS_RVIZ.md §1.2.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwarmMetrics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// --- objective 3 -----------------------------------------------------------------
    /// len(active_ids): exact, never averaged
    pub active_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_ids: Vec<u32>,

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
    pub uavs: Vec<super::msg::UavMetric>,

}



impl Default for SwarmMetrics {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SwarmMetrics::default())
  }
}

impl rosidl_runtime_rs::Message for SwarmMetrics {
  type RmwMsg = super::msg::rmw::SwarmMetrics;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        active_count: msg.active_count,
        active_ids: msg.active_ids.as_slice().into(),
        detections_mean_60s: msg.detections_mean_60s,
        latency_mean_60s: msg.latency_mean_60s,
        latency_max_60s: msg.latency_max_60s,
        samples_in_window: msg.samples_in_window,
        window_capacity: msg.window_capacity,
        coverage_ratio: msg.coverage_ratio,
        ugv_weighted_coverage: msg.ugv_weighted_coverage,
        redundancy_score: msg.redundancy_score,
        planner_cycle_us: msg.planner_cycle_us,
        planner_deadline_misses: msg.planner_deadline_misses,
        clamped_references: msg.clamped_references,
        clock_hz: msg.clock_hz,
        sim_time_s: msg.sim_time_s,
        uavs: msg.uavs
          .into_iter()
          .map(|elem| super::msg::UavMetric::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      active_count: msg.active_count,
        active_ids: msg.active_ids.as_slice().into(),
      detections_mean_60s: msg.detections_mean_60s,
      latency_mean_60s: msg.latency_mean_60s,
      latency_max_60s: msg.latency_max_60s,
      samples_in_window: msg.samples_in_window,
      window_capacity: msg.window_capacity,
      coverage_ratio: msg.coverage_ratio,
      ugv_weighted_coverage: msg.ugv_weighted_coverage,
      redundancy_score: msg.redundancy_score,
      planner_cycle_us: msg.planner_cycle_us,
      planner_deadline_misses: msg.planner_deadline_misses,
      clamped_references: msg.clamped_references,
      clock_hz: msg.clock_hz,
      sim_time_s: msg.sim_time_s,
        uavs: msg.uavs
          .iter()
          .map(|elem| super::msg::UavMetric::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      active_count: msg.active_count,
      active_ids: msg.active_ids.into(),
      detections_mean_60s: msg.detections_mean_60s,
      latency_mean_60s: msg.latency_mean_60s,
      latency_max_60s: msg.latency_max_60s,
      samples_in_window: msg.samples_in_window,
      window_capacity: msg.window_capacity,
      coverage_ratio: msg.coverage_ratio,
      ugv_weighted_coverage: msg.ugv_weighted_coverage,
      redundancy_score: msg.redundancy_score,
      planner_cycle_us: msg.planner_cycle_us,
      planner_deadline_misses: msg.planner_deadline_misses,
      clamped_references: msg.clamped_references,
      clock_hz: msg.clock_hz,
      sim_time_s: msg.sim_time_s,
      uavs: msg.uavs
          .into_iter()
          .map(super::msg::UavMetric::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to swarm_interfaces__msg__UavDetectionCount
/// How many distinct targets ONE UAV is detecting right now (release 3.2.0).
///
/// Computed in C++ by swarm_visualizer's marker publisher from the per-sensor streams
/// (`/sensors/<id>/detections`, grouped by `parent_actor_id`). It exists so the Python
/// metrics panel does not have to subscribe to ten 50 Hz streams itself: doing that
/// cost 68 % of a core in deserialisation alone (measured; see MEDICOES M7e).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UavDetectionCount {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UavDetectionCount::default())
  }
}

impl rosidl_runtime_rs::Message for UavDetectionCount {
  type RmwMsg = super::msg::rmw::UavDetectionCount;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        drone_id: msg.drone_id,
        detections_now: msg.detections_now,
        sensor_streams: msg.sensor_streams,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      drone_id: msg.drone_id,
      detections_now: msg.detections_now,
      sensor_streams: msg.sensor_streams,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      drone_id: msg.drone_id,
      detections_now: msg.detections_now,
      sensor_streams: msg.sensor_streams,
    }
  }
}


// Corresponds to swarm_interfaces__msg__UavDetectionCountArray
/// One entry per UAV that has sensor streams (see UavDetectionCount). Published at 5 Hz.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UavDetectionCountArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uavs: Vec<super::msg::UavDetectionCount>,

}



impl Default for UavDetectionCountArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UavDetectionCountArray::default())
  }
}

impl rosidl_runtime_rs::Message for UavDetectionCountArray {
  type RmwMsg = super::msg::rmw::UavDetectionCountArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        uavs: msg.uavs
          .into_iter()
          .map(|elem| super::msg::UavDetectionCount::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        uavs: msg.uavs
          .iter()
          .map(|elem| super::msg::UavDetectionCount::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      uavs: msg.uavs
          .into_iter()
          .map(super::msg::UavDetectionCount::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to swarm_interfaces__msg__DetectionSummary
/// How many distinct objects the active UAVs are detecting right now (release 3.2.0).
///
/// Published by swarm_visualizer's marker publisher, which is where the per-sensor
/// streams are already reduced. It exists so the metrics panel can print the same
/// summary that the 3D overlay shows ("SEEN NOW: 7 (buildings 2, vehicles 3, ...)")
/// and the operator can compare it with `/metrics/optimizer_feedback`, which reports a
/// 60 s mean and not an instantaneous count.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectionSummary {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DetectionSummary::default())
  }
}

impl rosidl_runtime_rs::Message for DetectionSummary {
  type RmwMsg = super::msg::rmw::DetectionSummary;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        total: msg.total,
        buildings: msg.buildings,
        vehicles: msg.vehicles,
        pedestrians: msg.pedestrians,
        fleet: msg.fleet,
        blocked: msg.blocked,
        partially_blocked: msg.partially_blocked,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      total: msg.total,
      buildings: msg.buildings,
      vehicles: msg.vehicles,
      pedestrians: msg.pedestrians,
      fleet: msg.fleet,
      blocked: msg.blocked,
      partially_blocked: msg.partially_blocked,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      total: msg.total,
      buildings: msg.buildings,
      vehicles: msg.vehicles,
      pedestrians: msg.pedestrians,
      fleet: msg.fleet,
      blocked: msg.blocked,
      partially_blocked: msg.partially_blocked,
    }
  }
}


// Corresponds to swarm_interfaces__msg__OptimizerFeedback
/// Sliding-window metrics for the multi-objective optimizer (5 Hz publication)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OptimizerFeedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// exact active UAV list (never averaged)
    pub active_ids: Vec<u32>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OptimizerFeedback::default())
  }
}

impl rosidl_runtime_rs::Message for OptimizerFeedback {
  type RmwMsg = super::msg::rmw::OptimizerFeedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        active_ids: msg.active_ids.as_slice().into(),
        detections_mean_60s: msg.detections_mean_60s,
        latency_mean_60s: msg.latency_mean_60s,
        latency_max_60s: msg.latency_max_60s,
        samples_in_window: msg.samples_in_window,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        active_ids: msg.active_ids.as_slice().into(),
      detections_mean_60s: msg.detections_mean_60s,
      latency_mean_60s: msg.latency_mean_60s,
      latency_max_60s: msg.latency_max_60s,
      samples_in_window: msg.samples_in_window,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      active_ids: msg.active_ids.into(),
      detections_mean_60s: msg.detections_mean_60s,
      latency_mean_60s: msg.latency_mean_60s,
      latency_max_60s: msg.latency_max_60s,
      samples_in_window: msg.samples_in_window,
    }
  }
}


// Corresponds to swarm_interfaces__msg__UavLinkLatency
/// Communication latency between one active UAV and its nearest UGV

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UavLinkLatency::default())
  }
}

impl rosidl_runtime_rs::Message for UavLinkLatency {
  type RmwMsg = super::msg::rmw::UavLinkLatency;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        drone_id: msg.drone_id,
        ugv_id: msg.ugv_id,
        latency_ms: msg.latency_ms,
        distance_m: msg.distance_m,
        los: msg.los,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      drone_id: msg.drone_id,
      ugv_id: msg.ugv_id,
      latency_ms: msg.latency_ms,
      distance_m: msg.distance_m,
      los: msg.los,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      drone_id: msg.drone_id,
      ugv_id: msg.ugv_id,
      latency_ms: msg.latency_ms,
      distance_m: msg.distance_m,
      los: msg.los,
    }
  }
}


// Corresponds to swarm_interfaces__msg__UavLinkLatencyArray
/// Per-UAV latency to the nearest UGV (one entry per ACTIVE UAV, published at 5 Hz)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UavLinkLatencyArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub links: Vec<super::msg::UavLinkLatency>,

}



impl Default for UavLinkLatencyArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UavLinkLatencyArray::default())
  }
}

impl rosidl_runtime_rs::Message for UavLinkLatencyArray {
  type RmwMsg = super::msg::rmw::UavLinkLatencyArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        links: msg.links
          .into_iter()
          .map(|elem| super::msg::UavLinkLatency::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        links: msg.links
          .iter()
          .map(|elem| super::msg::UavLinkLatency::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      links: msg.links
          .into_iter()
          .map(super::msg::UavLinkLatency::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to swarm_interfaces__msg__UgvCommand
/// Carla-style vehicle control for one UGV

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UgvCommand::default())
  }
}

impl rosidl_runtime_rs::Message for UgvCommand {
  type RmwMsg = super::msg::rmw::UgvCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ugv_id: msg.ugv_id,
        throttle: msg.throttle,
        steer: msg.steer,
        brake: msg.brake,
        hand_brake: msg.hand_brake,
        reverse: msg.reverse,
        active_cmd: msg.active_cmd,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      ugv_id: msg.ugv_id,
      throttle: msg.throttle,
      steer: msg.steer,
      brake: msg.brake,
      hand_brake: msg.hand_brake,
      reverse: msg.reverse,
      active_cmd: msg.active_cmd,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ugv_id: msg.ugv_id,
      throttle: msg.throttle,
      steer: msg.steer,
      brake: msg.brake,
      hand_brake: msg.hand_brake,
      reverse: msg.reverse,
      active_cmd: msg.active_cmd,
    }
  }
}


// Corresponds to swarm_interfaces__msg__UgvCommandArray
/// Control for every UGV of the fleet

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UgvCommandArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commands: Vec<super::msg::UgvCommand>,

}



impl Default for UgvCommandArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UgvCommandArray::default())
  }
}

impl rosidl_runtime_rs::Message for UgvCommandArray {
  type RmwMsg = super::msg::rmw::UgvCommandArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        commands: msg.commands
          .into_iter()
          .map(|elem| super::msg::UgvCommand::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        commands: msg.commands
          .iter()
          .map(|elem| super::msg::UgvCommand::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      commands: msg.commands
          .into_iter()
          .map(super::msg::UgvCommand::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to swarm_interfaces__msg__UgvState
/// State of one UGV of the pooled fleet (frame 'map', SI units)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UgvState::default())
  }
}

impl rosidl_runtime_rs::Message for UgvState {
  type RmwMsg = super::msg::rmw::UgvState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ugv_id: msg.ugv_id,
        active: msg.active,
        x: msg.x,
        y: msg.y,
        yaw: msg.yaw,
        v: msg.v,
        route_length_m: msg.route_length_m,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      ugv_id: msg.ugv_id,
      active: msg.active,
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      v: msg.v,
      route_length_m: msg.route_length_m,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ugv_id: msg.ugv_id,
      active: msg.active,
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      v: msg.v,
      route_length_m: msg.route_length_m,
    }
  }
}


// Corresponds to swarm_interfaces__msg__UgvStateArray
/// State of every UGV in the fleet

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UgvStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: Vec<super::msg::UgvState>,

}



impl Default for UgvStateArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UgvStateArray::default())
  }
}

impl rosidl_runtime_rs::Message for UgvStateArray {
  type RmwMsg = super::msg::rmw::UgvStateArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        states: msg.states
          .into_iter()
          .map(|elem| super::msg::UgvState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        states: msg.states
          .iter()
          .map(|elem| super::msg::UgvState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      states: msg.states
          .into_iter()
          .map(super::msg::UgvState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to swarm_interfaces__msg__MetricEntry
/// Single generic metric entry

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetricEntry {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unit: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub valid: bool,

}



impl Default for MetricEntry {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetricEntry::default())
  }
}

impl rosidl_runtime_rs::Message for MetricEntry {
  type RmwMsg = super::msg::rmw::MetricEntry;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        unit: msg.unit.as_str().into(),
        value: msg.value,
        valid: msg.valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        unit: msg.unit.as_str().into(),
      value: msg.value,
      valid: msg.valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      unit: msg.unit.to_string(),
      value: msg.value,
      valid: msg.valid,
    }
  }
}


// Corresponds to swarm_interfaces__msg__MetricEntryArray
/// Array of generic metric entries with metadata

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetricEntryArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model_based: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params_hash: std::string::String,


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
    pub entries: Vec<super::msg::MetricEntry>,

}



impl Default for MetricEntryArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetricEntryArray::default())
  }
}

impl rosidl_runtime_rs::Message for MetricEntryArray {
  type RmwMsg = super::msg::rmw::MetricEntryArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        model_based: msg.model_based,
        params_hash: msg.params_hash.as_str().into(),
        window_sec: msg.window_sec,
        warming_up: msg.warming_up,
        n_frames_in_window: msg.n_frames_in_window,
        entries: msg.entries
          .into_iter()
          .map(|elem| super::msg::MetricEntry::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      model_based: msg.model_based,
        params_hash: msg.params_hash.as_str().into(),
      window_sec: msg.window_sec,
      warming_up: msg.warming_up,
      n_frames_in_window: msg.n_frames_in_window,
        entries: msg.entries
          .iter()
          .map(|elem| super::msg::MetricEntry::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      model_based: msg.model_based,
      params_hash: msg.params_hash.to_string(),
      window_sec: msg.window_sec,
      warming_up: msg.warming_up,
      n_frames_in_window: msg.n_frames_in_window,
      entries: msg.entries
          .into_iter()
          .map(super::msg::MetricEntry::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to swarm_interfaces__msg__ExpectedMetricsGt
/// Structured expected perception metrics WITH Ground Truth (G01-G20)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpectedMetricsGt {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model_based: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params_hash: std::string::String,


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
    pub classes: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ap_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aph_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub f1_max_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub optimal_conf_per_class: Vec<f64>,

    /// G04 - Analyzer Ratios
    pub ratio_tp_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ratio_fp_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ratio_fn_per_class: Vec<f64>,

    /// G05 - Error Statistics (GT - Est)
    pub err_dist_mean_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_dist_rms_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_yaw_mean_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_yaw_std_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_vel_mean_per_class: Vec<f64>,

    /// G06 - MOTP
    pub motp_per_class: Vec<f64>,

    /// G07 - CLEAR MOTA & ID Switches
    pub mota_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id_switch_per_class: Vec<f64>,

    /// G08 - Trajectory Prediction
    pub pred_ade: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pred_fde: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pred_miss_rate: f64,

    /// G09 - BEV Corner Dispersion
    pub corner_mean_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub corner_p95_per_class: Vec<f64>,

    /// G10 - Heading Flip Rate
    pub flip_rate_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mflip_rate: f64,

    /// G11 - Nearest Surface Footprint Distance
    pub nsurf_mean_per_class: Vec<f64>,

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
    pub confusion_pairs: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confusion_values: Vec<f64>,

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
    pub cw_map_per_class: Vec<f64>,

    /// G17 - Consecutive FN Duration Span
    pub fn_span_mean_per_class: Vec<f64>,

    /// G18 - Frame Pass Rates
    pub pass_rate_num_tp: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pass_rate_num_gt_tp: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pass_rate_metrics_score: f64,

    /// G19 - nuScenes Errors
    pub err_ate_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_aoe_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_ase_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub err_ave_per_class: Vec<f64>,

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
    pub n_gt_per_class: Vec<u32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_tp_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_fp_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_fn_per_class: Vec<f64>,

}



impl Default for ExpectedMetricsGt {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ExpectedMetricsGt::default())
  }
}

impl rosidl_runtime_rs::Message for ExpectedMetricsGt {
  type RmwMsg = super::msg::rmw::ExpectedMetricsGt;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        model_based: msg.model_based,
        params_hash: msg.params_hash.as_str().into(),
        window_sec: msg.window_sec,
        warming_up: msg.warming_up,
        n_frames_in_window: msg.n_frames_in_window,
        map: msg.map,
        maph: msg.maph,
        classes: msg.classes
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        ap_per_class: msg.ap_per_class.as_slice().into(),
        aph_per_class: msg.aph_per_class.as_slice().into(),
        f1_max_per_class: msg.f1_max_per_class.as_slice().into(),
        optimal_conf_per_class: msg.optimal_conf_per_class.as_slice().into(),
        ratio_tp_per_class: msg.ratio_tp_per_class.as_slice().into(),
        ratio_fp_per_class: msg.ratio_fp_per_class.as_slice().into(),
        ratio_fn_per_class: msg.ratio_fn_per_class.as_slice().into(),
        err_dist_mean_per_class: msg.err_dist_mean_per_class.as_slice().into(),
        err_dist_rms_per_class: msg.err_dist_rms_per_class.as_slice().into(),
        err_yaw_mean_per_class: msg.err_yaw_mean_per_class.as_slice().into(),
        err_yaw_std_per_class: msg.err_yaw_std_per_class.as_slice().into(),
        err_vel_mean_per_class: msg.err_vel_mean_per_class.as_slice().into(),
        motp_per_class: msg.motp_per_class.as_slice().into(),
        mota_per_class: msg.mota_per_class.as_slice().into(),
        id_switch_per_class: msg.id_switch_per_class.as_slice().into(),
        pred_ade: msg.pred_ade,
        pred_fde: msg.pred_fde,
        pred_miss_rate: msg.pred_miss_rate,
        corner_mean_per_class: msg.corner_mean_per_class.as_slice().into(),
        corner_p95_per_class: msg.corner_p95_per_class.as_slice().into(),
        flip_rate_per_class: msg.flip_rate_per_class.as_slice().into(),
        mflip_rate: msg.mflip_rate,
        nsurf_mean_per_class: msg.nsurf_mean_per_class.as_slice().into(),
        ece: msg.ece,
        ece_macro: msg.ece_macro,
        confident_error_rate: msg.confident_error_rate,
        confident_errors_per_frame: msg.confident_errors_per_frame,
        confusion_pairs: msg.confusion_pairs
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        confusion_values: msg.confusion_values.as_slice().into(),
        critical_fp: msg.critical_fp,
        critical_fn: msg.critical_fn,
        cw_map: msg.cw_map,
        cw_map_per_class: msg.cw_map_per_class.as_slice().into(),
        fn_span_mean_per_class: msg.fn_span_mean_per_class.as_slice().into(),
        pass_rate_num_tp: msg.pass_rate_num_tp,
        pass_rate_num_gt_tp: msg.pass_rate_num_gt_tp,
        pass_rate_metrics_score: msg.pass_rate_metrics_score,
        err_ate_per_class: msg.err_ate_per_class.as_slice().into(),
        err_aoe_per_class: msg.err_aoe_per_class.as_slice().into(),
        err_ase_per_class: msg.err_ase_per_class.as_slice().into(),
        err_ave_per_class: msg.err_ave_per_class.as_slice().into(),
        n_gt_total: msg.n_gt_total,
        expected_tp_total: msg.expected_tp_total,
        expected_fp_total: msg.expected_fp_total,
        expected_fn_total: msg.expected_fn_total,
        n_gt_per_class: msg.n_gt_per_class.as_slice().into(),
        expected_tp_per_class: msg.expected_tp_per_class.as_slice().into(),
        expected_fp_per_class: msg.expected_fp_per_class.as_slice().into(),
        expected_fn_per_class: msg.expected_fn_per_class.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      model_based: msg.model_based,
        params_hash: msg.params_hash.as_str().into(),
      window_sec: msg.window_sec,
      warming_up: msg.warming_up,
      n_frames_in_window: msg.n_frames_in_window,
      map: msg.map,
      maph: msg.maph,
        classes: msg.classes
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        ap_per_class: msg.ap_per_class.as_slice().into(),
        aph_per_class: msg.aph_per_class.as_slice().into(),
        f1_max_per_class: msg.f1_max_per_class.as_slice().into(),
        optimal_conf_per_class: msg.optimal_conf_per_class.as_slice().into(),
        ratio_tp_per_class: msg.ratio_tp_per_class.as_slice().into(),
        ratio_fp_per_class: msg.ratio_fp_per_class.as_slice().into(),
        ratio_fn_per_class: msg.ratio_fn_per_class.as_slice().into(),
        err_dist_mean_per_class: msg.err_dist_mean_per_class.as_slice().into(),
        err_dist_rms_per_class: msg.err_dist_rms_per_class.as_slice().into(),
        err_yaw_mean_per_class: msg.err_yaw_mean_per_class.as_slice().into(),
        err_yaw_std_per_class: msg.err_yaw_std_per_class.as_slice().into(),
        err_vel_mean_per_class: msg.err_vel_mean_per_class.as_slice().into(),
        motp_per_class: msg.motp_per_class.as_slice().into(),
        mota_per_class: msg.mota_per_class.as_slice().into(),
        id_switch_per_class: msg.id_switch_per_class.as_slice().into(),
      pred_ade: msg.pred_ade,
      pred_fde: msg.pred_fde,
      pred_miss_rate: msg.pred_miss_rate,
        corner_mean_per_class: msg.corner_mean_per_class.as_slice().into(),
        corner_p95_per_class: msg.corner_p95_per_class.as_slice().into(),
        flip_rate_per_class: msg.flip_rate_per_class.as_slice().into(),
      mflip_rate: msg.mflip_rate,
        nsurf_mean_per_class: msg.nsurf_mean_per_class.as_slice().into(),
      ece: msg.ece,
      ece_macro: msg.ece_macro,
      confident_error_rate: msg.confident_error_rate,
      confident_errors_per_frame: msg.confident_errors_per_frame,
        confusion_pairs: msg.confusion_pairs
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        confusion_values: msg.confusion_values.as_slice().into(),
      critical_fp: msg.critical_fp,
      critical_fn: msg.critical_fn,
      cw_map: msg.cw_map,
        cw_map_per_class: msg.cw_map_per_class.as_slice().into(),
        fn_span_mean_per_class: msg.fn_span_mean_per_class.as_slice().into(),
      pass_rate_num_tp: msg.pass_rate_num_tp,
      pass_rate_num_gt_tp: msg.pass_rate_num_gt_tp,
      pass_rate_metrics_score: msg.pass_rate_metrics_score,
        err_ate_per_class: msg.err_ate_per_class.as_slice().into(),
        err_aoe_per_class: msg.err_aoe_per_class.as_slice().into(),
        err_ase_per_class: msg.err_ase_per_class.as_slice().into(),
        err_ave_per_class: msg.err_ave_per_class.as_slice().into(),
      n_gt_total: msg.n_gt_total,
      expected_tp_total: msg.expected_tp_total,
      expected_fp_total: msg.expected_fp_total,
      expected_fn_total: msg.expected_fn_total,
        n_gt_per_class: msg.n_gt_per_class.as_slice().into(),
        expected_tp_per_class: msg.expected_tp_per_class.as_slice().into(),
        expected_fp_per_class: msg.expected_fp_per_class.as_slice().into(),
        expected_fn_per_class: msg.expected_fn_per_class.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      model_based: msg.model_based,
      params_hash: msg.params_hash.to_string(),
      window_sec: msg.window_sec,
      warming_up: msg.warming_up,
      n_frames_in_window: msg.n_frames_in_window,
      map: msg.map,
      maph: msg.maph,
      classes: msg.classes
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      ap_per_class: msg.ap_per_class.into(),
      aph_per_class: msg.aph_per_class.into(),
      f1_max_per_class: msg.f1_max_per_class.into(),
      optimal_conf_per_class: msg.optimal_conf_per_class.into(),
      ratio_tp_per_class: msg.ratio_tp_per_class.into(),
      ratio_fp_per_class: msg.ratio_fp_per_class.into(),
      ratio_fn_per_class: msg.ratio_fn_per_class.into(),
      err_dist_mean_per_class: msg.err_dist_mean_per_class.into(),
      err_dist_rms_per_class: msg.err_dist_rms_per_class.into(),
      err_yaw_mean_per_class: msg.err_yaw_mean_per_class.into(),
      err_yaw_std_per_class: msg.err_yaw_std_per_class.into(),
      err_vel_mean_per_class: msg.err_vel_mean_per_class.into(),
      motp_per_class: msg.motp_per_class.into(),
      mota_per_class: msg.mota_per_class.into(),
      id_switch_per_class: msg.id_switch_per_class.into(),
      pred_ade: msg.pred_ade,
      pred_fde: msg.pred_fde,
      pred_miss_rate: msg.pred_miss_rate,
      corner_mean_per_class: msg.corner_mean_per_class.into(),
      corner_p95_per_class: msg.corner_p95_per_class.into(),
      flip_rate_per_class: msg.flip_rate_per_class.into(),
      mflip_rate: msg.mflip_rate,
      nsurf_mean_per_class: msg.nsurf_mean_per_class.into(),
      ece: msg.ece,
      ece_macro: msg.ece_macro,
      confident_error_rate: msg.confident_error_rate,
      confident_errors_per_frame: msg.confident_errors_per_frame,
      confusion_pairs: msg.confusion_pairs
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      confusion_values: msg.confusion_values.into(),
      critical_fp: msg.critical_fp,
      critical_fn: msg.critical_fn,
      cw_map: msg.cw_map,
      cw_map_per_class: msg.cw_map_per_class.into(),
      fn_span_mean_per_class: msg.fn_span_mean_per_class.into(),
      pass_rate_num_tp: msg.pass_rate_num_tp,
      pass_rate_num_gt_tp: msg.pass_rate_num_gt_tp,
      pass_rate_metrics_score: msg.pass_rate_metrics_score,
      err_ate_per_class: msg.err_ate_per_class.into(),
      err_aoe_per_class: msg.err_aoe_per_class.into(),
      err_ase_per_class: msg.err_ase_per_class.into(),
      err_ave_per_class: msg.err_ave_per_class.into(),
      n_gt_total: msg.n_gt_total,
      expected_tp_total: msg.expected_tp_total,
      expected_fp_total: msg.expected_fp_total,
      expected_fn_total: msg.expected_fn_total,
      n_gt_per_class: msg.n_gt_per_class.into(),
      expected_tp_per_class: msg.expected_tp_per_class.into(),
      expected_fp_per_class: msg.expected_fp_per_class.into(),
      expected_fn_per_class: msg.expected_fn_per_class.into(),
    }
  }
}


// Corresponds to swarm_interfaces__msg__ExpectedMetricsNoGt
/// Structured expected perception metrics WITHOUT Ground Truth (N01-N20)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpectedMetricsNoGt {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model_based: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params_hash: std::string::String,


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
    pub classes: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lateral_deviation_mean: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lateral_deviation_min: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lateral_deviation_max: Vec<f64>,

    /// N02 - Yaw Deviation
    pub yaw_deviation_mean: Vec<f64>,

    /// N03 - Yaw Rate (stationary)
    pub yaw_rate_mean: Vec<f64>,

    /// N04 - Predicted Path Deviation
    pub predicted_path_deviation_mean: Vec<f64>,

    /// N05, N06, N07, N08 - Object Counts
    pub total_objects_count: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub average_objects_count: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub interval_average_objects_count: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub all_object_count: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_count_per_class: Vec<f64>,

    /// N09 - Expected Maximum Detection Range
    pub max_distance_per_class: Vec<f64>,

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
    pub size_cv_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position_jitter_per_class: Vec<f64>,

    /// N15 - Heading Inversion Rate
    pub heading_inversion_rate_per_class: Vec<f64>,

    /// N16 - Track Quality
    pub track_fragments_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub track_purity_per_class: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub track_length_per_class: Vec<f64>,

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
    pub sensor_health: Vec<bool>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ExpectedMetricsNoGt::default())
  }
}

impl rosidl_runtime_rs::Message for ExpectedMetricsNoGt {
  type RmwMsg = super::msg::rmw::ExpectedMetricsNoGt;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        model_based: msg.model_based,
        params_hash: msg.params_hash.as_str().into(),
        window_sec: msg.window_sec,
        warming_up: msg.warming_up,
        n_frames_in_window: msg.n_frames_in_window,
        classes: msg.classes
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        lateral_deviation_mean: msg.lateral_deviation_mean.as_slice().into(),
        lateral_deviation_min: msg.lateral_deviation_min.as_slice().into(),
        lateral_deviation_max: msg.lateral_deviation_max.as_slice().into(),
        yaw_deviation_mean: msg.yaw_deviation_mean.as_slice().into(),
        yaw_rate_mean: msg.yaw_rate_mean.as_slice().into(),
        predicted_path_deviation_mean: msg.predicted_path_deviation_mean.as_slice().into(),
        total_objects_count: msg.total_objects_count.as_slice().into(),
        average_objects_count: msg.average_objects_count.as_slice().into(),
        interval_average_objects_count: msg.interval_average_objects_count.as_slice().into(),
        all_object_count: msg.all_object_count,
        object_count_per_class: msg.object_count_per_class.as_slice().into(),
        max_distance_per_class: msg.max_distance_per_class.as_slice().into(),
        meas_to_tracked_latency_ms: msg.meas_to_tracked_latency_ms,
        prediction_latency_ms: msg.prediction_latency_ms,
        total_latency_ms: msg.total_latency_ms,
        cross_confirm_rate: msg.cross_confirm_rate,
        unconfirmed_rate: msg.unconfirmed_rate,
        missed_by_other_rate: msg.missed_by_other_rate,
        class_disagree_rate: msg.class_disagree_rate,
        range_discrepancy_mean: msg.range_discrepancy_mean,
        range_discrepancy_p95: msg.range_discrepancy_p95,
        size_cv_per_class: msg.size_cv_per_class.as_slice().into(),
        position_jitter_per_class: msg.position_jitter_per_class.as_slice().into(),
        heading_inversion_rate_per_class: msg.heading_inversion_rate_per_class.as_slice().into(),
        track_fragments_per_class: msg.track_fragments_per_class.as_slice().into(),
        track_purity_per_class: msg.track_purity_per_class.as_slice().into(),
        track_length_per_class: msg.track_length_per_class.as_slice().into(),
        ece_proxy: msg.ece_proxy,
        unconfirmed_high_conf_rate: msg.unconfirmed_high_conf_rate,
        critical_inconsistency_per_s: msg.critical_inconsistency_per_s,
        sync_offset_ms: msg.sync_offset_ms,
        sensor_health: msg.sensor_health.as_slice().into(),
        flight_regime_altitude_m: msg.flight_regime_altitude_m,
        flight_regime_speed_mps: msg.flight_regime_speed_mps,
        flight_regime_climb_rate_mps: msg.flight_regime_climb_rate_mps,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      model_based: msg.model_based,
        params_hash: msg.params_hash.as_str().into(),
      window_sec: msg.window_sec,
      warming_up: msg.warming_up,
      n_frames_in_window: msg.n_frames_in_window,
        classes: msg.classes
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        lateral_deviation_mean: msg.lateral_deviation_mean.as_slice().into(),
        lateral_deviation_min: msg.lateral_deviation_min.as_slice().into(),
        lateral_deviation_max: msg.lateral_deviation_max.as_slice().into(),
        yaw_deviation_mean: msg.yaw_deviation_mean.as_slice().into(),
        yaw_rate_mean: msg.yaw_rate_mean.as_slice().into(),
        predicted_path_deviation_mean: msg.predicted_path_deviation_mean.as_slice().into(),
        total_objects_count: msg.total_objects_count.as_slice().into(),
        average_objects_count: msg.average_objects_count.as_slice().into(),
        interval_average_objects_count: msg.interval_average_objects_count.as_slice().into(),
      all_object_count: msg.all_object_count,
        object_count_per_class: msg.object_count_per_class.as_slice().into(),
        max_distance_per_class: msg.max_distance_per_class.as_slice().into(),
      meas_to_tracked_latency_ms: msg.meas_to_tracked_latency_ms,
      prediction_latency_ms: msg.prediction_latency_ms,
      total_latency_ms: msg.total_latency_ms,
      cross_confirm_rate: msg.cross_confirm_rate,
      unconfirmed_rate: msg.unconfirmed_rate,
      missed_by_other_rate: msg.missed_by_other_rate,
      class_disagree_rate: msg.class_disagree_rate,
      range_discrepancy_mean: msg.range_discrepancy_mean,
      range_discrepancy_p95: msg.range_discrepancy_p95,
        size_cv_per_class: msg.size_cv_per_class.as_slice().into(),
        position_jitter_per_class: msg.position_jitter_per_class.as_slice().into(),
        heading_inversion_rate_per_class: msg.heading_inversion_rate_per_class.as_slice().into(),
        track_fragments_per_class: msg.track_fragments_per_class.as_slice().into(),
        track_purity_per_class: msg.track_purity_per_class.as_slice().into(),
        track_length_per_class: msg.track_length_per_class.as_slice().into(),
      ece_proxy: msg.ece_proxy,
      unconfirmed_high_conf_rate: msg.unconfirmed_high_conf_rate,
      critical_inconsistency_per_s: msg.critical_inconsistency_per_s,
      sync_offset_ms: msg.sync_offset_ms,
        sensor_health: msg.sensor_health.as_slice().into(),
      flight_regime_altitude_m: msg.flight_regime_altitude_m,
      flight_regime_speed_mps: msg.flight_regime_speed_mps,
      flight_regime_climb_rate_mps: msg.flight_regime_climb_rate_mps,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      model_based: msg.model_based,
      params_hash: msg.params_hash.to_string(),
      window_sec: msg.window_sec,
      warming_up: msg.warming_up,
      n_frames_in_window: msg.n_frames_in_window,
      classes: msg.classes
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      lateral_deviation_mean: msg.lateral_deviation_mean.into(),
      lateral_deviation_min: msg.lateral_deviation_min.into(),
      lateral_deviation_max: msg.lateral_deviation_max.into(),
      yaw_deviation_mean: msg.yaw_deviation_mean.into(),
      yaw_rate_mean: msg.yaw_rate_mean.into(),
      predicted_path_deviation_mean: msg.predicted_path_deviation_mean.into(),
      total_objects_count: msg.total_objects_count.into(),
      average_objects_count: msg.average_objects_count.into(),
      interval_average_objects_count: msg.interval_average_objects_count.into(),
      all_object_count: msg.all_object_count,
      object_count_per_class: msg.object_count_per_class.into(),
      max_distance_per_class: msg.max_distance_per_class.into(),
      meas_to_tracked_latency_ms: msg.meas_to_tracked_latency_ms,
      prediction_latency_ms: msg.prediction_latency_ms,
      total_latency_ms: msg.total_latency_ms,
      cross_confirm_rate: msg.cross_confirm_rate,
      unconfirmed_rate: msg.unconfirmed_rate,
      missed_by_other_rate: msg.missed_by_other_rate,
      class_disagree_rate: msg.class_disagree_rate,
      range_discrepancy_mean: msg.range_discrepancy_mean,
      range_discrepancy_p95: msg.range_discrepancy_p95,
      size_cv_per_class: msg.size_cv_per_class.into(),
      position_jitter_per_class: msg.position_jitter_per_class.into(),
      heading_inversion_rate_per_class: msg.heading_inversion_rate_per_class.into(),
      track_fragments_per_class: msg.track_fragments_per_class.into(),
      track_purity_per_class: msg.track_purity_per_class.into(),
      track_length_per_class: msg.track_length_per_class.into(),
      ece_proxy: msg.ece_proxy,
      unconfirmed_high_conf_rate: msg.unconfirmed_high_conf_rate,
      critical_inconsistency_per_s: msg.critical_inconsistency_per_s,
      sync_offset_ms: msg.sync_offset_ms,
      sensor_health: msg.sensor_health.into(),
      flight_regime_altitude_m: msg.flight_regime_altitude_m,
      flight_regime_speed_mps: msg.flight_regime_speed_mps,
      flight_regime_climb_rate_mps: msg.flight_regime_climb_rate_mps,
    }
  }
}


