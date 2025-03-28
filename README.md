# Robot Maze Runner

A C-based autonomous robot project designed to navigate through mazes in a timed environment. This project was implemented on a custom-built microprocessor-based robot using the ROBOTC framework.

## Overview

This robot is equipped with various sensors and motors to autonomously navigate through mazes while following walls and avoiding obstacles. The robot uses a combination of touch sensors, sonar sensors, and light sensors to make intelligent navigation decisions.

## Hardware Components

- **Sensors:**
  - 4 Touch Sensors (Bump Sensors)
  - 1 Sonar Sensor (Distance Measurement)
  - 1 Light Sensor
  - 1 Potentiometer

- **Motors:**
  - 2 Drive Motors (Left and Right)
  - 1 Servo Motor

## Features

- Autonomous maze navigation
- Wall-following capability
- Obstacle avoidance
- Corner detection and recovery
- Real-time sensor processing
- Precise movement control

## Navigation Algorithm

The robot implements a sophisticated navigation system that:
1. Continuously monitors sensor inputs
2. Maintains optimal distance from walls (250-300mm)
3. Implements smart corner handling
4. Uses a combination of movement patterns:
   - Forward/Backward movement
   - Sharp turns (90 degrees)
   - Subtle adjustments (SLeft/SRight)

## Movement Functions

- `Forward()`: Moves the robot forward
- `Back()`: Moves the robot backward
- `Left()`: Performs a 90-degree left turn
- `Right()`: Performs a 90-degree right turn
- `SLeft()`: Subtle left adjustment
- `SRight()`: Subtle right adjustment
- `Stop()`: Stops all motors

## Event Handling

The robot implements an event-driven system that:
- Monitors bump sensors for collisions
- Tracks sonar sensor readings for wall distance
- Triggers appropriate responses based on sensor inputs
- Implements emergency stop functionality

## Technical Details

- Written in C using ROBOTC framework
- Implements real-time sensor processing
- Uses precise motor control for accurate movements
- Includes safety features and collision avoidance

## Usage

The robot operates autonomously once started, following these steps:
1. Continuously monitors sensor inputs
2. Responds to events (collisions, wall proximity)
3. Executes the master navigation plan
4. Adjusts movement based on sensor feedback

## Development

This project was developed as part of a robotics course, focusing on autonomous navigation and sensor integration. The code is optimized for real-time performance and reliable maze traversal.
