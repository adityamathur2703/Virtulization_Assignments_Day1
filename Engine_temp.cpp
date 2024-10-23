#include "Engine_temp.h"

// Constructor definition
EngineTemperatureControl::EngineTemperatureControl(float activationTemp) 
    : engineTemperature(0), fanActivationTemp(activationTemp), fanStatus(false) {}

// Method to update the engine temperature and control the fan
void EngineTemperatureControl::updateTemperature(float currentTemp) {
    engineTemperature = currentTemp;
    controlFan();  // Check and update fan status based on temperature
}

// Method to control the fan based on the current engine temperature
void EngineTemperatureControl::controlFan() {
    if (engineTemperature >= fanActivationTemp) {
        fanStatus = true;  // Turn on the fan
    } else {
        fanStatus = false; // Turn off the fan
    }
}

// Method to print the current status of the system
void EngineTemperatureControl::printStatus() const {
    std::cout << "Engine Temperature: " << engineTemperature << " °C\n";
    std::cout << "Fan Status: " << (fanStatus ? "ON" : "OFF") << "\n";
}
