#include "Engine_temp.h"

EngineTemperatureControl::EngineTemperatureControl(float activationTemp) 
    : engineTemperature(0), fanActivationTemp(activationTemp), fanStatus(false) {}

void EngineTemperatureControl::updateTemperature(float currentTemp) {
    engineTemperature = currentTemp;
    controlFan();  // Check and update fan status based on temperature
}

void EngineTemperatureControl::controlFan() {
    if (engineTemperature >= fanActivationTemp) {
        fanStatus = true;  // Turn on the fan
    } else {
        fanStatus = false; // Turn off the fan
    }
}

void EngineTemperatureControl::printStatus() const {
    std::cout << "Engine Temperature: " << engineTemperature << " °C\n";
    std::cout << "Fan Status: " << (fanStatus ? "ON" : "OFF") << "\n";
}
