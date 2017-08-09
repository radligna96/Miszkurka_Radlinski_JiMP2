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
using namespace academia;

int main() {
    Room r1 {100167, "429", Room::Type::LECTURE_HALL};
    Room r2 {100168, "208", Room::Type::COMPUTER_LAB};
    Room r3 {100169, "216", Room::Type::COMPUTER_LAB};
    Building building {11, "C2", {r1, r2, r3}};
    stringstream out;
    JsonSerializer serializer{&out};
    building.Serialize(&serializer);
    cout << out.str();
    return 0;
}