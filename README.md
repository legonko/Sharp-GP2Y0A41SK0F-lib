# IR-Sensor Library

This repository contains an Arduino library for interfacing with the **GP2Y0A41SK0F** IR distance sensor. The library provides easy-to-use methods for reading distance values and checking if a specified threshold is exceeded.

## Installation

```sh
git clone https://github.com/yourusername/IRSensor.git
```

## Usage

Include the IR-Sensor library in your sketch and create IRSensor objects for each sensor you are using (e.g. see [emergencuStop.ino](https://github.com/legonko/Sharp-GP2Y0A41SK0F-lib/blob/main/emergencyStop/emergencyStop.ino)).

## Library Reference

### Construcor

 `IRSensor(int pin, int safeDist)` 
- `pin`: The analog pin to which the sensor is connected.
- `safeDist`: The distance threshold for the sensor.

### Methods

- `void begin()`: Initializes the sensor.
- `int getDistance()`: Returns the distance measured by the sensor.
- `bool isBelowSafeDist()`: Returns true if the measured distance is below safe distance.
- `int getSafeDist()`: Returns the safe distance value.
- `void setSafeDist(int newSafeDist)`: Sets a new safe distance value.
- `int getPin()`: Returns the analog pin number the sensor is connected to.