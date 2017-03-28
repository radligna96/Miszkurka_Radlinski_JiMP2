//
// Created by miszk on 3/23/2017.
//


#include "SimpleTemplateEngine.h"

using namespace std;

int main()
{

    nets::View obj1 {"Hello {{name}}! How are you today? My name is {{program}}! nnn"};
    unordered_map <string, string> iggy = {{"name", "Zbigniew"}, {"program", "Borg"}};
    cout<<obj1.Render(iggy);
    return 0;
}