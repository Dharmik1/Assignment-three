#ifndef ORANGE_h
#define ORANGE_h
#include "CITRUSFRUIT.h"
#include "LEMON.h"
#include <iostream>
#include<string>

 class Orange : public CitrusFruit {

 public:
 
  Orange(float ph) : CitrusFruit(ph){}
 
  const char * getName();
 
  float getPh();
 
};

#endif
