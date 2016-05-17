#include "PARENT.h"
#include "CHILD.h"
#include <iostream>
#include <string>
int main(){
Child child;
Parent &cParent = child;
std::cout << "cParent is a " << cParent.getName() << std::endl;
return 0;
};