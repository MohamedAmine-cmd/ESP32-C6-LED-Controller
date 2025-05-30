#include "LedControl.h"

LedControl::LedControl(){
  pinMode(RGB_BUILTIN, OUTPUT);
  digitalWrite(RGB_BUILTIN, LOW);
  this->led_status = false;
}

void LedControl::LedOn(){
  digitalWrite(RGB_BUILTIN, HIGH);
  this->led_status = true;
}

void LedControl::LedOff(){
  digitalWrite(RGB_BUILTIN, LOW);
  this->led_status = false;
}

bool LedControl::getLedStatus(){
  return this->led_status;
}

LedControl::~LedControl(){}