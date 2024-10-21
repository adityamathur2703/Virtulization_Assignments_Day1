#ifndef ENGINERPM_H
#define ENGINERPM_H
#include <ostream>

class EngineRPM
{
private:
    /* data */
    double _HP;
    double _RPM;

public:

    EngineRPM(/* args */) =delete;
    EngineRPM(const EngineRPM&)=delete;
    EngineRPM(EngineRPM&&)=delete;
    EngineRPM& operator=(const EngineRPM&)=delete;
    EngineRPM&& operator=(EngineRPM&&)=delete;    
    ~EngineRPM()=default;


                            // destructor enabled
    EngineRPM(double HP, double RPM);
    double rPM() const { return _RPM; }
    void setRPM(double RPM) { _RPM = RPM; }

    double hP() const { return _HP; }
    void setHP(double HP) { _HP = HP; }

    friend std::ostream &operator<<(std::ostream &os, const EngineRPM &rhs);
};

#endif // ENGINERPM_H
