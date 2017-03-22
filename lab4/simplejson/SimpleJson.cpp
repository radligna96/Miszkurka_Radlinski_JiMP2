//
// Created by Ignacy on 3/22/2017.
//

#include "SimpleJson.h"

namespace nets {
    JsonValue::JsonValue() {
        cout << "wooo jestem sobie bez parametru" << endl;
    }

    JsonValue::JsonValue(int number_) {
        number = std::experimental::make_optional(number_);
    }

    JsonValue::JsonValue(double value_) {
        value = std::experimental::make_optional(value_);
    }

    JsonValue::JsonValue(string name_) {
        name = std::experimental::make_optional(name_);
    }

    JsonValue::JsonValue(bool flag_) {
        flag = std::experimental::make_optional(flag_);
    }

    JsonValue::JsonValue(vector<JsonValue> some_vector_) {
        some_vector = std::experimental::make_optional(some_vector_);
    }

    JsonValue::JsonValue(map<string, JsonValue> some_map_) {
        some_map = std::experimental::make_optional(some_map_);
    }

    string JsonValue::ToString() const {
        if (number)
            return std::to_string(*number);
        if (value)
            return std::to_string(*value).substr(0,std::to_string(*value).length()-4);
        if (flag) {
            if (*flag)
                return "true";
            else
                return "false";
        }
        if (name)
            return "\"" + *name + "\"";

        if (some_vector) {
            string gowno = "["s;
            for (auto i : *some_vector) {
                gowno += (i.ToString() +", ");
            }
            gowno = gowno.substr(0,gowno.length()-2);
            gowno += "]"s;
            return gowno;
        }
        if (some_map) {
            string gowno = "["s;
            for (auto i : *some_map) {
                gowno += "\"" + i.first + "\": ";
                gowno += (i.second.ToString() +", ");
            }
            gowno = gowno.substr(0,gowno.length()-2);
            gowno += "]"s;
            return gowno;

        }
        return ""s;
    }

    /*
    optional<JsonValue> ValueByName(const string &name) const
    {
        if(name == "whatever"s)
            return nullptr;

    }
    */
}

