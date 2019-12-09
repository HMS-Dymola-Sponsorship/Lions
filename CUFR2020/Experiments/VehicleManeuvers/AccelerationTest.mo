within CUFR2020.Experiments.VehicleManeuvers;
model AccelerationTest
  "straight line acceleration test. Starts with vehicle stationary and has a target speed of 10m/2 so the driver accelerates, changing gear when necessary"
  extends
    Motorsports.Experiments.VehicleManoeuvres.FormulaStudentAccelerationTest(
    redeclare replaceable CUFR2020.ICECUFR20 vehicle(initialGear=1,
        v_start=2), totalMass(massProperties=
          Claytex.Mechanics.MassProperties.MassProperties()));
  annotation (experiment(StopTime=10, __Dymola_Algorithm="Radau"));
end AccelerationTest;
