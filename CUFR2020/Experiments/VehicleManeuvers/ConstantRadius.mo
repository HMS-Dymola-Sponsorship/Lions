within CUFR2020.Experiments.VehicleManeuvers;
model ConstantRadius "constant radius test"
  extends
    Motorsports.Experiments.VehicleManoeuvres.FormulaStudentConstantRadius(
    redeclare replaceable CUFR2020.ICECUFR20 vehicle(initialGear=1,
        v_start=2),
    road(
      radius=8.25,
      banking=10,
      v_start=10));
end ConstantRadius;
