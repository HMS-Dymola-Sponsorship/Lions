within CUFR2020;
model ICECUFR20 "Model for Columbia University Formula Racing's ICE Car"
  extends Motorsports.Vehicles.FormulaStudent(body(redeclare replaceable
        VeSyMA.Bodies.Aerodynamics.Ideal3D aerodynamics(
        Cd=0.7373,
        Ad=1.205,
        r0CP={-0.7666,0,0},
        sphereColour={0,230,0},
        Cl=1.97)));
end ICECUFR20;
