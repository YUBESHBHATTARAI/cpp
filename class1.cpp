/* Define a class named Rectangle with data members length and width, and a member function calculateArea() that calculates and returns the area of the rectangle. Create an object of this class and display the calculated area.*/ 
#include<iostream>
using namespace std;
class rectangle{
private:
int length,width,area;
public:
 rectangle (int l,int w){
    length=l;
    width=w;
}

void getdata(){
    cout<<"Enter the length :"<<endl;
    cin>>length;
    cout<<"Enter the  width:"<<endl;
    cin>>width;
}

void display(){
    cout<<"The length of rectangle is :"<<length<<endl;
    cout<<"The width of rectangle is :"<<width<<endl;
    cout<<"The area of rectangle is :"<<calculateArea()<<endl;
}

int calculateArea()
{  
    return length*width;
}

};
int main(){
    rectangle r1(5,5);   
    r1.getdata();
    r1.display();
    r1.calculateArea();
return 0;
}