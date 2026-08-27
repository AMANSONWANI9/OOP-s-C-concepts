//===> HIERARCHICAL INHERITANCE
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing" << endl;
    }
};

int main() {

    Dog d;
    Cat c;

    d.eat();      // inherited from Animal
    d.bark();     // Dog's own function

    c.eat();      // inherited from Animal
    c.meow();     // Cat's own function

    return 0;
}