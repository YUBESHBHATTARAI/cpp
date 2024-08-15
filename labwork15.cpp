/*
15.Create a class called Distance with two data members inch and feet.
Provide Constructor and different member function with the following
operations.
▪ To input data for Distance objects.
▪ To show the data of Distance objects.
▪ Member function to add two Distance objects passed as object as
function arguments and then display the result
*/
#include<iostream>
using namespace std;
 class Distance{
    int inch;
    int feet;
    public:

   Distance(int i = 0, int f = 0) {
        inch = i;
        feet = f;
    }


     Distance sum(Distance obj1, Distance obj2) {
       Distance obj3;
        obj3.feet=obj1.feet+obj2.feet;

        obj3.inch=obj1.inch+obj2.inch;

        obj3.feet=obj3.feet+obj3.inch/12;

        obj3.inch=obj3.inch%12;

        return obj3;
    }
    void display(){
       cout << "Feet: " << feet << ", Inches: " << inch << endl;
    
    }
 };
 int main(){
    Distance d3;
  Distance d1(5, 8);
    Distance d2(5, 8);
     d3=d3.sum(d1,d2);
    d3.display();
    return 0;
 }