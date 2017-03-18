//
// Created by Ignacy on 3/18/2017.
//

#include "CCounter.h"

namespace ccounter
{
    std::unique_ptr<Counter> Init()
    {
        std::unique_ptr<Counter> object = std::make_unique<Counter>();
        return object;

    }
    void Inc(std::string key, std::unique_ptr<Counter> *counter)
    {
        auto i = counter->get()->mapka.second.find(key);
        if (i != counter->get()->mapka.second.end()) {
            i->second ++;
        } else {
            counter->get()->mapka.second.emplace_hint(i, key, 1);
        }
    }
    int Counts(const std::unique_ptr<Counter> &counter, std::string key)
    {
        auto i = counter->mapka.second.find(key);
        if (i != counter->mapka.second.end())
            return i->second;
        return 0;
    }
    void SetCountsTo(std::string key, int value, std::unique_ptr<Counter> *counter)
    {
        auto i = counter->get()->mapka.second.find(key);
        i->second = value; // xD

    }

}