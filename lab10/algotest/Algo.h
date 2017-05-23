//
// Created by miszagni on 16.05.17.
//

#ifndef JIMP_EXERCISES_ALGO_H
#define JIMP_EXERCISES_ALGO_H

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Algo {
public:
    static void CopyInto(const vector<int> &v, int n_elements, vector<int> *out);
    static bool Contains(const std::vector<int> &v, int element);
    static void InitializeWith(int initial_value, std::vector<int> *v);
    static int Product(const std::vector<int> &v);
    static int Sum(const std::vector<int> &v);
    static void SortInPlace(std::vector<int> *v);
    static std::vector<int> Sort(const std::vector<int> &v);
};

#endif //JIMP_EXERCISES_ALGO_H
