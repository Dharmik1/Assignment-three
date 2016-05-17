#ifndef CHILD_h
#define CHILD_h
#include "PARENT.h"
#include <iostream>
#include <string>
class Child : public Parent {
public:
const char * getName();
};

#endif