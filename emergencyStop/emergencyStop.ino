#include <Arduino.h>
#include "IRSensor.h"


const int numSensors = 2; // number of sensors
const int safeDist0 = 10; // cm
const int safeDist1 = 15; // cm

IRSensor sensors[numSensors] = {
    IRSensor(A0, safeDist0),
    IRSensor(A1, safeDist1)
};


void setup() {
    Serial.begin(9600);
    for (int i = 0; i < numSensors; i++) {
        sensors[i].begin();
    }
}

void loop() {
    for (int i = 0; i < numSensors; i++) {
        if (sensors[i].isBelowSafeDist()) {
            // Send data 
            Serial.print("STOP: Sensor ");
            Serial.print(i);
            Serial.print(" Distance: ");
            Serial.println(sensors[i].getDistance());
        }
    }
    delay(500);
}