//
// Created by Ignacy on 3/18/2017.
//

#include "CCounter.h"
using ::std::string;
using ::std::unique_ptr;
using ::std::map;
using ::std::pair;
using ::std::vector;
using namespace ccounter;

int main()
{

    vector<string> vector1 = {"a", "c", "f"};
    unique_ptr<Counter> cunt = Init();
    for (auto s : vector1)
        Inc(s, &cunt);
    for (auto s : cunt->mapka.second)
        cout<<s.first<<" "<<Counts(cunt, s.first)<<endl;


    return 0;
}