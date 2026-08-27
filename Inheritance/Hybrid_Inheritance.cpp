//===> HYBRID INHERITANCE
#include <iostream>
using namespace std;

class Person {
public:
    void introduce() {
        cout << "I am a person\n";
    }
};

class Employee : public Person {
public:
    void work() {
        cout << "Employee is working\n";
    }
};

class Developer : public Employee {
public:
    void code() {
        cout << "Developer is coding\n";
    }
};

class Manager : public Employee {
public:
    void manage() {
        cout << "Manager is managing\n";
    }
};

int main() {

    Developer d;
    Manager m;

    d.introduce();
    d.work();
    d.code();

    m.introduce();
    m.work();
    m.manage();

    return 0;
}