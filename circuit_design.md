# Circuit Design

## Project Overview

This project is an obstacle-avoiding robot designed using Arduino.

The robot uses an ultrasonic sensor to detect obstacles in front of it and changes its movement based on the measured distance.

## Main Components

- Arduino
- Ultrasonic sensor
- DC motors
- N-channel MOSFETs / transistor motor control
- Battery
- Robot chassis

## Working Principle

The ultrasonic sensor sends an ultrasonic pulse and measures the time taken for the echo to return.

The Arduino uses this time to calculate the distance to an obstacle.

If the detected obstacle is farther than the defined threshold, the robot continues moving forward.

If an obstacle is detected within the threshold:

1. The robot stops.
2. The programmed turning action is performed.
3. The robot continues moving forward.

## Motor Control

Because a conventional motor driver was not used, the motor-control circuit is designed using transistor/MOSFET switching.

The Arduino provides the control signal to the switching devices, which control the current flowing through the motors.

## Current Limitations

- The project is currently tested as a Tinkercad simulation.
- Turning capability is limited by the current design.
- Motor control is not as sophisticated as a dedicated motor-driver circuit.
- Physical testing is still required.

## Future Work

- Build the physical robot.
- Test the motor-control circuit with real motors.
- Improve turning accuracy.
- Improve obstacle detection.
- Test the robot on different surfaces.
- Optimize the circuit and code.
