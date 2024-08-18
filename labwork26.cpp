/*
26.Write a conversion routine in c++ that can convert user-defined data distance to basic data float. Assume that the class distance contains two data members (feet (integer type) and inch (floating point type). NOTE: 1-meter = 3.33 feet and 1 feet = 12 inches)
*/
#include<iostream>
using namespace std;
 class Distance {
   int feet;
   float inch;
   public:
   Distance(int f,float i){
    feet=f;
    inch=i;
   }
   void Display(){
    cout<<"distance is "<<feet<<" ft "<<inch<<" in "<<endl;
   }

   operator float(){
    float meter;
   float  Totalinch=feet*12+inch;
    meter= Totalinch/(3.33*12);
    return meter;
   }
   
 };
int main(){
    Distance d1(2,5.5);
    float meter=d1;
    d1.Display();
    cout<<" When it is converted in meters ,the values becomes "<<meter<<"m"<<endl;
    return 0;
}