//
// Created by radligna on 11.04.17.
//

#include "ArrayFill.h"

namespace arrays {

    void FillArray(std::size_t size,  ArrayFill &filler, std::vector<int> *v) {
        v->clear();
        v->reserve(size);
        for (std::size_t i = 0; i < size; i++) {
            v->emplace_back(filler.Value(int(i)));
        }
    }

    int UniformFill::Value(int index )  {
        return value_;
    }

    IncrementalFill::IncrementalFill(int value, int step) {
        value_= value;
        step_ = step;
    }

    int IncrementalFill::Value(int index)  {

        return value_ + index*step_;
    }

    IncrementalFill::IncrementalFill(int value) {
        value_ = value;
        step_ = 1;
    }

    int RandomFill::Value(int index) {
        return distribution_(generator_); //ffs
    }

    RandomFill::RandomFill(unique_ptr<default_random_engine> generator, unique_ptr<uniform_int_distribution<int>> distribution) {
        distribution_ = *distribution;
        generator_ = *generator;

    }

    SquaredFill::SquaredFill() {
        constant_ = 1;
        offset_ = 0;
    }

    SquaredFill::SquaredFill(int constant) {
        constant_ = constant;
        offset_ = 0;
    }

    SquaredFill::SquaredFill(int constant, int offset) {
        constant_ = constant;
        offset_ = offset;
    }

    int SquaredFill::Value(int index) {
        return index*index*constant_ + offset_;
    }

    
}