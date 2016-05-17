#include "PEN.h"
#include "FOUNTAINPEN.h"
#include "ROLLERBALLPEN.h"
#include <iostream>
#include <string>
 
 using namespace std;
 void WriteWithPen(Pen &pen){
 cout << pen.drawLine() << endl;
 cout << pen.drawCircle() << endl;
 }
 int main(){
 FountainPen fp;
 WriteWithPen(fp);
 RollerBallPen rbp("A Pen that Uses a Roller Ball");
 WriteWithPen(rbp);
 Pen pen;
 WriteWithPen(pen);
}
