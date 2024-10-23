#include "ECU.h"
#include "Functionalities.h"
#include "Engine_temp.h"
#include<iostream>

int main()
{
    DataConatiner data;
    CreateObject(data);
    // Display(data);
    float defaultActivationTemp = 90.0;  // Calibration parameter for fan activation

    EngineTemperatureControl tempControl(defaultActivationTemp);

    tempControl.updateTemperature(85.0);
    tempControl.printStatus();

    tempControl.updateTemperature(95.0);
    tempControl.printStatus();
    std::cout<<"\nMilage is :"<<Milage(data);
    std::cout<<"\nFuel Injection :"<<Fuel_injection(data);
    std::cout<<"\nEngine Tourqe :"<<Eng_Torque(data);
    std::cout<<"\nIgnition state :"<<Ignition(data)<<"\n";
    // std::cout<<"\nEngine Temperature :"<< DispalyTemp(data)<<"\n";

    return 0;
}
