//
// Created by Ignacy on 3/22/2017.
//

#include "SimpleJson.h"

namespace nets {
    JsonValue::JsonValue()
    {
        cout<<"dupa";
    }

    JsonValue::JsonValue(int number_)
    {
        number = number_;
        value = -1;
        name = "-1";

    }

    JsonValue::JsonValue(double value_)
    {
        value = value_;
        number = -1;
        name = "-1";
    }

    JsonValue::JsonValue(string name_)
    {
        name = name_;
        number = -1;
        value = -1;
    }

    JsonValue::JsonValue(map<string, JsonValue> some_map_)
    {
        some_map = some_map_;
    }

    JsonValue::JsonValue(bool flag_)
    {
        flag = flag_;
    }

    JsonValue::JsonValue(vector<JsonValue> some_vector_)
    {
        some_vector = some_vector_;
    }

    /*
    optional<JsonValue>  JsonValue::ValueByName(const string &name) const
    {

    }

     */
    string  JsonValue::ToString() const
    {

        if(number!= -1)
            return std::to_string(number);

        if (value!=-1)
            return std::to_string(value);

        if (name!="-1")
            return ("\""+name+"\"");
    }
}
