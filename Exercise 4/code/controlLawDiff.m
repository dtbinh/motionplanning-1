function [ vu, omega ] = controlLawDiff( posRi, Mv, Lv, parameters )
%CALCULATECONTROLOUTPUT This function computes the motor velocities for a differential driven robot
backwardAllowed = true;

if Mv == 0
    Cv = [0 , 0]'; % ?
else
    Cv = Lv / Mv; 
end

% current robot position and orientation
x = posRi(1);
y = posRi(2);
theta = posRi(3);

% goal position and orientation
xg = Cv(1);
yg = Cv(2);
% thetag = Cv(3); %?

% compute control quantities
rho = sqrt((xg-x)^2+(yg-y)^2);  % pythagoras theorem, sqrt(dx^2 + dy^2)
lambda = atan2(yg-y, xg-x);     % angle of the vector pointing from the robot to the goal in the inertial frame

alpha = lambda - theta;         % angle of the vector pointing from the robot to the goal in the robot frame
alpha = normalizeAngle(alpha);

beta = lambda; % + thetag;
beta = normalizeAngle(beta);

% Task 3: backwards controller
direction = 1; %default direnction is forward
if backwardAllowed && (abs(alpha) > (1/2 * pi))
    alpha = normalizeAngle(alpha + pi);
    direction = -1;
end

% the following paramerters should be used:
% Task 2:
vu = direction * parameters.Krho * rho; % [m/s]
omega = parameters.Kalpha * alpha + parameters.Kbeta * beta; % [rad/s]

if parameters.useConstantSpeed
    vu1 = vu;
    vu = direction * parameters.constantSpeed;
    omega1 = omega;
    omega = omega1 * vu/(vu1);
end
end
