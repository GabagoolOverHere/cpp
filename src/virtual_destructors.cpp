#include "../algo/euler/euler.h"

class Base {
public:
    Base() { std::cout << "Base Constructed" << std::endl; }

    virtual ~Base() { std::cout << "Base Destroyed" << std::endl; }
};

class Derived : public Base {
public:
    Derived() { std::cout << "Derived Constructed" << std::endl; }

    ~Derived() override { std::cout << "Derived Destroyed" << std::endl; }
};

void virtual_constructors() {
    Base* b = new Base();
    delete b;

    std::cout << "------------------" << std::endl;

    Derived* d = new Derived();
    delete d;

    std::cout << "------------------" << std::endl;

    // this cause a memory leak without virtual in line 7, only the base class is destroyed
    Base* poly = new Derived();
    delete poly;
}
