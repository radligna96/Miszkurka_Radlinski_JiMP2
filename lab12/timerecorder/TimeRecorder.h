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
    auto TimeRecorder(T to_call){
        auto t_start = std::chrono::high_resolution_clock::now();
        auto returned = (to_call)();
        auto t_end = std::chrono::high_resolution_clock::now();
        double measured_time = std::chrono::duration<double, std::milli>(t_end-t_start).count();
        return std::make_pair(returned, measured_time);
    }
}

#endif //JIMP_EXERCISES_TIMERECORDER_H
