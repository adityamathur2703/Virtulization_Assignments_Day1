#include<iostream>
#include "ECU.h"
#include<vector>

using DataConatiner=std::vector<std::shared_ptr<ECU>>;

void CreateObject(DataConatiner & data);
void Display(DataConatiner &data);
double Milage(DataConatiner & data);
std::string Ignition(DataConatiner &data);
double Eng_Torque(DataConatiner &data);
double Fuel_injection(DataConatiner &data);
std::string DispalyTemp(DataConatiner &data);