within CUFR2020;
model TotalMass "Calculates the total mass in the model"
  extends Claytex.Icons.Component;
  parameter Boolean calculateTotalMass=false
    "Enable the calculation of the total system mass"
    annotation (choices(checkBox=true));
  parameter Boolean animation=calculateTotalMass
    "Enable the animation of the cog"
    annotation (Dialog(tab="Animation"), choices(checkBox=true));
  parameter SI.Radius radius=0.075
    "Radius of the sphere used to animate the cog"
    annotation (Dialog(enable=animation, tab="Animation"));
  parameter Integer colour[3]={255,0,0} "Colour of the sphere"
    annotation (Dialog(
      colorSelector=true,
      enable=animation,
      tab="Animation"));
  SI.Mass m "Total mass";
  SI.Position r_cm[3]
    "Centre of mass relative to and resolved in frame_resolve";
  SI.Position r_cm_0[3]
    "Centre of mass relative to and resolved in world";
  SI.Inertia I_cm[3,3]
    "Inertia matrix resolved in frame_resolve at the centre of mass";
  Real r_0[3]=frame_resolve.r_0
    "Reference point to resolve inertia and cog relative to";
  Real T[3,3]=frame_resolve.R.T
    "Orientation to resolve the inertia and cog relative to";
  MB.Interfaces.Frame_resolve frame_resolve
    "Frame to resolve the total mass and inertia matrix into" annotation (
     Placement(transformation(
        extent={{-16,-16},{16,16}},
        rotation=90,
        origin={0,-100})));
 parameter MassProperties massProperties=MassProperties()
    "Pointer to the external mass properties object";
protected
  outer Modelica.Mechanics.MultiBody.World world;

  MB.Visualizers.Advanced.Shape cog(
    shapeType="sphere",
    r_shape={-radius,0,0},
    length=radius*2,
    width=radius*2,
    height=radius*2,
    r=frame_resolve.r_0 + MB.Frames.resolve1(frame_resolve.R, r_cm),
    color=colour) if calculateTotalMass and animation and world.enableAnimation
    annotation (Placement(transformation(extent={{-8,-10},{12,10}})));
equation
  if calculateTotalMass then
    //Calculate the total mass, inertia and cog position
    (m,r_cm,I_cm) = Functions.getTotalMass(
            massProperties,
            frame_resolve.r_0,
            time);
  else
    //Total mass calculation is disabled
    m = 278.5;
    r_cm = {-0.697, 0, 0.0762};
    I_cm = {{1.477, 0, 0}, {0, 30.188, 0}, {0, 0, 30.188}};
  end if;
  r_cm_0 = frame_resolve.r_0 + MB.Frames.resolve1(frame_resolve.R, r_cm);

  //Handle the case where the system resolve frame is not connected
  if cardinality(frame_resolve) == 0 then
    frame_resolve.r_0 = zeros(3);
    frame_resolve.R = MB.Frames.nullRotation();
  else
    frame_resolve.f = zeros(3);
    frame_resolve.t = zeros(3);
  end if;

  annotation (
    defaultComponentName="totalMass",
    defaultComponentPrefixes="public inner",
    missingInnerMessage="Default totalMass added at the top level",
    Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{
            100,100}}), graphics={Ellipse(
                extent={{-90,42},{-70,22}},
                lineColor={0,0,255},
                fillPattern=FillPattern.Sphere,
                fillColor={170,213,255}),Ellipse(
                extent={{-36,-14},{-8,-42}},
                lineColor={0,0,255},
                fillPattern=FillPattern.Sphere,
                fillColor={170,213,255}),Ellipse(
                extent={{38,30},{58,10}},
                lineColor={0,0,255},
                fillPattern=FillPattern.Sphere,
                fillColor={170,213,255}),Ellipse(
                extent={{64,-34},{84,-54}},
                lineColor={0,0,255},
                fillPattern=FillPattern.Sphere,
                fillColor={170,213,255}),Line(
                points={{-78,-48},{0,-100}},
                color={0,0,255},
                pattern=LinePattern.Dot),Line(
                points={{-22,-28},{0,-100}},
                color={0,0,255},
                pattern=LinePattern.Dot),Line(
                points={{48,20},{0,-100}},
                color={0,0,255},
                pattern=LinePattern.Dot),Line(
                points={{74,-44},{0,-100}},
                color={0,0,255},
                pattern=LinePattern.Dot),Ellipse(
                extent={{-26,16},{10,-18}},
                lineColor={255,0,0},
                pattern=LinePattern.Dot,
                fillPattern=FillPattern.Sphere,
                fillColor={255,170,170}),Ellipse(
                extent={{-88,-38},{-68,-58}},
                lineColor={0,0,255},
                fillPattern=FillPattern.Sphere,
                fillColor={170,213,255}),Line(
                points={{-80,32},{0,-100}},
                color={0,0,255},
                pattern=LinePattern.Dot)}),
    Documentation(info="<html>
<p>This block is used to determine the total mass, inertia and centre of mass position of the model relative to a reference point defined by frame_resolve. If frame_resolve is not connected then the mass properties are calculated relative to the world coordinate system.</p>
<p>For this block to correctly determine the total mass, all the systemMass components must be calculating the mass, inertia and centre of mass position for each system. This in turn means that each component within the model must use an AddToTotal block to add its mass into the system.</p>
<p>There should only be 1 totalMass component at the top level of the model.</p>
</html>",
    revisions="<html>
<table cellspacing=\"0\" cellpadding=\"0\" border=\"0\"><tr>
<td><p><img src=\"modelica://Claytex/Images/claytex_logo_100x35px.gif\"/>&nbsp;&nbsp;&nbsp;</p></td>
<td><p><br><b>Copyright &copy; 2008-2019, Claytex Services Limited</b></p></td>
</tr>
</table>
</html>"));
end TotalMass;
