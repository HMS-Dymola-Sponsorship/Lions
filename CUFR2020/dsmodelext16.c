#include <moutil.c>
PreNonAliasDef(81)
PreNonAliasDef(82)
PreNonAliasDef(83)
PreNonAliasDef(84)
PreNonAliasDef(85)
StartNonAlias(80)
DeclareVariable("vehicle.rearAxle.controlBus.wheel_4.tyreForces.ty", \
"Wheel contact torque in lateral direction [N.m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.controlBus.wheel_4.tyreForces.tz", \
"Wheel contact torque in normal direction [N.m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.T[1, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[1]", 1,\
 5, 73077, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.T[1, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[2]", 1,\
 5, 73078, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.T[1, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[3]", 1,\
 5, 73079, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.T[2, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 1]", 1,\
 5, 71469, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.T[2, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 2]", 1,\
 5, 71470, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.T[2, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 3]", 1,\
 5, 71471, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.T[3, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 1]", 1,\
 5, 71472, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.T[3, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 2]", 1,\
 5, 71473, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.T[3, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 3]", 1,\
 5, 71474, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.w[1]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[1]", 1, 5, 71475, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.w[2]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[2]", 1, 5, 71476, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.R.w[3]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[3]", 1, 5, 71477, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.r_0[1]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.tyreBelt.beltMass.r_0[1]", 1,\
 5, 72892, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.r_0[2]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.tyreBelt.beltMass.r_0[2]", 1,\
 5, 72893, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.beltFrame.r_0[3]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.tyreBelt.beltMass.r_0[3]", 1,\
 5, 72894, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.w_x", \
"X-component of tyre belt rotational speed vector [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.w_y", \
"Y-component of tyre belt rotational speed vector [rad/s]", "vehicle.wheel_4.systemMass.frame_resolve.R.w[2]", 1,\
 5, 71476, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.beltConnector.w_z", \
"Z-component of tyre belt rotational speed vector [rad/s]", "vehicle.wheel_4.systemMass.frame_resolve.R.w[3]", 1,\
 5, 71477, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contact", \
"If true, wheel and ground are in contact [:#(type=Boolean)]", "controlBus.wheel_4.contactPoint.contact", 1,\
 3, 92, 69)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.T[1, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[1, 1]", 1,\
 5, 72366, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.T[1, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[1, 2]", 1,\
 5, 72367, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.T[1, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[1, 3]", 1,\
 5, 72368, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.T[2, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[2, 1]", 1,\
 5, 72369, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.T[2, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[2, 2]", 1,\
 5, 72370, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.T[2, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[2, 3]", 1,\
 5, 72371, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.T[3, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[3, 1]", 1,\
 5, 72372, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.T[3, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[3, 2]", 1,\
 5, 72373, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.T[3, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[3, 3]", 1,\
 5, 72374, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.w[1]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.forceApplication.forceXYZ.R.w[1]", 1, 5, 72375, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.w[2]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.forceApplication.forceXYZ.R.w[2]", 1, 5, 72376, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.R.w[3]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.forceApplication.forceXYZ.R.w[3]", 1, 5, 72377, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.r_0[1]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.forceApplication.forceXYZ.r_0[1]", 1,\
 5, 72363, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.r_0[2]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.forceApplication.forceXYZ.r_0[2]", 1,\
 5, 72364, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.contactFrame.r_0[3]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.forceApplication.forceXYZ.r_0[3]", 1,\
 5, 72365, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.gamma", \
"Inclination (wheel camber angle) [rad|deg]", "controlBus.wheel_4.contactPoint.gamma", 1,\
 3, 93, 4)
DeclareVariable("vehicle.transmission.controlBus.wheel_4.contactPoint.mue", \
"Friction coefficient", 1.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.penetrationDepth",\
 "Wheel-ground indentation [m]", "controlBus.wheel_4.contactPoint.penetrationDepth", 1,\
 3, 95, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.v_x", \
"Contact patch velocity in heading direction [m/s]", "controlBus.wheel_4.contactPoint.v_x", 1,\
 3, 96, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.v_y", \
"Contact patch velocity in lateral direction [m/s]", "controlBus.wheel_4.contactPoint.v_y", 1,\
 3, 97, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.T[1, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[1]", 1,\
 5, 73077, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.T[1, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[2]", 1,\
 5, 73078, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.T[1, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[3]", 1,\
 5, 73079, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.T[2, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 1]", 1,\
 5, 71469, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.T[2, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 2]", 1,\
 5, 71470, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.T[2, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 3]", 1,\
 5, 71471, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.T[3, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 1]", 1,\
 5, 71472, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.T[3, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 2]", 1,\
 5, 71473, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.T[3, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 3]", 1,\
 5, 71474, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.w[1]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[1]", 1, 5, 71475, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.w[2]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[2]", 1, 5, 71476, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.R.w[3]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[3]", 1, 5, 71477, 0)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.r_0[1]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.systemMass.frame_resolve.r_0[1]", 1,\
 5, 71463, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.r_0[2]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.systemMass.frame_resolve.r_0[2]", 1,\
 5, 71464, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.hubFrame.r_0[3]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.systemMass.frame_resolve.r_0[3]", 1,\
 5, 71465, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.w", \
"Wheel rotational speed [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareVariable("vehicle.transmission.controlBus.wheel_4.tyreForces.alpha", \
"Lateral slip angle [rad|deg]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.wheel_4.tyreForces.alphaMax", \
"Slip angle for peak lateral effort [rad|deg]", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.wheel_4.tyreForces.effectiveRadius",\
 "Effective radius [m]", 0.0, 0.0,1E+100,0.0,0,521)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.tyreForces.fx", \
"Wheel contact force in longitudinal direction [N]", "vehicle.wheel_4.forceApplication.resolveForcesAndTorques.f_1[1]", 1,\
 5, 72337, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.tyreForces.fy", \
"Wheel contact force in lateral direction [N]", "vehicle.wheel_4.forceApplication.resolveForcesAndTorques.f_1[2]", 1,\
 5, 72338, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.tyreForces.fz", \
"Wheel contact force in normal direction [N]", "vehicle.wheel_4.forceApplication.resolveForcesAndTorques.f_1[3]", 1,\
 5, 72339, 4)
DeclareVariable("vehicle.transmission.controlBus.wheel_4.tyreForces.kappa", \
"Longitudinal slip ratio", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.wheel_4.tyreForces.kappaMax", \
"Slip ratio for peak tractive effort", 1.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.tyreForces.tx", \
"Wheel contact torque in longitudinal direction [N.m]", "vehicle.wheel_4.forceApplication.resolveForcesAndTorques.t_1[1]", 1,\
 5, 72340, 4)
DeclareVariable("vehicle.transmission.controlBus.wheel_4.tyreForces.ty", \
"Wheel contact torque in lateral direction [N.m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.wheel_4.tyreForces.tz", \
"Wheel contact torque in normal direction [N.m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.T[1, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[1]", 1,\
 5, 73077, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.T[1, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[2]", 1,\
 5, 73078, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.T[1, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[3]", 1,\
 5, 73079, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.T[2, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 1]", 1,\
 5, 71469, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.T[2, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 2]", 1,\
 5, 71470, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.T[2, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 3]", 1,\
 5, 71471, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.T[3, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 1]", 1,\
 5, 71472, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.T[3, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 2]", 1,\
 5, 71473, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.T[3, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 3]", 1,\
 5, 71474, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.w[1]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[1]", 1, 5, 71475, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.w[2]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[2]", 1, 5, 71476, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.R.w[3]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[3]", 1, 5, 71477, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.r_0[1]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.tyreBelt.beltMass.r_0[1]", 1,\
 5, 72892, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.r_0[2]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.tyreBelt.beltMass.r_0[2]", 1,\
 5, 72893, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.beltFrame.r_0[3]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.tyreBelt.beltMass.r_0[3]", 1,\
 5, 72894, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.w_x",\
 "X-component of tyre belt rotational speed vector [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.w_y",\
 "Y-component of tyre belt rotational speed vector [rad/s]", "vehicle.wheel_4.systemMass.frame_resolve.R.w[2]", 1,\
 5, 71476, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.beltConnector.w_z",\
 "Z-component of tyre belt rotational speed vector [rad/s]", "vehicle.wheel_4.systemMass.frame_resolve.R.w[3]", 1,\
 5, 71477, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contact",\
 "If true, wheel and ground are in contact [:#(type=Boolean)]", "controlBus.wheel_4.contactPoint.contact", 1,\
 3, 92, 69)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.T[1, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[1, 1]", 1,\
 5, 72366, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.T[1, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[1, 2]", 1,\
 5, 72367, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.T[1, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[1, 3]", 1,\
 5, 72368, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.T[2, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[2, 1]", 1,\
 5, 72369, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.T[2, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[2, 2]", 1,\
 5, 72370, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.T[2, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[2, 3]", 1,\
 5, 72371, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.T[3, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[3, 1]", 1,\
 5, 72372, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.T[3, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[3, 2]", 1,\
 5, 72373, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.T[3, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.forceApplication.forceXYZ.R.T[3, 3]", 1,\
 5, 72374, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.w[1]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.forceApplication.forceXYZ.R.w[1]", 1, 5, 72375, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.w[2]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.forceApplication.forceXYZ.R.w[2]", 1, 5, 72376, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.R.w[3]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.forceApplication.forceXYZ.R.w[3]", 1, 5, 72377, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.r_0[1]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.forceApplication.forceXYZ.r_0[1]", 1,\
 5, 72363, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.r_0[2]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.forceApplication.forceXYZ.r_0[2]", 1,\
 5, 72364, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.contactFrame.r_0[3]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.forceApplication.forceXYZ.r_0[3]", 1,\
 5, 72365, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.gamma",\
 "Inclination (wheel camber angle) [rad|deg]", "controlBus.wheel_4.contactPoint.gamma", 1,\
 3, 93, 4)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.mue",\
 "Friction coefficient", 1.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.penetrationDepth",\
 "Wheel-ground indentation [m]", "controlBus.wheel_4.contactPoint.penetrationDepth", 1,\
 3, 95, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.v_x",\
 "Contact patch velocity in heading direction [m/s]", "controlBus.wheel_4.contactPoint.v_x", 1,\
 3, 96, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.v_y",\
 "Contact patch velocity in lateral direction [m/s]", "controlBus.wheel_4.contactPoint.v_y", 1,\
 3, 97, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.T[1, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[1]", 1,\
 5, 73077, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.T[1, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[2]", 1,\
 5, 73078, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.T[1, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.contact.findContactPoint.n_spin[3]", 1,\
 5, 73079, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.T[2, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 1]", 1,\
 5, 71469, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.T[2, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 2]", 1,\
 5, 71470, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.T[2, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[2, 3]", 1,\
 5, 71471, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.T[3, 1]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 1]", 1,\
 5, 71472, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.T[3, 2]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 2]", 1,\
 5, 71473, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.T[3, 3]",\
 "Transformation matrix from world frame to local frame", "vehicle.wheel_4.systemMass.frame_resolve.R.T[3, 3]", 1,\
 5, 71474, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.w[1]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[1]", 1, 5, 71475, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.w[2]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[2]", 1, 5, 71476, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.R.w[3]",\
 "Absolute angular velocity of local frame, resolved in local frame [rad/s]", \
"vehicle.wheel_4.systemMass.frame_resolve.R.w[3]", 1, 5, 71477, 0)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.r_0[1]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.systemMass.frame_resolve.r_0[1]", 1,\
 5, 71463, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.r_0[2]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.systemMass.frame_resolve.r_0[2]", 1,\
 5, 71464, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.hubFrame.r_0[3]",\
 "Position resolved in world frame [m]", "vehicle.wheel_4.systemMass.frame_resolve.r_0[3]", 1,\
 5, 71465, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.w",\
 "Wheel rotational speed [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.alpha",\
 "Lateral slip angle [rad|deg]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.alphaMax",\
 "Slip angle for peak lateral effort [rad|deg]", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.effectiveRadius",\
 "Effective radius [m]", 0.0, 0.0,1E+100,0.0,0,521)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.fx",\
 "Wheel contact force in longitudinal direction [N]", "vehicle.wheel_4.forceApplication.resolveForcesAndTorques.f_1[1]", 1,\
 5, 72337, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.fy",\
 "Wheel contact force in lateral direction [N]", "vehicle.wheel_4.forceApplication.resolveForcesAndTorques.f_1[2]", 1,\
 5, 72338, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.fz",\
 "Wheel contact force in normal direction [N]", "vehicle.wheel_4.forceApplication.resolveForcesAndTorques.f_1[3]", 1,\
 5, 72339, 4)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.kappa",\
 "Longitudinal slip ratio", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.kappaMax",\
 "Slip ratio for peak tractive effort", 1.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.tx",\
 "Wheel contact torque in longitudinal direction [N.m]", "vehicle.wheel_4.forceApplication.resolveForcesAndTorques.t_1[1]", 1,\
 5, 72340, 4)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.ty",\
 "Wheel contact torque in lateral direction [N.m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.tz",\
 "Wheel contact torque in normal direction [N.m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareOutput("controlBus.brakesBus.wheelSpeed_1", "Individual wheel speed (wheel 1 = front left wheel) [rad/s]",\
 110, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.brakesBus.wheelSpeed_2", "Individual wheel speed (wheel 2 = front right wheel) [rad/s]",\
 111, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.brakesBus.wheelSpeed_3", "Individual wheel speed (wheel 3 = rear left wheel) [rad/s]",\
 112, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.brakesBus.wheelSpeed_4", "Individual wheel speed (wheel 4 = rear right wheel) [rad/s]",\
 113, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("vehicle.body.controlBus.brakesBus.wheelSpeed_1", "Individual wheel speed (wheel 1 = front left wheel) [rad/s]",\
 "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.body.controlBus.brakesBus.wheelSpeed_2", "Individual wheel speed (wheel 2 = front right wheel) [rad/s]",\
 "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.body.controlBus.brakesBus.wheelSpeed_3", "Individual wheel speed (wheel 3 = rear left wheel) [rad/s]",\
 "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.body.controlBus.brakesBus.wheelSpeed_4", "Individual wheel speed (wheel 4 = rear right wheel) [rad/s]",\
 "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.body.mass.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.body.mass.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.body.mass.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.body.mass.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.brakes.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.brakes.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.brakes.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.brakes.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.controlBus.brakesBus.wheelSpeed_1", "Individual wheel speed (wheel 1 = front left wheel) [rad/s]",\
 "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.controlBus.brakesBus.wheelSpeed_2", "Individual wheel speed (wheel 2 = front right wheel) [rad/s]",\
 "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.controlBus.brakesBus.wheelSpeed_3", "Individual wheel speed (wheel 3 = rear left wheel) [rad/s]",\
 "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.controlBus.brakesBus.wheelSpeed_4", "Individual wheel speed (wheel 4 = rear right wheel) [rad/s]",\
 "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.driveline.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.driveline.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.driveline.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.driveline.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.engine.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.engine.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.engine.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.engine.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.engineController.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.engineController.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.engineController.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.engineController.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.fead.controlBus.brakesBus.wheelSpeed_1", "Individual wheel speed (wheel 1 = front left wheel) [rad/s]",\
 "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.fead.controlBus.brakesBus.wheelSpeed_2", "Individual wheel speed (wheel 2 = front right wheel) [rad/s]",\
 "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.fead.controlBus.brakesBus.wheelSpeed_3", "Individual wheel speed (wheel 3 = rear left wheel) [rad/s]",\
 "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.fead.controlBus.brakesBus.wheelSpeed_4", "Individual wheel speed (wheel 4 = rear right wheel) [rad/s]",\
 "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.transmission.controlBus.brakesBus.wheelSpeed_1", \
"Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.transmission.controlBus.brakesBus.wheelSpeed_2", \
"Individual wheel speed (wheel 2 = front right wheel) [rad/s]", "vehicle.wheel_2.rim.mass.w", 1,\
 1, 33, 4)
DeclareAlias2("vehicle.transmission.controlBus.brakesBus.wheelSpeed_3", \
"Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.transmission.controlBus.brakesBus.wheelSpeed_4", \
"Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.brakesBus.wheelSpeed_1",\
 "Individual wheel speed (wheel 1 = front left wheel) [rad/s]", "vehicle.wheel_1.rim.mass.w", 1,\
 1, 29, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.brakesBus.wheelSpeed_2",\
 "Individual wheel speed (wheel 2 = front right wheel) [rad/s]", \
"vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.brakesBus.wheelSpeed_3",\
 "Individual wheel speed (wheel 3 = rear left wheel) [rad/s]", "vehicle.wheel_3.rim.mass.w", 1,\
 1, 35, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.brakesBus.wheelSpeed_4",\
 "Individual wheel speed (wheel 4 = rear right wheel) [rad/s]", "vehicle.wheel_4.rim.mass.w", 1,\
 1, 37, 4)
DeclareOutput("controlBus.chassisBus.lateralAcceleration", "Absolute acceleration vector [m/s2]",\
 114, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.chassisBus.longitudinalAcceleration", "[m/s2]", 115, \
0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.chassisBus.longitudinalVelocity", "Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]",\
 116, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.chassisBus.pitchAngle", "Pitch angle relative to the ground [rad|deg]",\
 117, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.chassisBus.rideHeight_1", "Ride height [m]", 118, 0.0,\
 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.chassisBus.rideHeight_2", "Ride height [m]", 119, 0.0,\
 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.chassisBus.rideHeight_3", "Ride height [m]", 120, 0.0,\
 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.chassisBus.rideHeight_4", "Ride height [m]", 121, 0.0,\
 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.chassisBus.rollAngle", "Roll angle relative to the ground [rad|deg]",\
 122, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.chassisBus.yawRate", "Yaw rate of vehicle [rad/s]", 123,\
 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.chassisBus.yawRate_G", "Yaw rate relative to the ground [rad/s]",\
 124, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("vehicle.body.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.body.controlBus.chassisBus.longitudinalAcceleration", \
"[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.body.controlBus.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.body.controlBus.chassisBus.pitchAngle", "Pitch angle relative to the ground [rad|deg]",\
 "controlBus.chassisBus.pitchAngle", 1, 3, 117, 4)
DeclareAlias2("vehicle.body.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.body.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.body.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.body.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.body.controlBus.chassisBus.rollAngle", "Roll angle relative to the ground [rad|deg]",\
 "controlBus.chassisBus.rollAngle", 1, 3, 122, 4)
DeclareAlias2("vehicle.body.controlBus.chassisBus.yawRate", "Yaw rate of vehicle [rad/s]",\
 "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082, 4)
DeclareAlias2("vehicle.body.controlBus.chassisBus.yawRate_G", "Yaw rate relative to the ground [rad/s]",\
 "controlBus.chassisBus.yawRate_G", 1, 3, 124, 4)
DeclareAlias2("vehicle.body.mass.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.body.mass.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.body.mass.controlBus.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.body.mass.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.body.mass.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.body.mass.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.body.mass.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.body.mass.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.body.mass.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.body.mass.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.body.mass.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.chassisBus.longitudinalVelocity",\
 "Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.body.sensors.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.brakes.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.brakes.controlBus.chassisBus.longitudinalAcceleration", \
"[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.brakes.controlBus.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.brakes.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.brakes.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.brakes.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.brakes.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.brakes.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.brakes.controlBus.chassisBus.rollAngle", "Roll angle relative to the ground [rad|deg]",\
 "controlBus.chassisBus.rollAngle", 1, 3, 122, 4)
DeclareAlias2("vehicle.brakes.controlBus.chassisBus.yawRate", "Yaw rate of vehicle [rad/s]",\
 "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082, 4)
DeclareAlias2("vehicle.brakes.controlBus.chassisBus.yawRate_G", "Yaw rate relative to the ground [rad/s]",\
 "controlBus.chassisBus.yawRate_G", 1, 3, 124, 4)
DeclareAlias2("vehicle.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.controlBus.chassisBus.longitudinalAcceleration", "[m/s2]",\
 "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.controlBus.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.controlBus.chassisBus.pitchAngle", "Pitch angle relative to the ground [rad|deg]",\
 "controlBus.chassisBus.pitchAngle", 1, 3, 117, 4)
DeclareAlias2("vehicle.controlBus.chassisBus.rideHeight_1", "Ride height [m]", \
"vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1, 5, 61869, 4)
DeclareAlias2("vehicle.controlBus.chassisBus.rideHeight_2", "Ride height [m]", \
"vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1, 5, 61961, 4)
DeclareAlias2("vehicle.controlBus.chassisBus.rideHeight_3", "Ride height [m]", \
"vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1, 5, 62053, 4)
DeclareAlias2("vehicle.controlBus.chassisBus.rideHeight_4", "Ride height [m]", \
"vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1, 5, 62145, 4)
DeclareAlias2("vehicle.controlBus.chassisBus.rollAngle", "Roll angle relative to the ground [rad|deg]",\
 "controlBus.chassisBus.rollAngle", 1, 3, 122, 4)
DeclareAlias2("vehicle.controlBus.chassisBus.yawRate", "Yaw rate of vehicle [rad/s]",\
 "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082, 4)
DeclareAlias2("vehicle.controlBus.chassisBus.yawRate_G", "Yaw rate relative to the ground [rad/s]",\
 "controlBus.chassisBus.yawRate_G", 1, 3, 124, 4)
DeclareAlias2("vehicle.driveline.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.driveline.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.driveline.controlBus.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.driveline.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.driveline.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.driveline.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.driveline.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.driveline.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.driveline.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.driveline.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.driveline.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.driverEnvironment.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 1028)
DeclareAlias2("vehicle.driverEnvironment.chassisBus.longitudinalAcceleration", \
"[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 1028)
DeclareAlias2("vehicle.driverEnvironment.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 1028)
DeclareAlias2("vehicle.driverEnvironment.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 1028)
DeclareAlias2("vehicle.driverEnvironment.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 1028)
DeclareAlias2("vehicle.driverEnvironment.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 1028)
DeclareAlias2("vehicle.driverEnvironment.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 1028)
DeclareAlias2("vehicle.driverEnvironment.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 1028)
DeclareAlias2("vehicle.driverEnvironment.chassisBus.rollAngle", "Roll angle relative to the ground [rad|deg]",\
 "controlBus.chassisBus.rollAngle", 1, 3, 122, 1028)
DeclareAlias2("vehicle.driverEnvironment.chassisBus.yawRate_G", "Yaw rate relative to the ground [rad/s]",\
 "controlBus.chassisBus.yawRate_G", 1, 3, 124, 1028)
DeclareAlias2("vehicle.driverEnvironment.controlBus.chassisBus.lateralAcceleration",\
 "Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.chassisBus.longitudinalVelocity",\
 "Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.engine.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.engine.controlBus.chassisBus.longitudinalAcceleration", \
"[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.engine.controlBus.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.engine.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.engine.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.engine.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.engine.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.engine.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.engine.controlBus.chassisBus.rollAngle", "Roll angle relative to the ground [rad|deg]",\
 "controlBus.chassisBus.rollAngle", 1, 3, 122, 4)
DeclareAlias2("vehicle.engine.controlBus.chassisBus.yawRate", "Yaw rate of vehicle [rad/s]",\
 "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082, 4)
DeclareAlias2("vehicle.engine.controlBus.chassisBus.yawRate_G", "Yaw rate relative to the ground [rad/s]",\
 "controlBus.chassisBus.yawRate_G", 1, 3, 124, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.chassisBus.lateralAcceleration",\
 "Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.chassisBus.longitudinalVelocity",\
 "Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.engineController.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 1028)
DeclareAlias2("vehicle.engineController.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 1028)
DeclareAlias2("vehicle.engineController.chassisBus.pitchAngle", "Pitch angle relative to the ground [rad|deg]",\
 "controlBus.chassisBus.pitchAngle", 1, 3, 117, 1028)
DeclareAlias2("vehicle.engineController.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 1028)
DeclareAlias2("vehicle.engineController.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 1028)
DeclareAlias2("vehicle.engineController.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 1028)
DeclareAlias2("vehicle.engineController.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 1028)
DeclareAlias2("vehicle.engineController.chassisBus.rollAngle", "Roll angle relative to the ground [rad|deg]",\
 "controlBus.chassisBus.rollAngle", 1, 3, 122, 1028)
DeclareAlias2("vehicle.engineController.chassisBus.yawRate", "Yaw rate of vehicle [rad/s]",\
 "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082, 1028)
DeclareAlias2("vehicle.engineController.chassisBus.yawRate_G", "Yaw rate relative to the ground [rad/s]",\
 "controlBus.chassisBus.yawRate_G", 1, 3, 124, 1028)
DeclareAlias2("vehicle.engineController.controlBus.chassisBus.lateralAcceleration",\
 "Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.engineController.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.engineController.controlBus.chassisBus.longitudinalVelocity",\
 "Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.engineController.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.engineController.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.engineController.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.engineController.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.engineController.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.engineController.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.engineController.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.engineController.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.chassisBus.lateralAcceleration",\
 "Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.chassisBus.longitudinalVelocity",\
 "Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.fead.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.fead.controlBus.chassisBus.longitudinalAcceleration", \
"[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.fead.controlBus.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.fead.controlBus.chassisBus.pitchAngle", "Pitch angle relative to the ground [rad|deg]",\
 "controlBus.chassisBus.pitchAngle", 1, 3, 117, 4)
DeclareAlias2("vehicle.fead.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.fead.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.fead.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.fead.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.fead.controlBus.chassisBus.rollAngle", "Roll angle relative to the ground [rad|deg]",\
 "controlBus.chassisBus.rollAngle", 1, 3, 122, 4)
DeclareAlias2("vehicle.fead.controlBus.chassisBus.yawRate", "Yaw rate of vehicle [rad/s]",\
 "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082, 4)
DeclareAlias2("vehicle.fead.controlBus.chassisBus.yawRate_G", "Yaw rate relative to the ground [rad/s]",\
 "controlBus.chassisBus.yawRate_G", 1, 3, 124, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.chassisBus.lateralAcceleration",\
 "Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.chassisBus.longitudinalVelocity",\
 "Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.chassisBus.rideHeight_1",\
 "Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.chassisBus.rideHeight_2",\
 "Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.chassisBus.rideHeight_3",\
 "Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.chassisBus.rideHeight_4",\
 "Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.frontAxle.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.chassisBus.yawRate", "Yaw rate of vehicle [rad/s]",\
 "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.chassisBus.lateralAcceleration",\
 "Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.chassisBus.longitudinalVelocity",\
 "Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.chassisBus.lateralAcceleration",\
 "Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.chassisBus.longitudinalVelocity",\
 "Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.chassisBus.longitudinalVelocity", \
"Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.chassisBus.yawRate", "Yaw rate of vehicle [rad/s]",\
 "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.transmission.controlBus.chassisBus.lateralAcceleration", \
"Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.transmission.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.transmission.controlBus.chassisBus.longitudinalVelocity",\
 "Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.transmission.controlBus.chassisBus.pitchAngle", \
"Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.transmission.controlBus.chassisBus.rideHeight_1", \
"Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.transmission.controlBus.chassisBus.rideHeight_2", \
"Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.transmission.controlBus.chassisBus.rideHeight_3", \
"Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.transmission.controlBus.chassisBus.rideHeight_4", \
"Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.transmission.controlBus.chassisBus.rollAngle", \
"Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.transmission.controlBus.chassisBus.yawRate", \
"Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.transmission.controlBus.chassisBus.yawRate_G", \
"Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.chassisBus.lateralAcceleration",\
 "Absolute acceleration vector [m/s2]", "controlBus.chassisBus.lateralAcceleration", 1,\
 3, 114, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.chassisBus.longitudinalAcceleration",\
 "[m/s2]", "controlBus.chassisBus.longitudinalAcceleration", 1, 3, 115, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.chassisBus.longitudinalVelocity",\
 "Absolute velocity vector resolved in frame defined by resolveInFrame [m/s]", \
"controlBus.chassisBus.longitudinalVelocity", 1, 3, 116, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.chassisBus.pitchAngle",\
 "Pitch angle relative to the ground [rad|deg]", "controlBus.chassisBus.pitchAngle", 1,\
 3, 117, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.chassisBus.rideHeight_1",\
 "Ride height [m]", "vehicle.body.sensors.rideHeight1.groundCoordinates.swz[3]", 1,\
 5, 61869, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.chassisBus.rideHeight_2",\
 "Ride height [m]", "vehicle.body.sensors.rideHeight2.groundCoordinates.swz[3]", 1,\
 5, 61961, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.chassisBus.rideHeight_3",\
 "Ride height [m]", "vehicle.body.sensors.rideHeight3.groundCoordinates.swz[3]", 1,\
 5, 62053, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.chassisBus.rideHeight_4",\
 "Ride height [m]", "vehicle.body.sensors.rideHeight4.groundCoordinates.swz[3]", 1,\
 5, 62145, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.chassisBus.rollAngle",\
 "Roll angle relative to the ground [rad|deg]", "controlBus.chassisBus.rollAngle", 1,\
 3, 122, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.chassisBus.yawRate",\
 "Yaw rate of vehicle [rad/s]", "vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082,\
 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.chassisBus.yawRate_G",\
 "Yaw rate relative to the ground [rad/s]", "controlBus.chassisBus.yawRate_G", 1,\
 3, 124, 4)
DeclareOutput("controlBus.driverBus.acceleratorPedalPosition", "Real accelerator pedal position (m) [m]",\
 125, 0.0, 0.0,0.0,0.0,0,521)
DeclareOutput("controlBus.driverBus.brakePedalPosition", "Brake pedal position (0=fully released ... 1=fully pressed) [1|1]",\
 126, 0.0, 0.0,1.0,0.0,0,521)
DeclareOutput("controlBus.driverBus.handbrakeDemand", "Normalised handbrake demand (0-1)",\
 127, 0.0, 0.0,0.0,0.0,0,521)
DeclareOutput("controlBus.driverBus.ignition", "Ignition from driver (Off, on and start) [:#(type=Integer)]",\
 128, 1, 0.0,0.0,0.0,0,525)
DeclareOutput("controlBus.driverBus.steeringWheelAngle", "Steering angle in rad [rad]",\
 129, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.driverBus.steeringWheelTorque", "Steering torque in N.m [N.m]",\
 130, 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("vehicle.body.controlBus.driverBus.acceleratorPedalPosition", \
"Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.body.controlBus.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.controlBus.driverBus.ignition", "Ignition from driver (Off, on and start) [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.body.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.body.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.body.mass.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.mass.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.body.mass.controlBus.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.mass.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.body.mass.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.body.mass.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.body.sensors.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.sensors.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.body.sensors.controlBus.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.sensors.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.body.sensors.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.brakes.controlBus.driverBus.acceleratorPedalPosition", \
"Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.brakes.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.brakes.controlBus.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.brakes.controlBus.driverBus.ignition", "Ignition from driver (Off, on and start) [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.brakes.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.brakes.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.controlBus.driverBus.acceleratorPedalPosition", \
"Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.controlBus.driverBus.handbrakeDemand", "Normalised handbrake demand (0-1)",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.controlBus.driverBus.ignition", "Ignition from driver (Off, on and start) [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.driveline.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driveline.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.driveline.controlBus.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driveline.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.driveline.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.driveline.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.driverEnvironment.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driverEnvironment.controlBus.driverBus.brakePedalPosition",\
 "Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.driverEnvironment.controlBus.driverBus.handbrakeDemand",\
 "Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driverEnvironment.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.driverEnvironment.controlBus.driverBus.steeringWheelAngle",\
 "Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.driverBus.steeringWheelTorque",\
 "Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.engine.controlBus.driverBus.acceleratorPedalPosition", \
"Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.engine.controlBus.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.controlBus.driverBus.ignition", "Ignition from driver (Off, on and start) [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.engine.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.engine.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.engine.starterMotor.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.starterMotor.controlBus.driverBus.brakePedalPosition",\
 "Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.engine.starterMotor.controlBus.driverBus.handbrakeDemand",\
 "Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.starterMotor.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.driverBus.steeringWheelAngle",\
 "Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.driverBus.steeringWheelTorque",\
 "Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.engineController.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineController.controlBus.driverBus.brakePedalPosition",\
 "Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.engineController.controlBus.driverBus.handbrakeDemand",\
 "Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineController.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.engineController.controlBus.driverBus.steeringWheelAngle",\
 "Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.engineController.controlBus.driverBus.steeringWheelTorque",\
 "Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.engineController.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,2569)
DeclareVariable("vehicle.engineController.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,2569)
DeclareAlias2("vehicle.engineController.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 1028)
DeclareAlias2("vehicle.engineController.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 1028)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.driverBus.brakePedalPosition",\
 "Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.driverBus.handbrakeDemand",\
 "Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.driverBus.steeringWheelAngle",\
 "Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.driverBus.steeringWheelTorque",\
 "Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.fead.controlBus.driverBus.acceleratorPedalPosition", \
"Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fead.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.fead.controlBus.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fead.controlBus.driverBus.ignition", "Ignition from driver (Off, on and start) [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.fead.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.fead.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.driverBus.brakePedalPosition",\
 "Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.driverBus.handbrakeDemand",\
 "Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.driverBus.steeringWheelAngle",\
 "Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.driverBus.steeringWheelTorque",\
 "Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.frontAxle.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.controlBus.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.frontAxle.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.fuelTank.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fuelTank.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.fuelTank.controlBus.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fuelTank.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.fuelTank.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.lubricationCircuit.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.lubricationCircuit.controlBus.driverBus.brakePedalPosition",\
 "Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.lubricationCircuit.controlBus.driverBus.handbrakeDemand",\
 "Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.lubricationCircuit.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.driverBus.steeringWheelAngle",\
 "Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.driverBus.steeringWheelTorque",\
 "Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.driverBus.brakePedalPosition",\
 "Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.driverBus.handbrakeDemand",\
 "Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.driverBus.steeringWheelAngle",\
 "Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.driverBus.steeringWheelTorque",\
 "Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.rearAxle.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.controlBus.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.rearAxle.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.transmission.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.driverBus.brakePedalPosition", \
"Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.driverBus.handbrakeDemand", \
"Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.driverBus.ignition", \
"Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.transmission.controlBus.driverBus.steeringWheelAngle", \
"Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.transmission.controlBus.driverBus.steeringWheelTorque", \
"Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.driverBus.acceleratorPedalPosition",\
 "Real accelerator pedal position (m) [m]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.driverBus.brakePedalPosition",\
 "Brake pedal position (0=fully released ... 1=fully pressed) [1|1]", 0.0, 0.0,\
1.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.driverBus.handbrakeDemand",\
 "Normalised handbrake demand (0-1)", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.driverBus.ignition",\
 "Ignition from driver (Off, on and start) [:#(type=Integer)]", 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.driverBus.steeringWheelAngle",\
 "Steering angle in rad [rad]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.driverBus.steeringWheelTorque",\
 "Steering torque in N.m [N.m]", "controlBus.driverBus.steeringWheelTorque", 1, 3,\
 130, 4)
DeclareOutput("controlBus.engineBus.coolantTemperature", "Temperature of cooling system [K]",\
 131, 363.15, 0.0,0.0,0.0,0,521)
DeclareOutput("controlBus.engineBus.power", "Transmission flange power from engine [W]",\
 132, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.engineBus.speed", "Connector of Real input signal [rad/s]",\
 133, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 134, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.engineBus.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 135, 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.body.controlBus.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 4)
DeclareAlias2("vehicle.body.controlBus.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareAlias2("vehicle.body.controlBus.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 4)
DeclareAlias2("vehicle.body.controlBus.engineBus.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 4)
DeclareVariable("vehicle.body.mass.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.body.mass.controlBus.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 4)
DeclareAlias2("vehicle.body.mass.controlBus.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareAlias2("vehicle.body.mass.controlBus.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 4)
DeclareAlias2("vehicle.body.mass.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareVariable("vehicle.body.sensors.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.body.sensors.controlBus.engineBus.power", \
"Transmission flange power from engine [W]", "controlBus.engineBus.power", 1, 3,\
 132, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.engineBus.speed", \
"Connector of Real input signal [rad/s]", "vehicle.engine.flywheel.rotatingBody.w", 1,\
 1, 53, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.engineBus.torque", \
"Transmission flange torque from engine [N.m]", "controlBus.engineBus.torque", 1,\
 3, 134, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareVariable("vehicle.brakes.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.brakes.controlBus.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 4)
DeclareAlias2("vehicle.brakes.controlBus.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareAlias2("vehicle.brakes.controlBus.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 4)
DeclareAlias2("vehicle.brakes.controlBus.engineBus.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 4)
DeclareVariable("vehicle.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.controlBus.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 4)
DeclareAlias2("vehicle.controlBus.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareAlias2("vehicle.controlBus.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 4)
DeclareAlias2("vehicle.controlBus.engineBus.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 4)
DeclareVariable("vehicle.driveline.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.driveline.controlBus.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 4)
DeclareAlias2("vehicle.driveline.controlBus.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareAlias2("vehicle.driveline.controlBus.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 4)
DeclareAlias2("vehicle.driveline.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareVariable("vehicle.driverEnvironment.controlBus.engineBus.coolantTemperature",\
 "Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.driverEnvironment.controlBus.engineBus.power", \
"Transmission flange power from engine [W]", "controlBus.engineBus.power", 1, 3,\
 132, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.engineBus.speed", \
"Connector of Real input signal [rad/s]", "vehicle.engine.flywheel.rotatingBody.w", 1,\
 1, 53, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.engineBus.torque", \
"Transmission flange torque from engine [N.m]", "controlBus.engineBus.torque", 1,\
 3, 134, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareVariable("vehicle.driverEnvironment.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,2569)
DeclareAlias2("vehicle.driverEnvironment.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 1028)
DeclareAlias2("vehicle.driverEnvironment.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 1028)
DeclareVariable("vehicle.engine.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.engine.controlBus.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 4)
DeclareAlias2("vehicle.engine.controlBus.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareAlias2("vehicle.engine.controlBus.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 4)
DeclareAlias2("vehicle.engine.controlBus.engineBus.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 4)
DeclareVariable("vehicle.engine.engineBus.coolantTemperature", "Temperature of cooling system [K]",\
 363.15, 0.0,0.0,0.0,0,2569)
DeclareAlias2("vehicle.engine.engineBus.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 1028)
DeclareVariable("vehicle.engine.starterMotor.controlBus.engineBus.coolantTemperature",\
 "Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.engineBus.power", \
"Transmission flange power from engine [W]", "controlBus.engineBus.power", 1, 3,\
 132, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.engineBus.speed", \
"Connector of Real input signal [rad/s]", "vehicle.engine.flywheel.rotatingBody.w", 1,\
 1, 53, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.engineBus.torque", \
"Transmission flange torque from engine [N.m]", "controlBus.engineBus.torque", 1,\
 3, 134, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareVariable("vehicle.engineController.controlBus.engineBus.coolantTemperature",\
 "Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.engineController.controlBus.engineBus.power", \
"Transmission flange power from engine [W]", "controlBus.engineBus.power", 1, 3,\
 132, 4)
DeclareAlias2("vehicle.engineController.controlBus.engineBus.speed", \
"Connector of Real input signal [rad/s]", "vehicle.engine.flywheel.rotatingBody.w", 1,\
 1, 53, 4)
DeclareAlias2("vehicle.engineController.controlBus.engineBus.torque", \
"Transmission flange torque from engine [N.m]", "controlBus.engineBus.torque", 1,\
 3, 134, 4)
DeclareAlias2("vehicle.engineController.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareAlias2("vehicle.engineController.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 1028)
DeclareAlias2("vehicle.engineController.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 1028)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.engineBus.coolantTemperature",\
 "Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.engineBus.power", \
"Transmission flange power from engine [W]", "controlBus.engineBus.power", 1, 3,\
 132, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.engineBus.speed", \
"Connector of Real input signal [rad/s]", "vehicle.engine.flywheel.rotatingBody.w", 1,\
 1, 53, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.engineBus.torque", \
"Transmission flange torque from engine [N.m]", "controlBus.engineBus.torque", 1,\
 3, 134, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareAlias2("vehicle.engineCoolantSystem.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 1028)
DeclareAlias2("vehicle.engineCoolantSystem.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 1028)
DeclareAlias2("vehicle.engineCoolantSystem.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 1028)
DeclareAlias2("vehicle.engineCoolantSystem.engineBus.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 1028)
DeclareVariable("vehicle.fead.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.fead.controlBus.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 4)
DeclareAlias2("vehicle.fead.controlBus.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareAlias2("vehicle.fead.controlBus.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 4)
DeclareAlias2("vehicle.fead.controlBus.engineBus.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 4)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.engineBus.coolantTemperature",\
 "Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.engineBus.power", \
"Transmission flange power from engine [W]", "controlBus.engineBus.power", 1, 3,\
 132, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.engineBus.speed", \
"Connector of Real input signal [rad/s]", "vehicle.engine.flywheel.rotatingBody.w", 1,\
 1, 53, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.engineBus.torque", \
"Transmission flange torque from engine [N.m]", "controlBus.engineBus.torque", 1,\
 3, 134, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareVariable("vehicle.frontAxle.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.frontAxle.controlBus.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareVariable("vehicle.fuelTank.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.fuelTank.controlBus.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.engineBus.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 4)
DeclareVariable("vehicle.lubricationCircuit.controlBus.engineBus.coolantTemperature",\
 "Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.engineBus.power", \
"Transmission flange power from engine [W]", "controlBus.engineBus.power", 1, 3,\
 132, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.engineBus.speed", \
"Connector of Real input signal [rad/s]", "vehicle.engine.flywheel.rotatingBody.w", 1,\
 1, 53, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.engineBus.torque", \
"Transmission flange torque from engine [N.m]", "controlBus.engineBus.torque", 1,\
 3, 134, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareVariable("vehicle.lubricationCircuit.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,2569)
DeclareAlias2("vehicle.lubricationCircuit.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 1028)
DeclareAlias2("vehicle.lubricationCircuit.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 1028)
DeclareAlias2("vehicle.lubricationCircuit.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 1028)
DeclareAlias2("vehicle.lubricationCircuit.engineBus.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 1028)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.engineBus.coolantTemperature",\
 "Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.engineBus.power", \
"Transmission flange power from engine [W]", "controlBus.engineBus.power", 1, 3,\
 132, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.engineBus.speed", \
"Connector of Real input signal [rad/s]", "vehicle.engine.flywheel.rotatingBody.w", 1,\
 1, 53, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.engineBus.torque", \
"Transmission flange torque from engine [N.m]", "controlBus.engineBus.torque", 1,\
 3, 134, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareVariable("vehicle.rearAxle.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.rearAxle.controlBus.engineBus.power", "Transmission flange power from engine [W]",\
 "controlBus.engineBus.power", 1, 3, 132, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.engineBus.speed", "Connector of Real input signal [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.engineBus.torque", "Transmission flange torque from engine [N.m]",\
 "controlBus.engineBus.torque", 1, 3, 134, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.engineBus.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 4)
DeclareVariable("vehicle.transmission.controlBus.engineBus.coolantTemperature", \
"Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.transmission.controlBus.engineBus.power", \
"Transmission flange power from engine [W]", "controlBus.engineBus.power", 1, 3,\
 132, 4)
DeclareAlias2("vehicle.transmission.controlBus.engineBus.speed", \
"Connector of Real input signal [rad/s]", "vehicle.engine.flywheel.rotatingBody.w", 1,\
 1, 53, 4)
DeclareAlias2("vehicle.transmission.controlBus.engineBus.torque", \
"Transmission flange torque from engine [N.m]", "controlBus.engineBus.torque", 1,\
 3, 134, 4)
DeclareAlias2("vehicle.transmission.controlBus.engineBus.wRedLine", \
"Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.engineBus.coolantTemperature",\
 "Temperature of cooling system [K]", 363.15, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.engineBus.power", \
"Transmission flange power from engine [W]", "controlBus.engineBus.power", 1, 3,\
 132, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.engineBus.speed", \
"Connector of Real input signal [rad/s]", "vehicle.engine.flywheel.rotatingBody.w", 1,\
 1, 53, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.engineBus.torque",\
 "Transmission flange torque from engine [N.m]", "controlBus.engineBus.torque", 1,\
 3, 134, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.engineBus.wRedLine",\
 "Engine Red Line in rev/min [rev/min]", "vehicle.engineController.revLimiter.redLineSource.k", 1,\
 5, 83003, 4)
DeclareOutput("controlBus.engineControlBus.engineStart", "True if ignition is in start [:#(type=Boolean)]",\
 136, false, 0.0,0.0,0.0,0,523)
DeclareOutput("controlBus.engineControlBus.fuelCutOffReal", "", 137, 0.0, \
0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.engineControlBus.ignitionOn", "True if ignition is not off [:#(type=Boolean)]",\
 138, false, 0.0,0.0,0.0,0,523)
DeclareOutput("controlBus.engineControlBus.throttleAngle_1", "", 139, 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("vehicle.body.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.body.controlBus.engineControlBus.fuelCutOffReal", "", \
"controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.body.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.body.controlBus.engineControlBus.throttleAngle_1", "", \
"vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1, 76,\
 4)
DeclareVariable("vehicle.body.mass.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.body.mass.controlBus.engineControlBus.fuelCutOffReal", "",\
 "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.body.mass.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.body.mass.controlBus.engineControlBus.throttleAngle_1", \
"", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareVariable("vehicle.body.sensors.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.body.sensors.controlBus.engineControlBus.fuelCutOffReal",\
 "", "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.body.sensors.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.body.sensors.controlBus.engineControlBus.throttleAngle_1",\
 "", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareVariable("vehicle.brakes.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.brakes.controlBus.engineControlBus.fuelCutOffReal", "", \
"controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.brakes.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.brakes.controlBus.engineControlBus.throttleAngle_1", "", \
"vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1, 76,\
 4)
DeclareVariable("vehicle.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.controlBus.engineControlBus.fuelCutOffReal", "", \
"controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.controlBus.engineControlBus.throttleAngle_1", "", \
"vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1, 76,\
 4)
DeclareVariable("vehicle.driveline.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.driveline.controlBus.engineControlBus.fuelCutOffReal", "",\
 "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.driveline.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.driveline.controlBus.engineControlBus.throttleAngle_1", \
"", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareVariable("vehicle.driverEnvironment.controlBus.engineControlBus.engineStart",\
 "True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.driverEnvironment.controlBus.engineControlBus.fuelCutOffReal",\
 "", "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.driverEnvironment.controlBus.engineControlBus.ignitionOn",\
 "True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.driverEnvironment.controlBus.engineControlBus.throttleAngle_1",\
 "", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareVariable("vehicle.engine.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.engine.controlBus.engineControlBus.fuelCutOffReal", "", \
"controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.engine.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.engine.controlBus.engineControlBus.throttleAngle_1", "", \
"vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1, 76,\
 4)
DeclareVariable("vehicle.engine.engineControlBus.engineStart", "True if ignition is in start [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2571)
DeclareVariable("vehicle.engine.starterMotor.controlBus.engineControlBus.engineStart",\
 "True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.engineControlBus.fuelCutOffReal",\
 "", "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.engine.starterMotor.controlBus.engineControlBus.ignitionOn",\
 "True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.engineControlBus.throttleAngle_1",\
 "", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareAlias2("vehicle.engine.starterMotor.engineControlBus.fuelCutOffReal", "",\
 "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 1028)
DeclareVariable("vehicle.engine.starterMotor.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2571)
DeclareAlias2("vehicle.engine.starterMotor.engineControlBus.throttleAngle_1", "",\
 "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1, 76,\
 1028)
DeclareVariable("vehicle.engineController.controlBus.engineControlBus.engineStart",\
 "True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.engineController.controlBus.engineControlBus.fuelCutOffReal",\
 "", "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.engineController.controlBus.engineControlBus.ignitionOn",\
 "True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.engineController.controlBus.engineControlBus.throttleAngle_1",\
 "", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.engineControlBus.engineStart",\
 "True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.engineControlBus.fuelCutOffReal",\
 "", "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.engineControlBus.ignitionOn",\
 "True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.engineControlBus.throttleAngle_1",\
 "", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareVariable("vehicle.fead.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.fead.controlBus.engineControlBus.fuelCutOffReal", "", \
"controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.fead.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.fead.controlBus.engineControlBus.throttleAngle_1", "", \
"vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1, 76,\
 4)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.engineControlBus.engineStart",\
 "True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.engineControlBus.fuelCutOffReal",\
 "", "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.engineControlBus.ignitionOn",\
 "True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.engineControlBus.throttleAngle_1",\
 "", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareVariable("vehicle.frontAxle.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.frontAxle.controlBus.engineControlBus.fuelCutOffReal", "",\
 "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.frontAxle.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.frontAxle.controlBus.engineControlBus.throttleAngle_1", \
"", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareVariable("vehicle.fuelTank.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.fuelTank.controlBus.engineControlBus.fuelCutOffReal", "",\
 "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.fuelTank.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.fuelTank.controlBus.engineControlBus.throttleAngle_1", "",\
 "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1, 76,\
 4)
DeclareVariable("vehicle.lubricationCircuit.controlBus.engineControlBus.engineStart",\
 "True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.engineControlBus.fuelCutOffReal",\
 "", "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.lubricationCircuit.controlBus.engineControlBus.ignitionOn",\
 "True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.engineControlBus.throttleAngle_1",\
 "", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.engineControlBus.engineStart",\
 "True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.engineControlBus.fuelCutOffReal",\
 "", "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.engineControlBus.ignitionOn",\
 "True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.engineControlBus.throttleAngle_1",\
 "", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareVariable("vehicle.rearAxle.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.rearAxle.controlBus.engineControlBus.fuelCutOffReal", "",\
 "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.rearAxle.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.rearAxle.controlBus.engineControlBus.throttleAngle_1", "",\
 "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1, 76,\
 4)
DeclareVariable("vehicle.transmission.controlBus.engineControlBus.engineStart", \
"True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.transmission.controlBus.engineControlBus.fuelCutOffReal",\
 "", "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.transmission.controlBus.engineControlBus.ignitionOn", \
"True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.transmission.controlBus.engineControlBus.throttleAngle_1",\
 "", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.engineControlBus.engineStart",\
 "True if ignition is in start [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.engineControlBus.fuelCutOffReal",\
 "", "controlBus.engineControlBus.fuelCutOffReal", 1, 3, 137, 4)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.engineControlBus.ignitionOn",\
 "True if ignition is not off [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,523)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.engineControlBus.throttleAngle_1",\
 "", "vehicle.engineController.throttleDemand.throttleFilter.firstOrder.y", 1, 1,\
 76, 4)
DeclareOutput("controlBus.frontSuspensionBus.arbTorque", "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 140, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.frontSuspensionBus.steeredAngle", "Absolute angle of flange as output signal [rad|deg]",\
 141, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("frontSensors.suspensionBus.arbTorque", "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("frontSensors.suspensionBus.steeredAngle", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.driverEnvironment.steeringConverter.position.phi", 1, 1, 2, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.steeredAngle", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.frontSuspensionBus.arbTorque", 1, 3, 140, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.steeredAngle",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.driverEnvironment.steeringConverter.position.phi", 1,\
 1, 2, 4)
DeclareOutput("controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", \
"Length between frame_a and frame_b [m]", 142, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 143, 0, 0.0,0.0,0.0,0,520)
DeclareAlias2("frontSensors.sensorPack_L.quarterCarBus.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("frontSensors.sensorPack_L.quarterCarBus.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("frontSensors.suspensionBus.quarterCarBus_L.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("frontSensors.suspensionBus.quarterCarBus_L.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_L.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_L.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_L.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_L.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_L.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_L.mechanicalTrail", \
"Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_L.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_L.scrubRadius", \
"Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_L.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_L.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArm.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArm.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArm.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArm.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArm.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArm.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArm.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArm.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.quarterCarBus.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.quarterCarBus.kingpinInclination", \
"Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.quarterCarBus.mechanicalTrail", \
"Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.quarterCarBus.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.quarterCarBus.scrubRadius", \
"Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.rockerPushrod.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.rockerPushrod.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.rockerPushrod.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.rockerPushrod.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.rockerPushrod.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.rockerPushrod.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.rockerPushrod.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.trackrod.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.trackrod.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.trackrod.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.trackrod.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.trackrod.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.trackrod.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.trackrod.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.trackrod.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArm.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArm.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArm.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArm.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArm.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArm.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArm.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArm.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArmMounts.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArmMounts.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArmMounts.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArmMounts.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArmMounts.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArmMounts.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArmMounts.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upperControlArmMounts.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.outerJoints.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.outerJoints.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.outerJoints.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.outerJoints.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.outerJoints.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.outerJoints.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.outerJoints.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.outerJoints.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.upright.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.upright.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.upright.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.upright.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.upright.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.upright.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.upright.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.leftLinkage.upright.upright.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 1, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 2, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 142, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 3, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 4, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 143, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 5, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 6, 4)
DeclareOutput("controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", \
"Length between frame_a and frame_b [m]", 144, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 145, 0, 0.0,0.0,0.0,0,520)
DeclareAlias2("frontSensors.sensorPack_R.quarterCarBus.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("frontSensors.sensorPack_R.quarterCarBus.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("frontSensors.suspensionBus.quarterCarBus_R.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("frontSensors.suspensionBus.quarterCarBus_R.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.body.controlBus.frontSuspensionBus.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.body.mass.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.brakes.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_R.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_R.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.controlBus.frontSuspensionBus.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.driveline.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.engine.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.engineController.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.fead.controlBus.frontSuspensionBus.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_R.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_R.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_R.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_R.mechanicalTrail", \
"Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_R.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_R.scrubRadius", \
"Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.busControl.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.busControl.suspensionBus.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_R.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_R.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 1028)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.inboardSuspension.suspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArm.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArm.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArm.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArm.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArm.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArm.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArm.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArm.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.quarterCarBus.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.quarterCarBus.mechanicalTrail", \
"Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.quarterCarBus.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.quarterCarBus.scrubRadius", \
"Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.rockerPushrod.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.rockerPushrod.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.rockerPushrod.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.rockerPushrod.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.rockerPushrod.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.rockerPushrod.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.rockerPushrod.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.trackrod.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.trackrod.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.trackrod.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.trackrod.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.trackrod.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.trackrod.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.trackrod.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.trackrod.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArm.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArm.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArm.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArm.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArm.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArm.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArm.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArm.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArmMounts.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArmMounts.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArmMounts.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArmMounts.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArmMounts.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArmMounts.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArmMounts.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upperControlArmMounts.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.outerJoints.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.outerJoints.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.outerJoints.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.outerJoints.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.outerJoints.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.outerJoints.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.outerJoints.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.outerJoints.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.upright.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.upright.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.upright.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.upright.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.upright.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.upright.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.upright.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.rightLinkage.upright.upright.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.frontAxle.steering.suspensionBus.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.transmission.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 7, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 8, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 144, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 9, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 10, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.frontSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 145, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.frontSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 11, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.frontSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.frontSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 12, 4)
DeclareOutput("controlBus.fuelTankBus.fuelLevel", "Connector of Real output signal",\
 146, 1.0, 0.0,0.0,0.0,0,521)
DeclareOutput("controlBus.fuelTankBus.noFuel", "Connector of Real output signal",\
 147, 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.controlBus.fuelTankBus.noFuel", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.mass.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.mass.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.sensors.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.sensors.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.brakes.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.brakes.controlBus.fuelTankBus.noFuel", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.controlBus.fuelTankBus.fuelLevel", "Connector of Real output signal",\
 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.controlBus.fuelTankBus.noFuel", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driveline.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driveline.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driverEnvironment.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driverEnvironment.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.controlBus.fuelTankBus.noFuel", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.fuelTankBus.fuelLevel", "Connector of Real output signal",\
 1.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("vehicle.engine.starterMotor.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.starterMotor.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineController.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineController.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fead.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fead.controlBus.fuelTankBus.noFuel", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.fuelTankBus.fuelLevel",\
 "Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fuelTank.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fuelTank.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.lubricationCircuit.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.lubricationCircuit.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.fuelTankBus.fuelLevel", \
"Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.fuelTankBus.noFuel", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.fuelTankBus.fuelLevel",\
 "Connector of Real output signal", 1.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.fuelTankBus.noFuel",\
 "Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,521)
DeclareOutput("controlBus.rearSuspensionBus.arbTorque", "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 148, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("rearSensors.suspensionBus.arbTorque", "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.arbTorque", "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.arbTorque", \
"Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.arbTorque",\
 "Torque in flange flange_a and flange_b (tau = flange_a.tau = -flange_b.tau) as output signal [N.m]",\
 "controlBus.rearSuspensionBus.arbTorque", 1, 3, 148, 4)
DeclareOutput("controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", \
"Length between frame_a and frame_b [m]", 149, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 150, 0, 0.0,0.0,0.0,0,520)
DeclareAlias2("rearSensors.sensorPack_L.quarterCarBus.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("rearSensors.sensorPack_L.quarterCarBus.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("rearSensors.suspensionBus.quarterCarBus_L.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("rearSensors.suspensionBus.quarterCarBus_L.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_L.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_L.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_L.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_L.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_L.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_L.kingpinInclination", \
"Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_L.mechanicalTrail", \
"Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_L.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_L.scrubRadius", \
"Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_L.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_L.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_L.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_L.scrubRadius", \
"Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_L.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArm.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArm.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArm.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArm.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArm.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArm.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArm.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArm.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.lowerControlArmMounts.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.quarterCarBus.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.quarterCarBus.kingpinInclination", \
"Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.quarterCarBus.mechanicalTrail", \
"Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.quarterCarBus.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.quarterCarBus.scrubRadius", \
"Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.quarterCarBus.toe", "Toe angle [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3, 18, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.rockerPushrod.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.rockerPushrod.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.rockerPushrod.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.rockerPushrod.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.rockerPushrod.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.rockerPushrod.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.rockerPushrod.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.trackrod.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.trackrod.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.trackrod.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.trackrod.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.trackrod.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.trackrod.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.trackrod.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.trackrod.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArm.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArm.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArm.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArm.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArm.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArm.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArm.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArm.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArmMounts.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArmMounts.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArmMounts.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArmMounts.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArmMounts.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArmMounts.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArmMounts.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upperControlArmMounts.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.outerJoints.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.outerJoints.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.outerJoints.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.outerJoints.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.outerJoints.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.outerJoints.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.outerJoints.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.outerJoints.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.quarterCarBus.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.quarterCarBus.scrubRadius", \
"Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.upright.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.upright.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.upright.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.upright.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.upright.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.upright.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.upright.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.rearAxle.leftLinkage.upright.upright.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_L.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.camber", 1,\
 3, 13, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_L.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.caster", 1,\
 3, 14, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_L.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.damperLength", 1,\
 3, 149, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.kingpinInclination", 1,\
 3, 15, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.mechanicalTrail", 1,\
 3, 16, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_L.rockerAngle", 1, 3, 150, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_L.scrubRadius", 1,\
 3, 17, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_L.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_L.toe", 1, 3,\
 18, 4)
DeclareOutput("controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", \
"Length between frame_a and frame_b [m]", 151, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 152, 0, 0.0,0.0,0.0,0,520)
DeclareAlias2("rearSensors.sensorPack_R.quarterCarBus.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("rearSensors.sensorPack_R.quarterCarBus.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("rearSensors.suspensionBus.quarterCarBus_R.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("rearSensors.suspensionBus.quarterCarBus_R.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.body.controlBus.rearSuspensionBus.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.body.mass.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.brakes.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_R.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_R.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.controlBus.rearSuspensionBus.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.driveline.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.engine.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.engineController.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.fead.controlBus.rearSuspensionBus.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_R.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_R.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_R.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_R.kingpinInclination", \
"Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_R.mechanicalTrail", \
"Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_R.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_R.scrubRadius", \
"Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.busControl.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.busControl.suspensionBus.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.springDamperWithDisconnect.suspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
EndNonAlias(80)
PreNonAliasNew(81)
StartNonAlias(81)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.antiRoll.suspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_R.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_R.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_R.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_R.scrubRadius", \
"Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.quarterCarBus_R.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 1028)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.inboardSuspension.suspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArm.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArm.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArm.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArm.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArm.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArm.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArm.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArm.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.lowerControlArmMounts.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.quarterCarBus.damperLength", \
"Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.quarterCarBus.kingpinInclination", \
"Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.quarterCarBus.mechanicalTrail", \
"Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.quarterCarBus.rockerAngle", \
"Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.quarterCarBus.scrubRadius", \
"Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.rockerPushrod.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.rockerPushrod.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.rockerPushrod.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.rockerPushrod.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.rockerPushrod.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.rockerPushrod.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.rockerPushrod.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.trackrod.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.trackrod.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.trackrod.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.trackrod.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.trackrod.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.trackrod.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.trackrod.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.trackrod.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArm.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArm.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArm.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArm.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArm.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArm.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArm.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArm.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArmMounts.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArmMounts.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArmMounts.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArmMounts.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArmMounts.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArmMounts.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArmMounts.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upperControlArmMounts.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.outerJoints.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.outerJoints.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.outerJoints.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.outerJoints.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.outerJoints.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.outerJoints.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.outerJoints.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.outerJoints.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.quarterCarBus.camber", \
"Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.quarterCarBus.caster", \
"Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.quarterCarBus.toe", \
"Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.upright.quarterCarBus.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.upright.quarterCarBus.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.upright.quarterCarBus.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.upright.quarterCarBus.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.upright.quarterCarBus.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.upright.quarterCarBus.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.upright.quarterCarBus.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.rearAxle.rightLinkage.upright.upright.quarterCarBus.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.transmission.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_R.camber",\
 "Camber angle relative to the ground [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.camber", 1,\
 3, 19, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_R.caster",\
 "Caster angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.caster", 1,\
 3, 20, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_R.damperLength",\
 "Length between frame_a and frame_b [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.damperLength", 1,\
 3, 151, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination",\
 "Kingpin inclination angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.kingpinInclination", 1,\
 3, 21, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail",\
 "Mechanical trail [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.mechanicalTrail", 1,\
 3, 22, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle",\
 "Relative angle between two flanges (= flange_b.phi - flange_a.phi) as output signal [rad|deg]",\
 "controlBus.rearSuspensionBus.quarterCarBus_R.rockerAngle", 1, 3, 152, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius",\
 "Scrub radius [m]", "controlBus.rearSuspensionBus.quarterCarBus_R.scrubRadius", 1,\
 3, 23, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.rearSuspensionBus.quarterCarBus_R.toe",\
 "Toe angle [rad|deg]", "controlBus.rearSuspensionBus.quarterCarBus_R.toe", 1, 3,\
 24, 4)
DeclareOutput("controlBus.transmissionBus.clutchLocked", "Real Boolean =1 if the clutch is locked",\
 153, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.transmissionBus.outputSpeed", "Driveline flange speed of transmission [rad/s]",\
 154, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("vehicle.body.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.body.controlBus.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.body.mass.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.body.mass.controlBus.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.brakes.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.brakes.controlBus.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.controlBus.transmissionBus.outputSpeed", "Driveline flange speed of transmission [rad/s]",\
 "controlBus.transmissionBus.outputSpeed", 1, 3, 154, 4)
DeclareAlias2("vehicle.driveline.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.driveline.controlBus.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.transmissionBus.clutchLocked",\
 "Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.transmissionBus.outputSpeed",\
 "Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.driverEnvironment.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 1028)
DeclareAlias2("vehicle.engine.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.engine.controlBus.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.transmissionBus.clutchLocked",\
 "Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.transmissionBus.outputSpeed",\
 "Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.engineController.controlBus.transmissionBus.clutchLocked",\
 "Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.engineController.controlBus.transmissionBus.outputSpeed",\
 "Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.transmissionBus.clutchLocked",\
 "Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.transmissionBus.outputSpeed",\
 "Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.fead.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.fead.controlBus.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.transmissionBus.clutchLocked",\
 "Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.transmissionBus.outputSpeed",\
 "Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.transmissionBus.clutchLocked",\
 "Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.transmissionBus.outputSpeed",\
 "Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.transmissionBus.clutchLocked",\
 "Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.transmissionBus.outputSpeed",\
 "Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.transmission.controlBus.transmissionBus.clutchLocked", \
"Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.transmission.controlBus.transmissionBus.outputSpeed", \
"Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.transmissionBus.clutchLocked",\
 "Real Boolean =1 if the clutch is locked", "controlBus.transmissionBus.clutchLocked", 1,\
 3, 153, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.transmissionBus.outputSpeed",\
 "Driveline flange speed of transmission [rad/s]", "controlBus.transmissionBus.outputSpeed", 1,\
 3, 154, 4)
DeclareOutput("controlBus.wheel_1.contactPoint.penetrationVelocity", \
"Connector of Real output signal", 155, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.wheel_1.contactPoint.spinVelocity", "Wheel spin velocity in rad/s [rad/s]",\
 156, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.wheel_1.contactPoint.tyreRadius", "Tyre radial distance to ground contact point [m]",\
 157, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("vehicle.body.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.body.controlBus.wheel_1.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.body.controlBus.wheel_1.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_1.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_1.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_1.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_1.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_1.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_1.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.controlBus.wheel_1.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.controlBus.wheel_1.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.controlBus.wheel_1.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_1.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_1.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_1.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_1.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_1.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_1.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_1.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_1.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_1.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_1.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_1.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_1.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_1.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_1.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_1.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_1.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_1.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_1.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_1.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_1.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_1.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_1.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_1.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_1.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_1.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_1.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_1.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_1.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_1.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_1.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_1.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.wheel_1.aerodynamics.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.wheel_1.aerodynamics.wheelBus.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.wheel_1.aerodynamics.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.wheel_1.contact.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.wheel_1.contact.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.wheel_1.contact.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.wheel_1.forceApplication.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 1028)
DeclareAlias2("vehicle.wheel_1.forceApplication.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 1028)
DeclareAlias2("vehicle.wheel_1.forceApplication.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 1028)
DeclareAlias2("vehicle.wheel_1.forceApplication.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.wheel_1.forceApplication.wheelBus.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29,\
 4)
DeclareAlias2("vehicle.wheel_1.forceApplication.wheelBus.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.wheel_1.rim.wheelBus.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.wheel_1.rim.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.wheel_1.rim.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.wheel_1.tyreBelt.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.wheel_1.tyreBelt.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.wheel_1.tyreBelt.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.wheel_1.tyreForces.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 1028)
DeclareAlias2("vehicle.wheel_1.tyreForces.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 1028)
DeclareAlias2("vehicle.wheel_1.tyreForces.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.wheel_1.tyreForces.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.wheel_1.tyreForces.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareAlias2("vehicle.wheel_1.wheelBus.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_1.contactPoint.penetrationVelocity", 1,\
 3, 155, 4)
DeclareAlias2("vehicle.wheel_1.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_1.rim.mass.w", 1, 1, 29, 4)
DeclareAlias2("vehicle.wheel_1.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_1.contactPoint.tyreRadius", 1,\
 3, 157, 4)
DeclareOutput("controlBus.wheel_1.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 158, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("vehicle.body.controlBus.wheel_1.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_1.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 4)
DeclareAlias2("vehicle.controlBus.wheel_1.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_1.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_1.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_1.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_1.hubData.phi",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.wheel_1.aerodynamics.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.wheel_1.contact.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 1028)
DeclareAlias2("vehicle.wheel_1.contact.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 4)
DeclareAlias2("vehicle.wheel_1.forceApplication.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 1028)
DeclareAlias2("vehicle.wheel_1.forceApplication.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.wheel_1.rim.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 4)
DeclareAlias2("vehicle.wheel_1.tyreBelt.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 4)
DeclareAlias2("vehicle.wheel_1.tyreForces.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 1028)
DeclareAlias2("vehicle.wheel_1.tyreForces.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_1.rim.mass.phi", 1,\
 1, 28, 4)
DeclareAlias2("vehicle.wheel_1.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_1.rim.mass.phi", 1, 1, 28, 4)
DeclareOutput("controlBus.wheel_1.tyreForces.fz_external", "Externally calculated fz [N]",\
 159, 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.controlBus.wheel_1.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.mass.controlBus.wheel_1.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.sensors.controlBus.wheel_1.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.brakes.controlBus.wheel_1.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.controlBus.wheel_1.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driveline.controlBus.wheel_1.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driverEnvironment.controlBus.wheel_1.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.controlBus.wheel_1.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.starterMotor.controlBus.wheel_1.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineController.controlBus.wheel_1.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.wheel_1.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fead.controlBus.wheel_1.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.wheel_1.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.controlBus.wheel_1.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fuelTank.controlBus.wheel_1.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.lubricationCircuit.controlBus.wheel_1.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.wheel_1.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.controlBus.wheel_1.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.wheel_1.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_1.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_1.aerodynamics.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_1.contact.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_1.forceApplication.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("vehicle.wheel_1.forceApplication.wheelBus.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_1.rim.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_1.tyreBelt.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("vehicle.wheel_1.tyreBelt.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_1.tyreForces.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_1.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareOutput("controlBus.wheel_2.contactPoint.penetrationVelocity", \
"Connector of Real output signal", 160, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.wheel_2.contactPoint.spinVelocity", "Wheel spin velocity in rad/s [rad/s]",\
 161, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.wheel_2.contactPoint.tyreRadius", "Tyre radial distance to ground contact point [m]",\
 162, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("vehicle.body.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.body.controlBus.wheel_2.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.body.controlBus.wheel_2.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_2.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_2.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_2.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_2.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_2.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_2.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.controlBus.wheel_2.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.controlBus.wheel_2.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.controlBus.wheel_2.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_2.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_2.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_2.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_2.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_2.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_2.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_2.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_2.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_2.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_2.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_2.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_2.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_2.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_2.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_2.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_2.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_2.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_2.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_2.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_2.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_2.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_2.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_2.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_2.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_2.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_2.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_2.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_2.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_2.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_2.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_2.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.wheel_2.aerodynamics.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.wheel_2.aerodynamics.wheelBus.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.wheel_2.aerodynamics.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.wheel_2.contact.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.wheel_2.contact.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.wheel_2.contact.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.wheel_2.forceApplication.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 1028)
DeclareAlias2("vehicle.wheel_2.forceApplication.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 1028)
DeclareAlias2("vehicle.wheel_2.forceApplication.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 1028)
DeclareAlias2("vehicle.wheel_2.forceApplication.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.wheel_2.forceApplication.wheelBus.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33,\
 4)
DeclareAlias2("vehicle.wheel_2.forceApplication.wheelBus.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.wheel_2.rim.wheelBus.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.wheel_2.rim.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.wheel_2.rim.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.wheel_2.tyreBelt.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.wheel_2.tyreBelt.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.wheel_2.tyreBelt.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.wheel_2.tyreForces.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 1028)
DeclareAlias2("vehicle.wheel_2.tyreForces.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 1028)
DeclareAlias2("vehicle.wheel_2.tyreForces.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.wheel_2.tyreForces.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.wheel_2.tyreForces.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareAlias2("vehicle.wheel_2.wheelBus.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_2.contactPoint.penetrationVelocity", 1,\
 3, 160, 4)
DeclareAlias2("vehicle.wheel_2.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_2.rim.mass.w", 1, 1, 33, 4)
DeclareAlias2("vehicle.wheel_2.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_2.contactPoint.tyreRadius", 1,\
 3, 162, 4)
DeclareOutput("controlBus.wheel_2.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 163, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("vehicle.body.controlBus.wheel_2.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_2.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 4)
DeclareAlias2("vehicle.controlBus.wheel_2.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_2.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_2.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_2.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_2.hubData.phi",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.wheel_2.aerodynamics.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.wheel_2.contact.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 1028)
DeclareAlias2("vehicle.wheel_2.contact.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 4)
DeclareAlias2("vehicle.wheel_2.forceApplication.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 1028)
DeclareAlias2("vehicle.wheel_2.forceApplication.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.wheel_2.rim.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 4)
DeclareAlias2("vehicle.wheel_2.tyreBelt.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 4)
DeclareAlias2("vehicle.wheel_2.tyreForces.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 1028)
DeclareAlias2("vehicle.wheel_2.tyreForces.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_2.rim.mass.phi", 1,\
 1, 32, 4)
DeclareAlias2("vehicle.wheel_2.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_2.rim.mass.phi", 1, 1, 32, 4)
DeclareOutput("controlBus.wheel_2.tyreForces.fz_external", "Externally calculated fz [N]",\
 164, 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.controlBus.wheel_2.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.mass.controlBus.wheel_2.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.sensors.controlBus.wheel_2.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.brakes.controlBus.wheel_2.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.controlBus.wheel_2.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driveline.controlBus.wheel_2.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driverEnvironment.controlBus.wheel_2.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.controlBus.wheel_2.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.starterMotor.controlBus.wheel_2.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineController.controlBus.wheel_2.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.wheel_2.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fead.controlBus.wheel_2.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.wheel_2.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.controlBus.wheel_2.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fuelTank.controlBus.wheel_2.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.lubricationCircuit.controlBus.wheel_2.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.wheel_2.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.controlBus.wheel_2.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.wheel_2.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_2.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_2.aerodynamics.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_2.contact.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_2.forceApplication.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("vehicle.wheel_2.forceApplication.wheelBus.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_2.rim.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_2.tyreBelt.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("vehicle.wheel_2.tyreBelt.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_2.tyreForces.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_2.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareOutput("controlBus.wheel_3.contactPoint.penetrationVelocity", \
"Connector of Real output signal", 165, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.wheel_3.contactPoint.spinVelocity", "Wheel spin velocity in rad/s [rad/s]",\
 166, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.wheel_3.contactPoint.tyreRadius", "Tyre radial distance to ground contact point [m]",\
 167, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("vehicle.body.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.body.controlBus.wheel_3.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.body.controlBus.wheel_3.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_3.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_3.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_3.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_3.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_3.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_3.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.controlBus.wheel_3.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.controlBus.wheel_3.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.controlBus.wheel_3.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_3.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_3.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_3.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_3.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_3.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_3.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_3.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_3.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_3.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_3.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_3.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_3.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_3.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_3.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_3.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_3.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_3.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_3.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_3.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_3.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_3.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_3.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_3.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_3.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_3.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_3.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_3.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_3.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_3.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_3.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_3.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.wheel_3.aerodynamics.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.wheel_3.aerodynamics.wheelBus.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.wheel_3.aerodynamics.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.wheel_3.contact.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.wheel_3.contact.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.wheel_3.contact.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.wheel_3.forceApplication.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 1028)
DeclareAlias2("vehicle.wheel_3.forceApplication.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 1028)
DeclareAlias2("vehicle.wheel_3.forceApplication.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 1028)
DeclareAlias2("vehicle.wheel_3.forceApplication.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.wheel_3.forceApplication.wheelBus.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35,\
 4)
DeclareAlias2("vehicle.wheel_3.forceApplication.wheelBus.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.wheel_3.rim.wheelBus.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.wheel_3.rim.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.wheel_3.rim.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.wheel_3.tyreBelt.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.wheel_3.tyreBelt.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.wheel_3.tyreBelt.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.wheel_3.tyreForces.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 1028)
DeclareAlias2("vehicle.wheel_3.tyreForces.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 1028)
DeclareAlias2("vehicle.wheel_3.tyreForces.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.wheel_3.tyreForces.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.wheel_3.tyreForces.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareAlias2("vehicle.wheel_3.wheelBus.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_3.contactPoint.penetrationVelocity", 1,\
 3, 165, 4)
DeclareAlias2("vehicle.wheel_3.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_3.rim.mass.w", 1, 1, 35, 4)
DeclareAlias2("vehicle.wheel_3.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_3.contactPoint.tyreRadius", 1,\
 3, 167, 4)
DeclareOutput("controlBus.wheel_3.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 168, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("vehicle.body.controlBus.wheel_3.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_3.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 4)
DeclareAlias2("vehicle.controlBus.wheel_3.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_3.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_3.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_3.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_3.hubData.phi",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.wheel_3.aerodynamics.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.wheel_3.contact.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 1028)
DeclareAlias2("vehicle.wheel_3.contact.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 4)
DeclareAlias2("vehicle.wheel_3.forceApplication.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 1028)
DeclareAlias2("vehicle.wheel_3.forceApplication.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.wheel_3.rim.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 4)
DeclareAlias2("vehicle.wheel_3.tyreBelt.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 4)
DeclareAlias2("vehicle.wheel_3.tyreForces.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 1028)
DeclareAlias2("vehicle.wheel_3.tyreForces.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_3.rim.mass.phi", 1,\
 1, 34, 4)
DeclareAlias2("vehicle.wheel_3.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_3.rim.mass.phi", 1, 1, 34, 4)
DeclareOutput("controlBus.wheel_3.tyreForces.fz_external", "Externally calculated fz [N]",\
 169, 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.controlBus.wheel_3.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.mass.controlBus.wheel_3.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.sensors.controlBus.wheel_3.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.brakes.controlBus.wheel_3.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.controlBus.wheel_3.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driveline.controlBus.wheel_3.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driverEnvironment.controlBus.wheel_3.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.controlBus.wheel_3.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.starterMotor.controlBus.wheel_3.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineController.controlBus.wheel_3.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.wheel_3.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fead.controlBus.wheel_3.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.wheel_3.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.controlBus.wheel_3.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fuelTank.controlBus.wheel_3.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.lubricationCircuit.controlBus.wheel_3.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.wheel_3.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.controlBus.wheel_3.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.wheel_3.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_3.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_3.aerodynamics.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_3.contact.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_3.forceApplication.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("vehicle.wheel_3.forceApplication.wheelBus.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_3.rim.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_3.tyreBelt.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("vehicle.wheel_3.tyreBelt.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_3.tyreForces.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_3.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareOutput("controlBus.wheel_4.contactPoint.penetrationVelocity", \
"Connector of Real output signal", 170, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.wheel_4.contactPoint.spinVelocity", "Wheel spin velocity in rad/s [rad/s]",\
 171, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("controlBus.wheel_4.contactPoint.tyreRadius", "Tyre radial distance to ground contact point [m]",\
 172, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("vehicle.body.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.body.controlBus.wheel_4.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.body.controlBus.wheel_4.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_4.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_4.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_4.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_4.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_4.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_4.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.controlBus.wheel_4.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.controlBus.wheel_4.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.controlBus.wheel_4.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_4.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_4.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_4.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_4.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_4.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_4.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_4.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_4.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_4.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_4.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_4.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_4.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_4.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_4.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_4.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_4.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_4.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_4.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_4.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_4.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_4.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_4.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_4.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_4.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_4.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_4.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.wheel_4.aerodynamics.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.wheel_4.aerodynamics.wheelBus.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.wheel_4.aerodynamics.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.wheel_4.contact.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.wheel_4.contact.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.wheel_4.contact.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.wheel_4.forceApplication.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 1028)
DeclareAlias2("vehicle.wheel_4.forceApplication.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 1028)
DeclareAlias2("vehicle.wheel_4.forceApplication.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 1028)
DeclareAlias2("vehicle.wheel_4.forceApplication.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.wheel_4.forceApplication.wheelBus.contactPoint.spinVelocity",\
 "Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37,\
 4)
DeclareAlias2("vehicle.wheel_4.forceApplication.wheelBus.contactPoint.tyreRadius",\
 "Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.wheel_4.rim.wheelBus.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.wheel_4.rim.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.wheel_4.rim.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.wheel_4.tyreBelt.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.wheel_4.tyreBelt.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.wheel_4.tyreBelt.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.wheel_4.tyreForces.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 1028)
DeclareAlias2("vehicle.wheel_4.tyreForces.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 1028)
DeclareAlias2("vehicle.wheel_4.tyreForces.wheelBus.contactPoint.penetrationVelocity",\
 "Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.wheel_4.tyreForces.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.wheel_4.tyreForces.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareAlias2("vehicle.wheel_4.wheelBus.contactPoint.penetrationVelocity", \
"Connector of Real output signal", "controlBus.wheel_4.contactPoint.penetrationVelocity", 1,\
 3, 170, 4)
DeclareAlias2("vehicle.wheel_4.wheelBus.contactPoint.spinVelocity", \
"Wheel spin velocity in rad/s [rad/s]", "vehicle.wheel_4.rim.mass.w", 1, 1, 37, 4)
DeclareAlias2("vehicle.wheel_4.wheelBus.contactPoint.tyreRadius", \
"Tyre radial distance to ground contact point [m]", "controlBus.wheel_4.contactPoint.tyreRadius", 1,\
 3, 172, 4)
DeclareOutput("controlBus.wheel_4.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 173, 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("vehicle.body.controlBus.wheel_4.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 4)
DeclareAlias2("vehicle.body.mass.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.body.sensors.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.brakes.controlBus.wheel_4.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 4)
DeclareAlias2("vehicle.controlBus.wheel_4.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 4)
DeclareAlias2("vehicle.driveline.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.driverEnvironment.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.engine.controlBus.wheel_4.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 4)
DeclareAlias2("vehicle.engine.starterMotor.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.engineController.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.engineCoolantSystem.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.fead.controlBus.wheel_4.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 4)
DeclareAlias2("vehicle.frontAxle.busControl.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.frontAxle.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.fuelTank.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.lubricationCircuit.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.rearAxle.busControl.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.rearAxle.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.transmission.controlBus.wheel_4.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.transmission.shiftActuation.controlBus.wheel_4.hubData.phi",\
 "Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.wheel_4.aerodynamics.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.wheel_4.contact.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 1028)
DeclareAlias2("vehicle.wheel_4.contact.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 4)
DeclareAlias2("vehicle.wheel_4.forceApplication.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 1028)
DeclareAlias2("vehicle.wheel_4.forceApplication.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.wheel_4.rim.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 4)
DeclareAlias2("vehicle.wheel_4.tyreBelt.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 4)
DeclareAlias2("vehicle.wheel_4.tyreForces.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 1028)
DeclareAlias2("vehicle.wheel_4.tyreForces.wheelBus.hubData.phi", \
"Absolute angle of flange as output signal [rad|deg]", "vehicle.wheel_4.rim.mass.phi", 1,\
 1, 36, 4)
DeclareAlias2("vehicle.wheel_4.wheelBus.hubData.phi", "Absolute angle of flange as output signal [rad|deg]",\
 "vehicle.wheel_4.rim.mass.phi", 1, 1, 36, 4)
DeclareOutput("controlBus.wheel_4.tyreForces.fz_external", "Externally calculated fz [N]",\
 174, 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.controlBus.wheel_4.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.mass.controlBus.wheel_4.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.body.sensors.controlBus.wheel_4.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.brakes.controlBus.wheel_4.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.controlBus.wheel_4.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driveline.controlBus.wheel_4.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driverEnvironment.controlBus.wheel_4.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.controlBus.wheel_4.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engine.starterMotor.controlBus.wheel_4.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineController.controlBus.wheel_4.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.engineCoolantSystem.controlBus.wheel_4.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fead.controlBus.wheel_4.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.busControl.controlBus.wheel_4.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.frontAxle.controlBus.wheel_4.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.fuelTank.controlBus.wheel_4.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.lubricationCircuit.controlBus.wheel_4.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.busControl.controlBus.wheel_4.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.rearAxle.controlBus.wheel_4.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.controlBus.wheel_4.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.transmission.shiftActuation.controlBus.wheel_4.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_4.aerodynamics.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_4.contact.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_4.forceApplication.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("vehicle.wheel_4.forceApplication.wheelBus.tyreForces.fz_external",\
 "Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_4.rim.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_4.tyreBelt.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("vehicle.wheel_4.tyreBelt.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_4.tyreForces.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.wheel_4.wheelBus.tyreForces.fz_external", \
"Externally calculated fz [N]", 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("driver.driverInterface.clutchLocked", "=1 if clutch is locked", \
"controlBus.transmissionBus.clutchLocked", 1, 3, 153, 4)
DeclareAlias2("driver.driverInterface.engineSpeed", "Engine speed in rad/s [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareAlias2("driver.driverInterface.gearEngaged", "True if gear is engaged [:#(type=Boolean)]",\
 "vehicle.driverEnvironment.summary.inGear", 1, 5, 889, 69)
DeclareAlias2("driver.driverInterface.lateralAcceleration", "Lateral acceleration of vehicle [m/s2]",\
 "vehicle.driverEnvironment.a_y.a_yOutput", 1, 5, 1468, 4)
DeclareAlias2("driver.driverInterface.longitudinalAcceleration", \
"Longitudinal acceleration of vehicle [m/s2]", "vehicle.driverEnvironment.summary.longitudinalAccel", 1,\
 5, 887, 4)
DeclareVariable("driver.driverInterface.maxGear", "Max Gear avaliable in vehicle [:#(type=Integer)]",\
 6, 0.0,0.0,0.0,0,525)
DeclareAlias2("driver.driverInterface.vehicleSpeed", "Longitudinal speed of vehicle [m/s]",\
 "vehicle.driverEnvironment.summary.longitudinalVelocity", 1, 5, 886, 4)
DeclareAlias2("driver.driverInterface.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 4)
DeclareAlias2("driver.driverInterface.yawRate", "Yaw rate of vehicle [rad/s]", \
"vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082, 4)
DeclareVariable("vehicle.driverInterface.acceleratorDemand", "Normalised accelerator demand (0-1)",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driverInterface.brakeDemand", "Normalised brake demand (0-1)",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.T[1, 1]", "Transformation matrix from world frame to local frame",\
 "totalMass.T[1, 1]", 1, 5, 261, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.T[1, 2]", "Transformation matrix from world frame to local frame",\
 "totalMass.T[1, 2]", 1, 5, 262, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.T[1, 3]", "Transformation matrix from world frame to local frame",\
 "totalMass.T[1, 3]", 1, 5, 263, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.T[2, 1]", "Transformation matrix from world frame to local frame",\
 "totalMass.T[2, 1]", 1, 5, 264, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.T[2, 2]", "Transformation matrix from world frame to local frame",\
 "totalMass.T[2, 2]", 1, 5, 265, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.T[2, 3]", "Transformation matrix from world frame to local frame",\
 "totalMass.T[2, 3]", 1, 5, 266, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.T[3, 1]", "Transformation matrix from world frame to local frame",\
 "totalMass.T[3, 1]", 1, 5, 267, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.T[3, 2]", "Transformation matrix from world frame to local frame",\
 "totalMass.T[3, 2]", 1, 5, 268, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.T[3, 3]", "Transformation matrix from world frame to local frame",\
 "totalMass.T[3, 3]", 1, 5, 269, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.w[1]", "Absolute angular velocity of local frame, resolved in local frame [rad/s]",\
 "totalMass.frame_resolve.R.w[1]", 1, 5, 297, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.w[2]", "Absolute angular velocity of local frame, resolved in local frame [rad/s]",\
 "totalMass.frame_resolve.R.w[2]", 1, 5, 298, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.R.w[3]", "Absolute angular velocity of local frame, resolved in local frame [rad/s]",\
 "totalMass.frame_resolve.R.w[3]", 1, 5, 299, 0)
DeclareAlias2("vehicle.driverInterface.chassisFrame.r_0[1]", "Position resolved in world frame [m]",\
 "totalMass.r_0[1]", 1, 5, 258, 4)
DeclareAlias2("vehicle.driverInterface.chassisFrame.r_0[2]", "Position resolved in world frame [m]",\
 "totalMass.r_0[2]", 1, 5, 259, 4)
DeclareAlias2("vehicle.driverInterface.chassisFrame.r_0[3]", "Position resolved in world frame [m]",\
 "totalMass.r_0[3]", 1, 5, 260, 4)
DeclareVariable("vehicle.driverInterface.clutchDemand", "Normalised clutch demand (0-1)",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.driverInterface.clutchLocked", "=1 if clutch is locked", \
"controlBus.transmissionBus.clutchLocked", 1, 3, 153, 4)
DeclareAlias2("vehicle.driverInterface.engineSpeed", "Engine speed in rad/s [rad/s]",\
 "vehicle.engine.flywheel.rotatingBody.w", 1, 1, 53, 4)
DeclareVariable("vehicle.driverInterface.gear", "Gear demand from driver [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.driverInterface.gearEngaged", "True if gear is engaged [:#(type=Boolean)]",\
 "vehicle.driverEnvironment.summary.inGear", 1, 5, 889, 69)
DeclareVariable("vehicle.driverInterface.handbrakeDemand", "Normalised handbrake demand (0-1)",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("vehicle.driverInterface.ignition", "Ignition from driver (Off, on and start) [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,525)
DeclareAlias2("vehicle.driverInterface.lateralAcceleration", "Lateral acceleration of vehicle [m/s2]",\
 "vehicle.driverEnvironment.a_y.a_yOutput", 1, 5, 1468, 4)
DeclareAlias2("vehicle.driverInterface.longitudinalAcceleration", \
"Longitudinal acceleration of vehicle [m/s2]", "vehicle.driverEnvironment.summary.longitudinalAccel", 1,\
 5, 887, 4)
DeclareVariable("vehicle.driverInterface.maxGear", "Max Gear avaliable in vehicle [:#(type=Integer)]",\
 6, 0.0,0.0,0.0,0,525)
DeclareVariable("vehicle.driverInterface.steeringDemand", "Normalised steering demand (-1 - 1)",\
 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("vehicle.driverInterface.vehicleSpeed", "Longitudinal speed of vehicle [m/s]",\
 "vehicle.driverEnvironment.summary.longitudinalVelocity", 1, 5, 886, 4)
DeclareAlias2("vehicle.driverInterface.wRedLine", "Engine Red Line in rev/min [rev/min]",\
 "vehicle.engineController.revLimiter.redLineSource.k", 1, 5, 83003, 4)
DeclareAlias2("vehicle.driverInterface.yawRate", "Yaw rate of vehicle [rad/s]", \
"vehicle.body.mass.body.body.w_a[3]", 1, 5, 60082, 4)
EndNonAlias(81)
PreNonAliasNew(82)
