#include "IRSensor.h"


IRSensor::IRSensor(int pin, int safeDist)
    : pin(pin), safeDist(safeDist) {}

void IRSensor::begin() {
    pinMode(pin, INPUT);
    }

int IRSensor::getDistance() {
    // For 5 V sensor and 10-bit ADC
    float volts = analogRead(pin) * 0.0048828125;  // value from sensor * (5/1024)
    int distance = 13*pow(volts, -1); // calculated from datasheet graph
    return distance;
    }

bool IRSensor::isBelowSafeDist() {
    return getDistance() < safeDist;
    }

int IRSensor::getSafeDist() {
    return safeDist;
    }

void IRSensor::setSafeDist(int newSafeDist) {
    safeDist = newSafeDist;
    }

int IRSensor::getPin() {
    return pin;
    }

