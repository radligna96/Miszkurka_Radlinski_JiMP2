//
// Created by radligna on 10.06.17.
//

#include "SequentialGenerator.h"

int main (){

 class TestId {
 public:
  TestId(int id) : id_{id} {}

  operator int() {
    return id_;
  }
 private:
  int id_;
};

class AnotherTestId {
 public:
  AnotherTestId(int id) : id_{id} {}

  operator int() {
    return id_;
  }
 private:
  int id_;
};

class BaseValue {
 public:
  BaseValue(int initial_value=0) : value_{initial_value} {}
  BaseValue operator++() {
    ++value_;
  }
  operator int() {
    return value_;
  }
 private:
  int value_;
};

    TestId p(4);
    int o = int(p);
    cout<<o;
    cout<<endl;
    return 0;
}

