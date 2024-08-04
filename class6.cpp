/* Create a class Time with data members hours and minutes. Implement a constructor and a function add(Time t) that adds two time objects and returns the result as a new time object. Create two objects, add them using the function, and display the total time.*/

#include <iostream>
using namespace std;
class time
{
private:
    int hours, minutes;

public:
    time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    time add(time t)
    {
        time result;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;
        result.hours = t.hours + t.minutes / 60;
        result.minutes=t.minutes % 60;
        return result;
    }
    void display(){
        cout<<"hours is "<<hours<<endl;
        cout<<"minutes is "<<minutes<<endl;
    }
};
int main(){
    time t;
    time t1(6,80);
    time t2(3,90);
   time =t1.add(t2);
    total.dispaly();
 

    return 0;
}