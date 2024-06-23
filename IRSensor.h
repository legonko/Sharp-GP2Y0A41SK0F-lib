#ifndef IRSENSOR_H
#define IRSENSOR_H

#include <Arduino.h>

/*
Class for Sharp GP2Y0A41SK0F IR-sensor
Distance measuring range : 4 to 30 cm
Operating supply voltage: 5 V
Datasheet: https://global.sharp/products/device/lineup/data/pdf/datasheet/gp2y0a41sk_e.pdf
*/

class IRSensor {
    public:
        /*
        Constructor for the IRSensor class.
        pin: The analog pin the sensor is connected to
        safeDist: The distance threshold for the sensor
         */
        IRSensor(int pin, int safeDist);
        
        // Initializing the sensor
        void begin();

        // Return current measured distance
        int getDistance();

        /* 
        Checks if measured distance is below safe distance
        Return true if the distance is below safe distance, false otherwise
         */
        bool isBelowSafeDist();

        // Return current safe distance value
        int getSafeDist();

        // Sets new safe distance value
        void setSafeDist(int newSafeDist);

        // Return pin number the sensor is connected to
        int getPin();

    private:
        int pin; // The analog pin the sensor is connected to
        int safeDist; // The distance threshold for the sensor
};

#endif