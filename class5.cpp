/* Create a class Number with a data member value. Implement a parameterized constructor and a function modifyValue(Number num) that doubles the value of the input number object. Create an object, pass it to modifyValue, and display the modified value. */
#include <iostream>
using namespace std;
class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    void modifyValue(Number &num)
    {
        num.value *= 2;
    }

    void display()
    {
        cout << "the modified value is " << value << endl;
    }
};

int main()
{
    Number n(3);
    n.modifyValue(n);
    n.display();
    return 0;
}