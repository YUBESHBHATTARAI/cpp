/*
22.WAP to swap private data members of two classes using friend function.
*/
#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
     void Input(){
        cout<<"Enter the value of X"<<endl;
        cin>>x;

     }
    friend void swap(A &, B &);
    void Display(){
        cout<<"Value of X is "<<x<<endl;
    }
};
class B{
    int y;
    public:
    void Input(){
        cout<<"Enter the value of Y"<<endl;
        cin>>y;
    }
     friend  void  swap(A &, B &);

      void Display(){
        cout<<"Value of Y is "<<y<<endl;
    }
};
void swap(A &p, B &q){
  
    int temp=p.x;
    p.x=q.y;
    q.y=temp;
  }
int main(){
    A p;
    B q;
    
     p.Input();
     q.Input();
     cout<<"Before swapping"<<endl;
      p.Display();
      q.Display();
      swap(p,q);
    cout<<"After swapping"<<endl;
      p.Display();
      q.Display();
    return 0;
}