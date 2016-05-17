#include "ROLLERBALLPEN.h"
/*virtual*/ std::string RollerBallPen:: drawLine() {
 return getName().append(" draws a line.");
 }
/* virtua*/ std::string RollerBallPen::drawCircle(){
 return getName().append(" draws a circle.");
 }