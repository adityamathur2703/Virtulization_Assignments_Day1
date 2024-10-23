#ifndef ENGINE_TEMPERATURE_CONTROL_H
#define ENGINE_TEMPERATURE_CONTROL_H

#include <iostream>

class EngineTemperatureControl {
public:
    // Public member variables
    float engineTemperature;  // Input variable (sensor reading)
    float fanActivationTemp;  // Calibration parameter
    bool fanStatus;           // Fan status (ON/OFF)

    // Constructor
    EngineTemperatureControl(float activationTemp);

    // Method to update engine temperature
    void updateTemperature(float currentTemp);

    // Method to control the fan based on engine temperature
    void controlFan();

    // Method to print the current system status
    void printStatus() const;
};

#endif // ENGINE_TEMPERATURE_CONTROL_H
