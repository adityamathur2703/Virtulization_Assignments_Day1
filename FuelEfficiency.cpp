#include "FuelEfficiency.h"
std::ostream &operator<<(std::ostream &os, const FuelEfficiency &rhs)
{
    os << "_distanceDriven: " << rhs._distanceDriven
       << " _FuelConsumed: " << rhs._FuelConsumed;
    return os;
}

FuelEfficiency::FuelEfficiency(double distanceDriven, double FuelConsumed) : _distanceDriven{distanceDriven}, _FuelConsumed{FuelConsumed}
{
}