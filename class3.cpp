/* Create a class Point with data members x and y. Implement a default constructor that initializes x and y to 0, and a parameterized constructor that accepts two integer values to initialize x and y. Create objects using both constructors and display their values.*/
#include<iostream>
using namespace std;
class Point{
private:
int x,y;
public:
Point() {
 x=0;
 y=0;
}
Point(int a,int b){
    x=a;
    y=b;
}
void display(){
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}
};
int main()
{
    Point p1;
    p1.display();
    Point p2(5,6);
    p2.display();
    return 0;
}