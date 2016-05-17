#ifndef LEMON_h
#define LEMON_h
#include "CITRUSFRUIT.h"
#include <iostream>
#include <string>

class Lemon : public CitrusFruit {
 
 public:
 
  Lemon(float ph) : CitrusFruit(ph){}
 
  const char * getName();
 
  float getPh();
 };
 
#endif