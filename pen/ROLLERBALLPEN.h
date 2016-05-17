#ifndef ROLLERBALLPEN_h
#define ROLLERBALLPEN_h
#include "PEN.h"
#include "FOUNTAINPEN.h"

#include <iostream>
#include <string>

class RollerBallPen : public Pen{

public:

    RollerBallPen(std::string pen_name) : Pen(pen_name) {}
 
 RollerBallPen() : Pen(std::string("RollerBallPen")){}
 
 virtual std::string drawLine();
 
 virtual std::string drawCircle();
 
    
};

#endif