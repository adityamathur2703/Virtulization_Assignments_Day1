#include "EngineTorque.h"
std::ostream &operator<<(std::ostream &os, const EngineRPM &rhs) {
    os << "_HP: " << rhs._HP
       << " _RPM: " << rhs._RPM;
    return os;
}


EngineRPM::EngineRPM(double HP, double RPM):_HP{HP},_RPM{RPM}
{
}
