#ifndef LEDCONTROL_H
#define LEDCONTROL_H

#define RGB_BUILTIN 8

#include "Arduino.h"

class LedControl
{
  public:
    LedControl();
    ~LedControl();
    void LedOn();
    void LedOff();
    bool getLedStatus();

  private:
    bool led_status;

};

#endif