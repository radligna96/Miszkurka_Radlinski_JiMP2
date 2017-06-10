//
// Created by radligna on 31.05.17.
//

#ifndef JIMP_EXERCISES_TIMERECORDER_H
#define JIMP_EXERCISES_TIMERECORDER_H

#include <chrono>
#include <iostream>
#include <ctime>
#include <functional>


using std::cout;
using std::endl;
using std::pair;

namespace profiling {
    template<typename T>
    pair<T, double>TimeRecorder(T sumthing()){
        clock_t begin = clock();
        T somethin = sumthing();
        clock_t end = clock();
        return std::make_pair(somethin, (double)(end - begin));
    }

    template<typename T>
    pair<T, double>TimeRecorder(std::function<T()>lambda){
        clock_t begin = clock();
        T somethin = lambda();
        clock_t end = clock();
        return std::make_pair(somethin, (double)(end - begin));
    }


}

#endif //JIMP_EXERCISES_TIMERECORDER_H
