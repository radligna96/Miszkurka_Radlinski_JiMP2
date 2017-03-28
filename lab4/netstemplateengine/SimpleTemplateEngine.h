//
// Created by miszk on 3/23/2017.
//

#ifndef JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H
#define JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H

#include <string>
#include <unordered_map>
#include <iostream>
#include "regex"

using ::std::unordered_map;
using ::std::cout;
using ::std::endl;
using ::std::string;
using ::std::regex_match;
using ::std::regex;
using ::std::smatch;
namespace  nets
{
    class View
    {
    public:

        View(){};
        View(string sheet);
        ~View(){};


        string Render(const std::unordered_map <string, string> &model) const;


    private:
        string sheet;

    };


}
#endif //JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H
