//
// Created by Ignacy on 3/18/2017.
//

#ifndef JIMP_EXERCISES_CCOUNTER_H
#define JIMP_EXERCISES_CCOUNTER_H

using namespace std;
#include <string>
#include <memory>
#include <map>
#include <vector>
#include <iostream>

namespace ccounter
{
    struct Counter{
        pair<vector<string>, map<string, int>> mapka;
    };

    std::unique_ptr<Counter> Init();
    void Inc(std::string key, std::unique_ptr<Counter>* counter);
    int Counts(const std::unique_ptr<Counter> &counter, std::string key);
    void SetCountsTo(std::string key, int value, std::unique_ptr<Counter> *counter);
}

#endif //JIMP_EXERCISES_CCOUNTER_H
