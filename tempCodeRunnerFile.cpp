#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time add(Time t) {
        Time result;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes %= 60;
        return result;
    }

    void display() {
        std::cout << "Total time: " << hours << " hours " << minutes << " minutes" << std::endl;
    }
};

int main() {
    Time t1(2, 30);
    Time t2(1, 45);

    Time total = t1.add(t2);
    total.display();

    return 0;
}