#include<iostream>
using namespace std;
class rectangle
{
private:
int length;
int breadth;
static int count;
public:
void setdata(int l, int b)
{
length = l;
breadth = b;
count++;
}
static void displaycount()
{
cout<<count<<endl;
}
};
int rectangle::count;
int main()
{
rectangle r1, r2, r3;
rectangle :: displaycount();
r1.setdata(6, 5);
r2.setdata(8, 4);
r3.setdata(15, 7);
rectangle :: displaycount();
return 0;

}