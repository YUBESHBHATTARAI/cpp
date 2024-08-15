/*
21.WAP to add, private data members of two classes using friend function
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
    friend int sum(A , B);
};
class B{
    int y;
    public:
    void Input(){
        cout<<"Enter the value of Y"<<endl;
        cin>>y;
    }
     friend  int  sum(A , B);
};
  int sum(A p,B q){

   return (p.x+q.y);
  }
int main(){
    A p;
    B q;
     p.Input();
     q.Input();
    int result=sum(p,q);
    cout<<"Sum of X and Y is "<<result<<endl;

    return 0;
}