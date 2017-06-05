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
    pair<T, double>TimeRecorder(T sumthing());

    template<typename T>
    pair<T, double>TimeRecorder(std::function<T()>lambda);


}

#endif //JIMP_EXERCISES_TIMERECORDER_H
