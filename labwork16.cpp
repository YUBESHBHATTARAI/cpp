/* 
16.Write a program to demonstrate the objects are destroyed in the reverse
order from their creation in the constructor
*/

#include<iostream>
using namespace std;
class Example {
    int id;
 public:
   Example (int i){
       id=i;
   cout<<"Constructing example no."<<id<<endl;
}
  ~Example(){
 cout<<"Distructing example no."<<id<<endl;
  };
};
int main(){
    Example h1(1);
    Example h2(2);
    Example h3(3);
    return 0;
}