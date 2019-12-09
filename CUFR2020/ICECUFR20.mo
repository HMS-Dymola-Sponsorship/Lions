within CUFR2020;
model ICECUFR20 "Model for Columbia University Formula Racing's ICE Car"
  extends Motorsports.Vehicles.FormulaStudent(body(redeclare replaceable
        VeSyMA.Bodies.Aerodynamics.Ideal3D aerodynamics(
        Cd=0.7373,
        Ad=1.205,
        r0CP={-0.7666,0,0},
        sphereColour={0,230,0},
        Cl=1.97)),
    frontAxle(redeclare replaceable Motorsports.QuarterCar.Front.DWPSU
        leftLinkage(
        mirrorKinematics=true,
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
        r0RP={-3.810,234.696,355.600},
        r0PIJ={-3.810,289.052,388.366},
        r0POJ={-3.810,545.846,-59.182}), redeclare replaceable
        Motorsports.HalfCar.InboardSuspension.TwoSpringDampersARB
        inboardSuspension(
        r0DT_L(displayUnit="mm") = {-1.50876,0.495554,-0.059182},
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
    rearAxle(redeclare replaceable Motorsports.QuarterCar.Rear.DWPU leftLinkage(
        mirrorKinematics=true,
        r0WC(displayUnit="mm") = {0,0.584709,0},
        toe=0,
        camber=-0.034906585039887,
        r0LCAFJ(displayUnit="mm") = {-1.284783,0.278308,-0.03777},
        r0LCARJ(displayUnit="mm") = {-1.524,0.244831,-0.038049},
        r0LCAOJ(displayUnit="mm") = {-1.521714,0.532384,-0.083566},
        r0UCAFJ(displayUnit="mm") = {-1.333195,0.296393,0.101371},
        r0UCARJ(displayUnit="mm") = {-1.536116,0.295986,0.102362},
        r0UCAOJ(displayUnit="mm") = {-1.551178,0.531114,0.08255},
        r0TIJ(displayUnit="mm") = {-1.524,0.244831,-0.038049},
        r0TOJ(displayUnit="mm") = {-1.58684,0.531494,-0.083367},
        nAdjust_18(displayUnit="1") = {0,1,0},
        r0RP(displayUnit="mm") = {-1.507998,0.296926,0.140335},
        r0PIJ(displayUnit="mm") = {-1.508074,0.349936,0.188443},
        r0POJ(displayUnit="mm") = {-1.50876,0.495554,-0.059182}), redeclare replaceable
                    Motorsports.HalfCar.InboardSuspension.TwoSpringDampersARB
        inboardSuspension(
        r0DT_L(displayUnit="mm") = {-1.50749,0.089941,0.161214},
        r0DB_L(displayUnit="mm") = {-1.507805,0.262255,0.222174},
        r0ARBDL_L={-1.3049915,0.2110005,0.1517625},
        redeclare replaceable model leftBumpStopCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.NullBumpStop,
        redeclare replaceable model leftInerterCharacteristic =
            Claytex.Mechanics.Translational.Parts.NullInerter,
        redeclare replaceable model rightBumpStopCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.NullBumpStop,
        redeclare replaceable model rightInerterCharacteristic =
            Claytex.Mechanics.Translational.Parts.NullInerter,
        redeclare replaceable model arbDamping =
            Claytex.Mechanics.Rotational.SpringsAndDampers.NullDamper,
        redeclare replaceable model leftSpringCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.GenericSpring (c=60000),
        redeclare replaceable model leftDamperCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.GenericDamper (d=7000),
        redeclare replaceable model rightSpringCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.GenericSpring (c=60000),
        redeclare replaceable model rightDamperCharacteristic =
            Claytex.Mechanics.Translational.SpringsAndDampers.GenericDamper (d=7000),
        redeclare replaceable model arbStiffness =
            Claytex.Mechanics.Rotational.SpringsAndDampers.GenericSpring (c=100))));

end ICECUFR20;
