/*
18.Create a class Counter with a static data member to count the number of
objects created. Define a member function to display the count. Create
multiple objects of this class and display the count after each creation.
*/
#include<iostream>
using namespace std;
class Counter{
  static int count;
  public:
  Counter(){
        count++;
  }
  static void display(){
        cout<<"Number of objects created : "<<count<<endl;
    }
};
int Counter::count = 0;
int main(){
    Counter c1,c2,c3,c4,c5,c6; 
     c1.display();
    return 0;
}

