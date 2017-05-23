//
// Created by miszk on 4/30/2017.
//

#ifndef JIMP_EXERCISES_ZIPPER_H
#define JIMP_EXERCISES_ZIPPER_H

#include "iostream"
#include "vector"

#include "string"

using std::string;
using std::vector;
using std::pair;
using std::cout;
using std::endl;

namespace datastructures{

    class Zipper {
    public:
        static vector<pair<string, int>> zip(vector <string> v1, vector <int> v2);
    };

}

#endif //JIMP_EXERCISES_ZIPPER_H
