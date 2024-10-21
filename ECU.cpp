#include "ECU.h"


ECU::ECU(EngineRPM *RPM, FuelEfficiency *Efficiency, FuelInjection *Injection, IgnitionStateEnum Ignition, EngineTemp Temp)
{
    _EngineRPM=RPM;
    _FuelEfficiency=Efficiency;
    _FuelInjection=Injection;
    _IgnitionState =Ignition;
    temp=Temp;
}

std::ostream &operator<<(std::ostream &os, const ECU &rhs) {
    os << "_EngineRPM: " << rhs._EngineRPM
       << " _FuelEfficiency: " << rhs._FuelEfficiency
       << " _FuelInjection: " << rhs._FuelInjection
       << " _IgnitionState: " << static_cast<int>(rhs._IgnitionState)
       << " temp: " <<static_cast<int>( rhs.temp);
    return os;
}
