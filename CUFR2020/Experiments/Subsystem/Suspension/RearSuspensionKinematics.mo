within CUFR2020.Experiments.Subsystem.Suspension;
model RearSuspensionKinematics
  "Kinematic test of rear double wishbone suspension for Formula Student"

  extends Suspensions.HalfCar.Experiments.Templates.RearKinematics(
    redeclare Suspensions.HalfCar.Sensors.SensorPacks.QuarterCar.Empty
      rightSensorPack,
    redeclare Suspensions.HalfCar.Sensors.SensorPacks.QuarterCar.Empty
      leftSensorPack,
    redeclare Motorsports.HalfCar.Rear.FormulaStudent suspension(
      redeclare replaceable Motorsports.QuarterCar.Rear.DWPU leftLinkage(
        mirrorKinematics=false,
        r0WC(displayUnit="mm") = {-1.5494,0.584709,0},
        camber=-0.034906585039887,
        r0LCAFJ(displayUnit="mm") = {-1.284783,0.278308,-0.03777},
        r0LCARJ(displayUnit="mm") = {-1.524,0.244831,-0.038049},
        r0LCAOJ(displayUnit="mm") = {-1.521714,0.532384,-0.083566},
        r0UCAFJ(displayUnit="mm") = {-1.333195,0.296393,0.101371},
        r0UCARJ(displayUnit="mm") = {-1.536116,0.295986,0.102362},
        r0UCAOJ(displayUnit="mm") = {-1.551178,0.531114,0.08255},
        r0TIJ(displayUnit="mm") = {-1.524,0.244831,-0.038049},
        r0TOJ(displayUnit="mm") = {-1.58684,0.531494,-0.083367},
        r0RP(displayUnit="mm") = {-1.507998,0.296926,0.140335},
        r0PIJ(displayUnit="mm") = {-1.508074,0.349936,0.188443},
        r0POJ(displayUnit="mm") = {-1.50876,0.495554,-0.059182}),
      redeclare replaceable Motorsports.QuarterCar.Rear.DWPU rightLinkage(
        r0WC(displayUnit="mm") = {-1.5494,0.584709,0},
        camber=-0.034906585039887,
        r0LCAFJ(displayUnit="mm") = {-1.284783,0.278308,-0.03777},
        r0LCARJ(displayUnit="mm") = {-1.524,0.244831,-0.038049},
        r0LCAOJ(displayUnit="mm") = {-1.521714,0.532384,-0.083566},
        r0UCAFJ(displayUnit="mm") = {-1.333195,0.296393,0.101371},
        r0UCARJ(displayUnit="mm") = {-1.536116,0.295986,0.102362},
        r0UCAOJ(displayUnit="mm") = {-1.551178,0.531114,0.08255},
        r0TIJ(displayUnit="mm") = {-1.524,0.244831,-0.038049},
        r0TOJ(displayUnit="mm") = {-1.58684,0.531494,-0.083367},
        r0RP(displayUnit="mm") = {-1.507998,0.296926,0.140335},
        r0PIJ(displayUnit="mm") = {-1.508074,0.349936,0.188443},
        r0POJ(displayUnit="mm") = {-1.50876,0.495554,-0.059182}),
      redeclare replaceable
        Motorsports.HalfCar.InboardSuspension.TwoSpringDampersARB
        inboardSuspension(
        r0DT_L(displayUnit="mm") = {-1.50749,0.089941,0.161214},
        r0DB_L(displayUnit="mm") = {-1.507805,0.262255,0.222174},
        r0ST_L(displayUnit="mm"),
        r0SB_L(displayUnit="mm"),
        r0ARBDL_L(displayUnit="mm") = {-1.50876,0.327779,0.0972987},
        redeclare replaceable model leftBumpStopCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.NullBumpStop,
        redeclare replaceable model leftInerterCharacteristic =
            Claytex.Mechanics.Translational.Parts.NullInerter,
        redeclare replaceable model rightBumpStopCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.NullBumpStop,
        redeclare replaceable model rightInerterCharacteristic =
            Claytex.Mechanics.Translational.Parts.NullInerter,
        r0ARBL_L(displayUnit="mm") = {-1.4619784,0.3293364,-0.1344158},
        r0ARBTB_L(displayUnit="mm") = {-1.5099663,0.3293364,-0.1344158},
        redeclare replaceable model arbDamping =
            Claytex.Mechanics.Rotational.SpringsAndDampers.NullDamper,
        redeclare replaceable model leftSpringCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.GenericSpring (c=
                60000),
        redeclare replaceable model leftDamperCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.GenericDamper (d=
                7000),
        redeclare replaceable model rightSpringCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.GenericSpring (c=
                60000),
        redeclare replaceable model rightDamperCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.GenericDamper (d=
                7000),
        redeclare replaceable model arbStiffness =
            Claytex.Mechanics.Rotational.SpringsAndDampers.GenericSpring (c=100))),
    redeclare Suspensions.HalfCar.Experiments.Controllers.VerticalOppositeSweep
      controller(redeclare Claytex.Blocks.Sources.SineSingle leftVerticalTravel(
        freqHz=1/5,
        startTime=1,
        amplitude=0.04), redeclare Claytex.Blocks.Sources.SineSingle
        rightVerticalTravel(
        freqHz=1/5,
        startTime=1,
        amplitude=-0.04)),
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
      r0ARBM_L={0,0,0}));

  annotation (
    experiment(StopTime=11),
    __Dymola_experimentSetupOutput,
    Documentation(revisions="<html>
<table cellspacing=\"0\" cellpadding=\"0\" border=\"0\"><tr>
<td><p><img src=\"modelica://Motorsports/Images/claytex_logo_100x35px.gif\"/>&nbsp;&nbsp;&nbsp;</p></td>
<td><p><br><b>Copyright &copy; 2017-2019, Claytex Services Limited</b></p></td>
</tr>
</table>
</html>", info="<html>
<p>This is kinematic test of the <a href=\"modelica://Motorsports.HalfCar.Rear.FormulaStudent\">Rear Formula Student Double Wishbone</a> suspension. The <a href=\"modelica://Suspensions.HalfCar.Experiments.Controllers.VerticalOppositeSweep\">controller</a> is parameterised to perform:</p>
<ul>
<li>An <b>opposite wheel travel test</b>, where the hub moves +/-0.06m from the design condition starting at 1s and zero forces/torques applied at the hub.</li>
</ul>
</html>"));
end RearSuspensionKinematics;
