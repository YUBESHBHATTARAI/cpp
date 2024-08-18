/*
27.Write a program to demonstrate the user-defined to user-defined data
conversion routine located in the destination class.
*/
#include<iostream>
using namespace std;
class Time{
 int hour,minute;
 public:
 Time(int h,int m){
    hour=h;
    minute=m;
 }
  int getHours(){
    return hour;
  }
  int getMinute(){
    return minute;
  }
    void Display(){
        cout<<"Time is "<<hour<<" hr "<<minute<<" min"<<endl;
    }
};
class Minute{
 int mins;
   public:
   Minute(){
    mins=0;
   }
 Minute(Time &t1){
 mins=t1.getHours()*60+t1.getMinute();
 }

 
 void Display(){
        cout<<"Minute is :"<<mins<<endl;
    }
};
int main(){
      Time t1(2,30);
      Minute m1;
      m1=t1;
      t1.Display();
      m1.Display();
    return 0;
}