/*
20.Write a program for illustrating default constructor, parameterized
constructor and copy constructor.
*/
#include <iostream>
using namespace std;
class Constructor
{
    int a;
    int b;

public:
    Constructor()
    {
        a = 0;
        b = 0;
    }
    Constructor(int x, int y)
    {
        a = x;
        b = y;
    }
    Constructor(Constructor & d)
    {
        a = d.a;
        b = d.b;
    }
    void display()
    {
        cout << "a= " << a ;
        cout << ", b=" << b << endl;
    }
};
int main()
{
    Constructor c1;//default Constructor 
    Constructor  c2(5, 1) ;//parameterized constructor
    Constructor c3 (c2);//copy constructor
    c1.display();
    c2.display();
    c3.display();
    return 0;
}