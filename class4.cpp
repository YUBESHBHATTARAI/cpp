/* Create a class named Example with a constructor and a destructor. Demonstrate the order in which the constructor and destructor are called when an object of the class is created and destroyed */
#include <iostream>
using namespace std;
class Example
{
private:
    int x;
    int y;

public:
    Example()
    {
    }
    ~Example()
    {
        cout << "Destructor called!" << endl;
    }
    void display()
    {
        cout<<"constructor is created!"<<endl;
    }
};
int main()
{
    Example e;
    e.display();


    return 0;
}