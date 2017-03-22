//
// Created by Ignacy on 3/22/2017.
//

#ifndef JIMP_EXERCISES_SIMPLEJSON_H
#define JIMP_EXERCISES_SIMPLEJSON_H

#include <experimental/optional>
#include <string>
#include <iostream>
#include <vector>
#include <map>

using ::std::vector;
using ::std::map;
using ::std::cout;
using ::std::endl;
using ::std::string;
using ::nets::JsonValue;
using ::std::literals::operator""s;
using ::std::experimental::optional;

namespace nets
{
    class JsonValue
    {

        JsonValue();
        JsonValue(int number);
        JsonValue(double value);
        JsonValue(string name);
        JsonValue(bool flag);
        JsonValue(map<string, JsonValue> some_map);
        JsonValue(vector<JsonValue> some_vector);
        optional<JsonValue> ValueByName(const string &name) const;
        string ToString() const;



    };


}

#endif //JIMP_EXERCISES_SIMPLEJSON_H
