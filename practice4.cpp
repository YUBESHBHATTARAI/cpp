/*  Write a program to multiply any two private numbers of two different
classes using friend function. */
#include<iostream>
using namespace std;
class num1;
class num2{
 private:
 int n2;
 public:
 void getdata(){
    cout<<"enter the number of first class"<<endl;
    cin>>n2;
 }
 friend int mult(num1,num2);
 void display(){
    cout<<n2<<endl;
 }
 
};
class num1{
 private:
 int n1;
 public:
 void getdata(){
    cout<<"enter the number of second class"<<endl;
    cin>>n1;
 }
 friend int mult(num1,num2);
 void display(){
    cout<<n1<<endl;
 }
};

 int mult(num1 obj1,num2 obj2){
    return obj1.n1*obj2.n2;
 } 

 int main(){
    num1 a;
    num2 b;
    a.getdata();
    b.getdata();
    int result=mult(a,b);
    cout<<"result is "<<result<<endl;
    return 0;
 }