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
using ::std::literals::operator""s;
using ::std::experimental::optional;

namespace nets
{
    class JsonValue
    {
    public:
        JsonValue();
        JsonValue(int number);
        JsonValue(double value);
        JsonValue(string name);
        JsonValue(bool flag);
        JsonValue(map<string, JsonValue> some_map);
        JsonValue(vector<JsonValue> some_vector);

        //optional<JsonValue> ValueByName(const string &name) const;
        string ToString() const;
    private:
        int number;
        double value;
        string name;
        bool flag;
        map<string, JsonValue> some_map;
        vector<JsonValue> some_vector;


    };


}

#endif //JIMP_EXERCISES_SIMPLEJSON_H
