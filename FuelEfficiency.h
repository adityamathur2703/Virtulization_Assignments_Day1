#ifndef FUELEFFICIENCY_H
#define FUELEFFICIENCY_H
#include <ostream>

class FuelEfficiency
{
private:
    /* data */
    double _distanceDriven;
    double _FuelConsumed;
public:
    FuelEfficiency(/* args */) =delete;
    FuelEfficiency(const FuelEfficiency&)=delete;
    FuelEfficiency(FuelEfficiency&&)=delete;
    FuelEfficiency& operator=(const FuelEfficiency&)=delete;
    FuelEfficiency&& operator=(FuelEfficiency&&)=delete;    
    ~FuelEfficiency()=default;

FuelEfficiency(double distanceDriven,double FuelConsumed);

double distanceDriven() const { return _distanceDriven; }
void setDistanceDriven(double distanceDriven) { _distanceDriven = distanceDriven; }

double fuelConsumed() const { return _FuelConsumed; }
void setFuelConsumed(double FuelConsumed) { _FuelConsumed = FuelConsumed; }

friend std::ostream &operator<<(std::ostream &os, const FuelEfficiency &rhs);
};

#endif // FUELEFFICIENCY_H
