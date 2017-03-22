//
// Created by Ignacy on 3/22/2017.
//


#include "SimpleJson.h"
using ::nets::JsonValue;


int main() {

    vector<JsonValue> js {JsonValue{56.6},JsonValue{45},JsonValue{"abc"s}};
    JsonValue obj0 {js};
    map<string, JsonValue> obj_v {{"values",JsonValue{js}},{"name",JsonValue{"Test name"s}},{"age",JsonValue{13}}};
    JsonValue obj {obj_v};
    // {"age": 13, "name": "Test name", "values": [56.6, 45, "abc"]} kolejność argumentów nie ma znaczenia w przypadku obiektu
    JsonValue obj1{map<string, JsonValue> {{"name", {"Maciej"s}}, {"age", {44}}, {"account_balance", {-107.89}}}};
    string okienko = obj0.ToString();
    cout<<okienko<<endl<<obj1.ToString()<<endl;
    unsigned long o = okienko.find("\"account_balance\": -107.89");
    cout<<o;

/*
    cout << obj.ToString() << endl;
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

/*
std::experimental::optional<std::string> MaybeString(bool create) {
    if (create) {
        return std::experimental::make_optional("ssaabbccdd"s);
    } else {
        return {};
    }
}

int main() {
    auto value = MaybeString(true);
    if (value) {
        cout << *value << endl;
    } else {
        cout << "EMPTY" << endl;
    }

    auto another = MaybeString(true);
    if (another) {
        cout << another->substr(0,3) << endl;
    }
}
*/