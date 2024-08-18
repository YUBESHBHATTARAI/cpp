/*
25.Create a class called Length that has data members meter and centimeter.Overload + operator to add two objects of class Length. (For example, L3= L1 + L2)
*/
#include<iostream>
using namespace std;
class Length
{
    int meter, centimeter;
    public:
    void Input(){
        cout<<"Enter meter: ";
        cin>>meter;
        cout<<"Enter centimeter: ";
        cin>>centimeter;
    }
     Length operator+(Length l2){
        Length l3;
        l3.meter=meter+l2.meter;
        l3.centimeter=centimeter+l2.centimeter;
        l3.meter=l3.meter+l3.centimeter/100;
        l3.centimeter=l3.centimeter%100;
        return l3;
     }
    void Display(){
        cout<<"Length is "<<meter<<"m "<<centimeter<<"cm"<<endl;
    }
};
int main(){
      Length l1,l2,l3;
      l1.Input();
      l2.Input();
      l3=l1+l2;
      l3.Display();


    return 0;
}
