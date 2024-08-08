/*  Write a program that increases an integer value by 1 (one) overloading + + operator. */
#include<iostream>
using namespace std;
class number{
    int a;
    public:
    void getdata(){
     cout<<"Enter the data "<<endl;
     cin>>a;
    }
     void operator++(int ){
       a++;
     }
     void display(){
        cout<<a<<endl;
     }
};
int main(){

    number n1;
    n1.getdata();
    cout<<"before overloading"<<endl;
    n1.display();
    n1++;
      cout<<"after overloading"<<endl;
    n1.display();

return 0;
}