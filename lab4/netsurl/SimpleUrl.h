//
// Created by miszk on 3/27/2017.
//

#ifndef JIMP_EXERCISES_SIMPLEURL_H
#define JIMP_EXERCISES_SIMPLEURL_H

#include <string>
#include <iostream>
#include <cstdint>
#include <map>
#include "regex"

using ::std::string;
using ::std::cout;
using ::std::endl;
using ::std::map;
using ::std::regex_match;
using ::std::regex;
using ::std::smatch;


namespace nets
{
    class SimpleUrl
    {
    private:

        string url;

    public:

        std::string Login() const;
        std::string Host() const;
        //std::string Path() const;
        //uint16_t Port() const;
        std::string Scheme() const;
        //std::string Query() const;
        //std::string Fragment() const;

        SimpleUrl(string url);
        virtual ~SimpleUrl();


    };


}


#endif //JIMP_EXERCISES_SIMPLEURL_H
