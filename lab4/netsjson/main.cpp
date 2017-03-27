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
                                           {"age",             {44}},
                                           {"account_balance", {-107.89}}}};
    string okienko = obj1.ToString();
    cout << okienko << endl;//<<obj1.ToString()<<endl;
    int o = (int) (okienko.find("\"name\": Maciej"));
    cout << o;

    map<string, JsonValue> obj2{{R"(\"abc\")"s, JsonValue{10}}};
    JsonValue obj_value{obj2};

    JsonValue objs{"\\\"abc\\\""s};
    cout<<endl<<"uhuhuhuu "<<obj_value.ToString()<<endl;
    cout<<endl<<endl<<obj1.ValueByName("age")->ToString();
    }

/*
 Expected: expected
      Which is: "{\"\\\"abc\\\"\": 10}"
To be equal to: obj_value.ToString()
      Which is: "{\"\"abc\"\": 10}"

      Expected: expected
      Which is: "{\"\\\\\\\\\\\\\\\\\\\\\\\\\\\"http:\\\\\\\\\\\\\\\\\\\\\\\\\\\"klmno\": 10}"
To be equal to: obj_value.ToString()
      Which is: "{\"\\\\\\\\\\\\\"http:\\\\\\\\\\\\\"klmno\": 10}"
 */