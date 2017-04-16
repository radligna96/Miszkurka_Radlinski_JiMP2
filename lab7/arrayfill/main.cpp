//
// Created by radligna on 11.04.17.
//

#include "ArrayFill.h"

using ::arrays::RandomFill;
using ::arrays::ArrayFill;
using ::arrays::FillArray;

int main() {

    auto expected_generator = default_random_engine {};
    auto expected_distribution = uniform_int_distribution<int> {1,6};

    for (int i = 0; i < 10; i++)
        std::cout<<expected_distribution(expected_generator);




    return 0;
}