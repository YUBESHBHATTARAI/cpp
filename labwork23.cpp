/*
23.WAP to overload == operator using friend function.
*/
#include<iostream>
using namespace std;
class A{
    int a;
    public:
  void Input(){
    cout<<"enter the value of a"<<endl;
    cin>> a ;
  }
  friend bool operator==(A &x,A &y);
  void Display(){
    cout<<"value of a is "<<a<<endl;
  }


 };
bool operator==(A &x,A &y){
    return (x.a==y.a);
}
 int main(){
   A a1,a2; 
   cout<<"input for object 1"<<endl;
   a1.Input();
   cout<<"input for object 2"<<endl;
   a2.Input();
   a1.Display();
   a2.Display();
   if(a1==a2){
    cout<<"a1 and a2 are equal"<<endl;
   }
   else {
    cout<<"a1 and a2 are not equal"<<endl;
   }
    return 0;
 }