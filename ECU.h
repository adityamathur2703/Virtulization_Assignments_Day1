#ifndef ECU_H
#define ECU_H
#include<memory>
#include<functional>
#include <ostream>
#include "EngineTorque.h"
#include "FuelEfficiency.h"
#include "FuelInjection.h"
#include "IgnitionState.h"
#include "EngineTemp.h"

class ECU
{
private:
    EngineRPM*  _EngineRPM;
    FuelEfficiency* _FuelEfficiency;
    FuelInjection* _FuelInjection;
    IgnitionStateEnum _IgnitionState; 
    EngineTemp temp;
public:
    ECU(/* args */) =delete;
    ECU(const ECU&)=delete;
    ECU(ECU&&)=delete;
    ECU& operator=(const ECU&)=delete;
    ECU&& operator=(ECU&&)=delete;    
    ~ECU()=default;

      
    ECU(EngineRPM* RPM, FuelEfficiency* Efficiency, FuelInjection* Injection, IgnitionStateEnum Ignition ,EngineTemp Temp);

    EngineRPM* engineRPM() const { return _EngineRPM; }
    void setEngineRPM(EngineRPM* EngineRPM) { _EngineRPM = EngineRPM; }

    FuelEfficiency* fuelEfficiency() const { return _FuelEfficiency; }
    void setFuelEfficiency(FuelEfficiency* FuelEfficiency) { _FuelEfficiency = FuelEfficiency; }

    FuelInjection* fuelInjection() const { return _FuelInjection; }
    void setFuelInjection(FuelInjection* FuelInjection) { _FuelInjection = FuelInjection; }

    IgnitionStateEnum ignitionState() const { return _IgnitionState; }
    void setIgnitionState(const IgnitionStateEnum &IgnitionState) { _IgnitionState = IgnitionState; }

    EngineTemp getTemp() const { return temp; }
    void setTemp(const EngineTemp &temp_) { temp = temp_; }

  
    
    friend std::ostream &operator<<(std::ostream &os, const ECU &rhs);
    
    
};

#endif // ECU_H
