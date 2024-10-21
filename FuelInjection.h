#ifndef FUELINJECTION_H
#define FUELINJECTION_H
#include <ostream>
class FuelInjection
{
private:
    double _HP;
    int _numberOfInjectors;
    double _BSFC;
    
public:
    FuelInjection(/* args */) =delete;
    FuelInjection(const FuelInjection&)=delete;
    FuelInjection(FuelInjection&&)=delete;
    FuelInjection& operator=(const FuelInjection&)=delete;
    FuelInjection&& operator=(FuelInjection&&)=delete;    
    ~FuelInjection()=default;
 
 FuelInjection(double HP, int numberOfInjectors,double BSFC);

 double hP() const { return _HP; }
 void setHP(double HP) { _HP = HP; }


 double bSFC() const { return _BSFC; }
 void setBSFC(double BSFC) { _BSFC = BSFC; }

 int numberOfInjectors() const { return _numberOfInjectors; }
 void setNumberOfInjectors(int numberOfInjectors) { _numberOfInjectors = numberOfInjectors; }

 
 friend std::ostream &operator<<(std::ostream &os, const FuelInjection &rhs);
};

#endif // FUELINJECTION_H
