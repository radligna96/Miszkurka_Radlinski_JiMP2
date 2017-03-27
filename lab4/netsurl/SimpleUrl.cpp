//
// Created by miszk on 3/27/2017.
//

#include "SimpleUrl.h"

namespace nets {

    SimpleUrl::SimpleUrl(string url) {
        this->url=url;
    }

    SimpleUrl::~SimpleUrl() {}

    std::string SimpleUrl::Scheme() const
    {
        regex pattern {R"(\w+)"};
        smatch matches;
        std::regex_search (url,matches, pattern);
        return matches.str();
    }
    std::string SimpleUrl::Login() const
    {
        regex pattern {R"(:\w+@)"};
        smatch matches;
        std::regex_search (url,matches, pattern);
        return matches.str().substr(1,matches.str().length()-2);
    }
    std::string SimpleUrl::Host() const
    {
        regex pattern {R"(\w+\.\w+)"};
        smatch matches;
        std::regex_search (url,matches, pattern);
        return matches.str().substr(0,matches.str().length());
    }
}