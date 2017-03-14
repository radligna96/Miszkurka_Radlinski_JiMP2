//
// Created by Ignacy on 3/14/2017.
//


#ifndef JIMP_EXERCISES_MINIMALTIMEDIFFERENCE_H

#define JIMP_EXERCISES_MINIMALTIMEDIFFERENCE_H



#include <iostream>

#include <vector>

#include <sstream>

#include <regex>

#include <cmath>

#include <algorithm>

#include <cstdlib>

#include <string>

using namespace std;



namespace minimaltimedifference{

    unsigned int ToMinutes(string time_HH_MM);



    unsigned int MinimalTimeDifference(vector<string> times);

}

#endif //JIMP_EXERCISES_MINIMALTIMEDIFFERENCE_H