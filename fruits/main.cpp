#include "CITRUSFRUIT.h"
#include "LEMON.h"
#include "ORANGE.h"

#include <iostream>

using namespace std;
 void PrintTheFruits(CitrusFruit &fruit){
     cout << "The Fruit is a " << fruit.getName()
          << " and has a pH " << fruit.getPh() << endl;
 }
 
 int main(){
 
     Lemon lemon(2.0);
     
     Orange orange(0.5);
     
     PrintTheFruits(lemon);
     PrintTheFruits(orange);

 //This is perfectly legal!
 
  Lemon le1(1.4), le2(1.5), le3(1.234);
 
  Orange or1(0.4), or2(0.3), or3(0.5);
 
  CitrusFruit *cfruits[] = {&le1, &le2, &le3, &or1, &or2, &or3};
 
  for(int i = 0; i < 6; i++)
 
      cout << cfruits[i]->getName() << " has a pH "
      
           << cfruits[i]->getPh() << endl;
     
}