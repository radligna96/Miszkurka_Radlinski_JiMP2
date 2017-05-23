//
// Created by radligna on 08.05.17.
//
#include "Serialization.h"



class Base {
public:
    virtual std::string foo() = 0;
};

class Derived : public Base {
public:
    std::string foo() override{ return "derived"; }
};

class BaseReferenceWrapper {
public:
    BaseReferenceWrapper(Base &base)
            : base_{&base} {}
    //zdefiniowany operator rzutujący na referencję
    //przez co typu można używać jak referencji
    operator Base&() {
        return *base_;
    }
private:
    Base *base_;
};

int main() {
    std::vector<std::reference_wrapper<Base>> bases;
    Derived d1;
    Derived d2;
    bases.emplace_back(d1);
    bases.emplace_back(d2);

    for (Base &base : bases) {
        cout << base.foo() << endl;
    }

    return 0;
}