//
// Created by Ignacy on 3/22/2017.
//


#include "SimpleJson.h"
using ::nets::JsonValue;


int main() {

    vector<JsonValue> js{JsonValue{56.6}, JsonValue{0}, JsonValue{"abc"s}};
    JsonValue obj0{js};
    map<string, JsonValue> obj_v{{"values", JsonValue{js}},
                                 {"name",   JsonValue{"Test name"s}},
                                 {"age",    JsonValue{13}}};
    JsonValue obj{obj_v};
    // {"age": 13, "name": "Test name", "values": [56.6, 45, "abc"]} kolejność argumentów nie ma znaczenia w przypadku obiektu
    JsonValue obj1{map<string, JsonValue> {{"name",            {"Maciej"s}},
                                           {"age",             {0}},
                                           {"account_balance", {js}}}};
    string okienko = obj1.ToString();
    cout << okienko << endl;//<<obj1.ToString()<<endl;
    int o = (int) (okienko.find("\"account_balance\": -107.89"));
    cout << o;
}