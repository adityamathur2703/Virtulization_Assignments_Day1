#ifndef IGNITIONSTATE_H
#define IGNITIONSTATE_H
#include "EnumState.h"
#include <string>
#include <ostream>
class IgnitionState
{
private:
  /* data */
  IgnitionStateEnum _state;

public:
     IgnitionState(/* args */) =delete;
    IgnitionState(const IgnitionState&)=delete;
    IgnitionState(IgnitionState&&)=delete;
    IgnitionState& operator=(const IgnitionState&)=delete;
    IgnitionState&& operator=(IgnitionState&&)=delete;    
    ~IgnitionState()=default;
                             // destructor enabled
  IgnitionState(IgnitionStateEnum state);
  IgnitionStateEnum state() const { return _state; }
  void setState(const IgnitionStateEnum &state) { _state = state; }

  friend std::ostream &operator<<(std::ostream &os, const IgnitionState &rhs);
};

#endif // IGNITIONSTATE_H
