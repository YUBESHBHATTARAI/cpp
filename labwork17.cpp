/* 
17.Write a class Complex to represent complex numbers with real and
imaginary parts. Define a member function to add two complex numbers.
Pass objects of the Complex class to this function and display the result
*/
#include<iostream>
using namespace std;
class Complex{
  int real;
  int img;
    public:
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }
   Complex sum(Complex o1,Complex o2){
        Complex o3;
        o3.real=o1.real+o2.real;
        o3.img=o1.img+o2.img;
        
        return o3;
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main(){
    Complex c1(3,4),c2(5,6),c3;
    c3=c3.sum(c1,c2);
    cout<<"Complex number : ";
    c3.display();
    return 0;
}

