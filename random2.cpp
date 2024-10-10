#include<iostream>
using namespace std;
class Dollar;
class Rupee{
 float amount;
   public:
    Rupee(float a){
        amount=a;
    }
    void Display(){
        cout<<"Rupee: "<<amount<<endl;
    }

};
class Dollar{
  float amount;
    public:
    Dollar(float a){
        amount=a;
    }
    void Display(){
        cout<<"Dollar: "<<amount<<endl;
    }

    operator(amount){
        
    }

    
};


