#include <iostream>
#include <cstring>
using namespace std;
class Actor
{
    char name[30];
    int rating;

public:
    Actor(const char *n, int r) : rating(r)
    {
        strncpy(name, n, sizeof(name)-1);
        name[(sizeof(name) - 1)] = '\0';
    }
    void Display()
    {
        if (rating > 5)
            cout << "Name:" << name << " , Rating:" << rating << endl;
    }
};
int main()
{
    Actor a1("hey", 2);
    Actor a2("gey", 8);
    Actor a3("they", 6);
    cout << "The ratings are below " << endl;
    a1.Display();
    a2.Display();
    a3.Display();

    return 0;
}