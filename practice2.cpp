/*Write programs to add two object of distance class with data members feet and inch by using by using member function*/
#include<iostream>
using namespace std;
class Distance {
 int feet,inch;
 public:
 void getdata(){
    cout<<"Enter feet and inch"<<endl;
    cin>>feet>>inch;
 }
    Distance operator +(Distance d2)
     {
     Distance d3;
     d3.feet=feet+d2.feet;
     d3.inch=inch+d2.inch;
     d3.feet=d3.feet+d3.inch/12;
     d3.inch=d3.inch%12;
     return d3;
     }
  void display(){
    cout<<feet<<" feet "<<inch<<" inch "<<endl;
  }
};
int main(){
    Distance d1,d2,d3;
    cout<<"inputing data..."<<endl;
    d1.getdata();
    d2.getdata();
    
    d3=d1+d2;//d3=d1.operator+(d2);

    cout<<"the required data is "<<endl;
    d3.display();
    return 0;
}