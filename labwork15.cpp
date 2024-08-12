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
    Distance(int i,int f){
        inch=i;
        feet=f;
    }
    void sum(Distance obj1,Distance obj2){
       Distance obj3;
        obj3.feet=obj1.feet+obj2.feet;
        obj3.inch=obj1.inch+obj2.inch;
        obj3.feet=obj3.feet+obj3.inch/12;
        obj3.inch=obj3.inch%12;
        return obj3;
    }
    void display(){
        cout<<"The sum is "<<sum()<<endl;
    
    }
 };
 int main(){
    Distance obj1,obj2,obj3;
    obj1(2,5);
    obj2(3,6);
    obj3=obj3.sum(obj1,obj2);
    obj3.display();
    return 0;
 }