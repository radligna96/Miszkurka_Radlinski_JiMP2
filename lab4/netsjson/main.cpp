//
// Created by Ignacy on 3/22/2017.
//


#include "SimpleJson.h"


using  nets::JsonValue;

int main() {

    //vector<JsonValue> js {JsonValue{56.6},JsonValue{45},JsonValue{"abc"s}};
    //map<string, JsonValue> obj_v {{"values",JsonValue{js}},{"name",JsonValue{"Test name"s}},{"age",JsonValue{13}}};
    //JsonValue obj {obj_v};
    JsonValue obj1 ("gg");
    cout << obj1.ToString() << endl;
    /*
    cout << "name: " << obj.ValueByName("name")->ToString() << endl;
    cout << "values: " << obj.ValueByName("values")->ToString() << endl;
    cout << "age: " << obj.ValueByName("age")->ToString() << endl;
    //obiekty optional można traktować jak wartości boolean (true wartość obecna, false optional jest pusty)
    if (obj.ValueByName("xyz")) {
        cout << "is present" << endl;
    } else {
        cout << "is absent" << endl;
    }
    */
}