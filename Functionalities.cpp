#include "Functionalities.h"

void CreateObject(DataConatiner &data)
{
    data.push_back(std::make_shared<ECU>(new EngineRPM(1499,20000),new FuelEfficiency(10000,1000),new FuelInjection(1498,4,100),IgnitionStateEnum::ON,EngineTemp::COOL));
}

void Display(DataConatiner &data)
{
    for(auto i: data){
        std::cout<<i.get()->engineRPM()->hP()<<"\n";
    }
}

double Milage(DataConatiner &data)
{
    double milage=0.0f;
    for(auto i:data)
    {
        milage=(i->fuelEfficiency()->distanceDriven())/(i->fuelEfficiency()->fuelConsumed());
    }
    return milage;
}

std::string Ignition(DataConatiner &data)
{

    std::string ans;
    for(auto i:data){
        if(i->ignitionState()==IgnitionStateEnum::ON){
            ans="ON";
        }
        else if(i->ignitionState()==IgnitionStateEnum::OFF){
            ans="OFF";
        }
        else{
            ans="ACC";
        }
    }

    return ans;
    
}

double Eng_Torque(DataConatiner &data)
{
    double torque=0.0f;
    for(auto i:data){
        torque=(i->engineRPM()->hP()*5252)/i->engineRPM()->rPM();
    }
    return torque;
}

double Fuel_injection(DataConatiner &data)
{
    double injector=0.0f;
    for(auto i:data){
        injector=(i->engineRPM()->hP()*i->fuelInjection()->bSFC())/i->fuelInjection()->numberOfInjectors();
    }
    return injector;
}

std::string DispalyTemp(DataConatiner &data)
{
    std::string ans;
    for(auto i:data){
        if(i->getTemp()==EngineTemp::COOL){
            ans="COOL";
        }
        else if(i->getTemp()==EngineTemp::HEAT){
            ans="HEAT";
        }
        else{
            ans="NORMAL";
        }
    }

    return ans;
}
