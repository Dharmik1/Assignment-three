#ifndef CITRUSFRUIT_h
#define CITRUSFRUIT_h

#include <iostream>
#include <string>

class CitrusFruit{

protected:

 float ph;
 
public:

   CitrusFruit(float ph) : ph(ph){}
 
   virtual const char * getName();
 
   virtual float getPh();
 
 };
 
#endif