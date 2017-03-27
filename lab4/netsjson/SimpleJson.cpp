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

    JsonValue::~JsonValue() {}

    string JsonValue::ToString() const {
        if (number) {
            if (*number == 0)
                return ""s;
            else
                return std::to_string(*number);
        }
        if (value)
            return std::to_string(*value).substr(0,std::to_string(*value).length()-4); //relatywnie poczebne
        if (flag) {
            if (*flag)
                return "true";
            else
                return "false";
        }
        if (name)
        {
            string tmp = *name;
            unsigned long len = (*name).length();
            unsigned long index=0;
            for(int i=0;i<len;i++)
            {
                if(((*name)[i]=='\"' )|| ((*name)[i]== '\\'))
                {

                    tmp.insert(i+index, "\\");
                    index++;
                }

            }

            return "\"" + tmp + "\""s;
        }

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
            string map_str = "{"s;
            for (auto i : *some_map) {

                string tmp = i.first;
                unsigned long len = tmp.length();
                unsigned long index=0;
                for(int j=0;j<len;j++)
                {

                    if(((i.first)[j]=='\"' )|| ((i.first)[j]== '\\'))
                    {
                        tmp.insert(j+index, "\\");
                        index++;
                    }
                }
                map_str += "\"" + tmp + "\": ";
                map_str += (i.second.ToString() +", ");
            }
            map_str = map_str.substr(0,map_str.length()-2);
            map_str += "}"s;
            return map_str;

        }
        return ""s;
    }


    optional<JsonValue> JsonValue::ValueByName(const string &namee) const {
        if (some_map) {
            for (auto v : *some_map) {
                if (v.first == namee)
                    return std::experimental::make_optional(v.second);
            }
        }
        return {};
    }
}

