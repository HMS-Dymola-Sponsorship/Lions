within CUFR2020.Experiments.StaticTests;
model MassCheck
  "Static test to determine overall vehicle properties of Formula Student car"
  extends VeSyMA.Experiments.Templates.VehicleTest(
    redeclare VeSyMA.Drivers.OpenLoop.OpenLoop driver(
      gear(k=0),
      ignition(offset=VehicleInterfaces.Types.IgnitionSetting.Off, height=0),
      redeclare Modelica.Blocks.Sources.Constant brakeDemand(k=0)),
    redeclare CUFR2020.ICECUFR20 vehicle(v_start=0, initialGear=0,
      body(redeclare replaceable Suspensions.Bodies.Mass.MultipleIdeal mass(
          I_11=10,
          I_22=35,
          I_33=30,
          mDriver=68,
          m=30.6,
          r_CM(displayUnit="mm") = {-0.75,0,-0.05},
          rCMDriver(displayUnit="m") = {-0.7,0,0.2})),
      redeclare Motorsports.WheelsAndTyres.Examples.FormulaStudent_Rig wheel_1,
      redeclare Motorsports.WheelsAndTyres.Examples.FormulaStudent_Rig wheel_2,
      redeclare Motorsports.WheelsAndTyres.Examples.FormulaStudent_Rig wheel_3,
      redeclare Motorsports.WheelsAndTyres.Examples.FormulaStudent_Rig wheel_4),
    redeclare VeSyMA.Roads.StaticRoads.FlatRoad road(animation=world.enableAnimation,
        length=20),
    redeclare VehicleInterfaces.Atmospheres.ConstantAtmosphere atmosphere);

  Suspensions.HalfCar.Sensors.SensorPacks.HalfCar.QuarterCarSensors
    frontSensors(redeclare
      Suspensions.HalfCar.Sensors.SensorPacks.QuarterCar.DoubleWishbone
      sensorPack_L(r0LCAOJ=vehicle.frontAxle.leftLinkage.lowerControlArm.outerJoint.r_0,
        r0UCAOJ=vehicle.frontAxle.leftLinkage.upperControlArm.outerJoint.r_0),
      redeclare
      Suspensions.HalfCar.Sensors.SensorPacks.QuarterCar.DoubleWishbone
      sensorPack_R(r0LCAOJ=vehicle.frontAxle.rightLinkage.lowerControlArm.outerJoint.r_0,
        r0UCAOJ=vehicle.frontAxle.rightLinkage.upperControlArm.outerJoint.r_0))
    annotation (Placement(transformation(extent={{-70,0},{-50,20}})));
  Suspensions.HalfCar.Sensors.SensorPacks.HalfCar.QuarterCarSensors rearSensors(
      redeclare
      Suspensions.HalfCar.Sensors.SensorPacks.QuarterCar.DoubleWishbone
      sensorPack_L(r0LCAOJ=vehicle.rearAxle.leftLinkage.lowerControlArm.outerJoint.r_0,
        r0UCAOJ=vehicle.rearAxle.leftLinkage.upperControlArm.outerJoint.r_0),
      redeclare
      Suspensions.HalfCar.Sensors.SensorPacks.QuarterCar.DoubleWishbone
      sensorPack_R(r0LCAOJ=vehicle.rearAxle.rightLinkage.lowerControlArm.outerJoint.r_0,
        r0UCAOJ=vehicle.rearAxle.rightLinkage.upperControlArm.outerJoint.r_0))
    annotation (Placement(transformation(extent={{70,0},{50,20}})));
equation
  connect(frontSensors.rightHubFlange, vehicle.hub_2) annotation (Line(
      points={{-50,10},{-25.4545,10},{-25.4545,0}},
      color={135,135,135},
      thickness=0.5));
  connect(frontSensors.chassisFrame, vehicle.chassisFrame) annotation (Line(
      points={{-60,0},{-60,-48},{0,-48},{0,-40}},
      color={95,95,95},
      thickness=0.5));
  connect(vehicle.hub_1, frontSensors.leftHubFlange) annotation (Line(
      points={{-25.4545,-40},{-24,-40},{-24,-60},{-80,-60},{-80,10},{-70,10}},
      color={135,135,135},
      thickness=0.5));
  connect(frontSensors.suspensionBus, controlBus.frontSuspensionBus)
    annotation (Line(
      points={{-60,20},{-60,30},{-100,30},{-100,-16}},
      color={255,204,51},
      thickness=0.5));
  connect(rearSensors.chassisFrame, vehicle.chassisFrame) annotation (Line(
      points={{60,0},{60,-48},{0,-48},{0,-40}},
      color={95,95,95},
      thickness=0.5));
  connect(rearSensors.suspensionBus, controlBus.rearSuspensionBus) annotation (
      Line(
      points={{60,20},{60,70},{-100,70},{-100,-16}},
      color={255,204,51},
      thickness=0.5));
  connect(rearSensors.rightHubFlange, vehicle.hub_4) annotation (Line(
      points={{50,10},{25.4545,10},{25.4545,0}},
      color={135,135,135},
      thickness=0.5));
  connect(rearSensors.leftHubFlange, vehicle.hub_3) annotation (Line(
      points={{70,10},{80,10},{80,-60},{25.4545,-60},{25.4545,-40}},
      color={135,135,135},
      thickness=0.5));
  annotation (
    experiment(StopTime=10),
    __Dymola_experimentSetupOutput,
    Documentation(revisions="<html>
<table cellspacing=\"0\" cellpadding=\"0\" border=\"0\"><tr>
<td><p><img src=\"modelica://Motorsports/Images/claytex_logo_100x35px.gif\"/>&nbsp;&nbsp;&nbsp;</p></td>
<td><p><br><b>Copyright &copy; 2017-2019, Claytex Services Limited</b></p></td>
</tr>
</table>
</html>", info="<html>
<p>A simple mass checking experiment. The <b>vehicle</b> freely settles upon the suspension under gravity. The wheels have been replaced with the <a href=\"modelica://Motorsports.WheelsAndTyres.Examples.FormulaStudent_Rig\">FormulaStudent_Rig</a> to remove tyre longitudinal and lateral forces to prevent jacking forces in the suspension as the vehicle settles.</p>
<p>This test is useful in defining preloads for new suspension geometry, ensuring that the vehicle initialises correctly and that the mass of the total vehicle is in the position and magnitude of the targets for the vehicle.</p>
</html>"),
    __Dymola_Commands(file=
          "modelica://Motorsports/Scripts/Analysis/Inboard Spring and Damper Forces.mos"
        "Spring and Damper Forces", file=
          "modelica://Motorsports/Scripts/Analysis/Inboard Spring Deformation and Damper Velocity.mos"
        "Spring Deformation and Damper Velocity"));
end MassCheck;
