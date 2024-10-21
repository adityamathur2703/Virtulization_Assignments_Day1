#include "FuelInjection.h"


FuelInjection::FuelInjection(double HP, int numberOfInjectors, double BSFC):_HP{HP},_numberOfInjectors{numberOfInjectors},_BSFC{BSFC}
{
}
std::ostream &operator<<(std::ostream &os, const FuelInjection &rhs) {
    os << "_HP: " << rhs._HP
       << " _numberOfInjectors: " << rhs._numberOfInjectors
       << " _BSFC: " << rhs._BSFC;
    return os;
}
