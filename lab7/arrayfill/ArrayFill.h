//
// Created by radligna on 11.04.17.
//

#ifndef JIMP_EXERCISES_ARRAYFILL_H
#define JIMP_EXERCISES_ARRAYFILL_H

#include <vector>
#include <memory>
#include <random>
#include <iostream>
using std::vector;
using ::std::default_random_engine;
using ::std::uniform_int_distribution;
using ::std::make_unique;
using ::std::unique_ptr;

namespace arrays {

    class ArrayFill {
    public:
        virtual int Value(int index) =0;
    };

    void FillArray(std::size_t size, ArrayFill &filler, std::vector<int> *v);

    class UniformFill : public ArrayFill {
    public:
        UniformFill(int value = 0) : value_{value} {}
        virtual int Value(int index) ;
    private:
        int value_;
    };

    class IncrementalFill : public ArrayFill {
    public:
        IncrementalFill(int value, int step);
        IncrementalFill(int value);
        virtual int Value(int index) ;
    private:
        int value_;
        int step_;
    };

    class RandomFill : public ArrayFill {
    public:
        RandomFill(unique_ptr<default_random_engine> generator, unique_ptr<uniform_int_distribution<int>> distribution);
        virtual int Value(int index) ;
    private:
        uniform_int_distribution<int> distribution_;
        default_random_engine generator_;
    };

    class SquaredFill : public ArrayFill {
    public:
        SquaredFill();
        SquaredFill(int constant);
        SquaredFill(int constant, int offset);
        virtual int Value(int index) ;
    private:
        int constant_;
        int offset_;
    };

}


#endif //JIMP_EXERCISES_ARRAYFILL_H
