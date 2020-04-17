within CUFR2020.Experiments.Subsystem;
package Suspension
  model FrontSuspensionKinematics "no ARBKinematic test of front double wishbone suspension for Formula Student"

    extends Suspensions.HalfCar.Experiments.Templates.FrontKinematics(
      redeclare Suspensions.HalfCar.Sensors.SensorPacks.QuarterCar.Empty
        rightSensorPack,
      redeclare Suspensions.HalfCar.Sensors.SensorPacks.QuarterCar.Empty
        leftSensorPack,
      redeclare Motorsports.HalfCar.Front.FormulaStudent suspension(manualOverride=false,
        redeclare replaceable Motorsports.QuarterCar.Front.DWPSU leftLinkage(
          mirrorKinematics=false,
          r0WC(displayUnit="mm") = {0,0.6096,0},
          camber=-0.034906585039887,
          r0TIJ(displayUnit="mm") = {0.033782,0.18669,-0.066548},
          r0LCAFJ(displayUnit="mm") = {0.12954,0.18669,-0.09398},
          r0LCARJ(displayUnit="mm") = {-0.1143,0.18669,-0.08382},
          r0LCAOJ(displayUnit="mm") = {-0.004064,0.597916,-0.07874},
          r0UCAFJ(displayUnit="mm") = {0.13335,0.30226,0.05842},
          r0UCARJ(displayUnit="mm") = {-0.05715,0.30226,0.04826},
          r0UCAOJ(displayUnit="mm") = {-0.02159,0.59182,0.09525},
          r0TOJ(displayUnit="mm") = {0.04699,0.5969,-0.047752},
          r0RP(displayUnit="mm") = {-0.00381,0.234696,0.3556},
          r0PIJ(displayUnit="mm") = {-0.00381,0.289052,0.388366},
          r0POJ(displayUnit="mm") = {-0.00381,0.545846,-0.059182}),
        redeclare replaceable Motorsports.QuarterCar.Front.DWPSU rightLinkage(
          r0WC(displayUnit="mm") = {0,0.6096,0},
          camber=-0.034906585039887,
          r0TIJ(displayUnit="mm") = {0.033782,0.18669,-0.066548},
          r0LCAFJ(displayUnit="mm") = {0.12954,0.18669,-0.09398},
          r0LCARJ(displayUnit="mm") = {-0.1143,0.18669,-0.08382},
          r0LCAOJ(displayUnit="mm") = {-0.004064,0.597916,-0.07874},
          r0UCAFJ(displayUnit="mm") = {0.13335,0.30226,0.05842},
          r0UCARJ(displayUnit="mm") = {-0.05715,0.30226,0.04826},
          r0UCAOJ(displayUnit="mm") = {-0.02159,0.59182,0.09525},
          r0TOJ(displayUnit="mm") = {0.04699,0.5969,-0.047752},
          r0RP(displayUnit="mm") = {-0.00381,0.234696,0.3556},
          r0PIJ(displayUnit="mm") = {-0.00381,0.289052,0.388366},
          r0POJ(displayUnit="mm") = {-0.00381,0.545846,-0.059182}),
        redeclare replaceable
          Motorsports.HalfCar.InboardSuspension.TwoSpringDampers
          inboardSuspension(
          r0DT_L(displayUnit="mm") = {-0.00381,0.051562,0.3937},
          r0DB_L(displayUnit="mm") = {-0.00381,0.222504,0.41783},
          redeclare replaceable model leftSpringCharacteristic =
              Claytex.Mechanics.Translational.SpringsAndDampers.GenericSpring (
                characteristic=Claytex.Types.SpringType.Linear, c=70000),
          redeclare replaceable model leftDamperCharacteristic =
              Claytex.Mechanics.Translational.SpringsAndDampers.GenericDamper (
                characteristic=Claytex.Types.DamperType.Linear, d=7000),
          redeclare replaceable model leftInerterCharacteristic =
              Claytex.Mechanics.Translational.Parts.NullInerter,
          redeclare replaceable model rightSpringCharacteristic =
              Claytex.Mechanics.Translational.SpringsAndDampers.GenericSpring (
                characteristic=Claytex.Types.SpringType.Linear, c=70000),
          redeclare replaceable model rightDamperCharacteristic =
              Claytex.Mechanics.Translational.SpringsAndDampers.GenericDamper (
                characteristic=Claytex.Types.DamperType.Linear, d=7000),
          redeclare replaceable model rightInerterCharacteristic =
              Claytex.Mechanics.Translational.Parts.NullInerter,
          redeclare replaceable model leftBumpStopCharacteristic =
              Claytex.Mechanics.Translational.SpringsAndDampers.NullBumpStop,
          redeclare replaceable model rightBumpStopCharacteristic =
              Claytex.Mechanics.Translational.SpringsAndDampers.NullBumpStop)),
      redeclare
        Suspensions.HalfCar.Experiments.Controllers.VerticalAndSteeringSweep
        controller(
      applyForces=true,
        redeclare Claytex.Blocks.Sources.SineSingle leftVerticalTravel(
          freqHz=1/5,
          startTime=1,
          amplitude=0.06),
        redeclare Claytex.Blocks.Sources.SineSingle rightVerticalTravel(
          freqHz=1/5,
          startTime=1,
          amplitude=-0.06),
        redeclare Claytex.Blocks.Sources.SineSingle steering(
          freqHz=1/4,
          startTime=7,
          amplitude=Modelica.SIunits.Conversions.from_deg(90))),
      halfCarRig(
        r0WC_L=suspension.leftLinkage.r0WC,
        r0TIJ_L=suspension.leftLinkage.r0TIJ,
        r0LFJ_L=suspension.leftLinkage.r0LCAFJ,
        r0LRJ_L=suspension.leftLinkage.r0LCARJ,
        r0UFJ_L=suspension.leftLinkage.r0UCAFJ,
        r0URJ_L=suspension.leftLinkage.r0UCARJ,
        r0DT_L=suspension.inboardSuspension.r0DT_L,
        leftVerticalActuator(
          baseDiameter=0.06,
          bodyDiameter=0.05,
          rodDiameter=0.03),
        rightVerticalActuator(
          baseDiameter=0.06,
          bodyDiameter=0.05,
          rodDiameter=0.03),
        r0SWC=suspension.steering.r0SWC,
        r0ARBM_L={0,0,0},
        steeringWheelActuator(w(fixed=true, start=0))));

    annotation (
      experiment(StopTime=11),
      __Dymola_experimentSetupOutput,
      Documentation(revisions="<html>
<table cellspacing=\"0\" cellpadding=\"0\" border=\"0\"><tr>
<td><p><img src=\"modelica://Motorsports/Images/claytex_logo_100x35px.gif\"/>&nbsp;&nbsp;&nbsp;</p></td>
<td><p><br><b>Copyright &copy; 2017-2019, Claytex Services Limited</b></p></td>
</tr>
</table>
</html>",   info="<html>
<p>This is kinematic test of the <a href=\"modelica://Motorsports.HalfCar.Front.FormulaStudent\">Front Formula Student Double Wishbone</a> suspension. The <a href=\"modelica://Suspensions.HalfCar.Experiments.Controllers.VerticalAndSteeringSweep\">controller</a> is parameterised to perform:</p>
<ul>
<li>An <b>opposite wheel travel test</b>, where the hub moves +/-0.06m from the design condition starting at 1s and zero forces/torques applied at the hub.</li>
<li>Followed by a <b>steering wheel sweep</b>, where the steering wheel angle goes through +/-90deg starting at 7s</li>
</ul>
</html>"));
  end FrontSuspensionKinematics;
end Suspension;
