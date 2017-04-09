//
// Created by miszk on 4/9/2017.
//

#include "Counts.h"
using namespace datastructures;

Counts & Counts::operator++() {
    count++;
    return *this;
}

Counts::Counts(int oo) {
    count = oo;
}

bool Counts::operator<(Counts ignas) const {
    return (count<ignas.count);
}

bool Counts::operator>(Counts ignas) const {
    return (count>ignas.count);
}

bool Counts::operator==(Counts ignas) const {
    return (count==ignas.count);
}