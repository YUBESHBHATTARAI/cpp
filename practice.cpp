#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A(int c, int d)//parameterizeed
    {
        a = c;
        b = d;
    }
    A(A &x)//copy constructor
    {
        a = x.a;
        b = x.b;
    }
    void Display()
    {
        cout << "a is :" << a << " b is :" << b << endl;
    }
};
int main()
{
    A obj1();
    A obj2(2, 4);
    A obj3(obj2);
    obj3.Display();
    return 0;
}