#include "ECU.h"
#include "Functionalities.h"
#include<iostream>

int main()
{
    DataConatiner data;
    CreateObject(data);
    // Display(data);
    std::cout<<"\nMilage is :"<<Milage(data);
    std::cout<<"\nFuel Injection :"<<Fuel_injection(data);
    std::cout<<"\nEngine Tourqe :"<<Eng_Torque(data);
    std::cout<<"\nIgnition state :"<<Ignition(data);
    std::cout<<"\nEngine Temperature :"<< DispalyTemp(data)<<"\n";

    return 0;
}
