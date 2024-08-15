/*
24.WAP to overload unary minus (-) operator to invert sign of data members of a distance object.
*/
#include<iostream>
using namespace std;
class Distance{
  int meter;
 
  public:
   Distance(){
    meter=0;
   }
   Distance(int m){
    meter=m;
   }
  
  Distance operator-(){
         return (Distance(-meter));
  }
   void Display(){
    cout<<"distance is "<<meter<<"m"<<endl;
   }
  
};
int main(){
    Distance d2;
    Distance d1(10);
    d2=-d1;
    d1.Display();
    cout<<"negated ";
    d2.Display();
    return 0;
}