//
// Created by radligna on 23.05.17.
//

#include "FactoryMethod.h"

template<class T>
T factoryMethod::Create() {
    return 0;
}


std::string factoryMethod::MyType::SayHello() {
    return "hello";
}
