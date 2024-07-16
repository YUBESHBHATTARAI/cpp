#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    Student() : name(""), age(0) {}

    Student(std::string n, int a) : name(n), age(a) {}

    void setName(const std::string& n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void displayInfo() const {
        std::cout << "Student Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student student;
    student.setName("John Doe");
    student.setAge(20);
    student.displayInfo();  
    return 0;
}
