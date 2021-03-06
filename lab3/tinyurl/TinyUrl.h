//
// Created by Ignacy on 3/14/2017.
//

#ifndef JIMP_EXERCISES_TINYURL_H
#define JIMP_EXERCISES_TINYURL_H

#include <utility>
#include <string>
#include <array>
#include <memory>
#include <iostream>
#include <map>
#include <vector>
#include <memory>

using ::std::string;
using ::std::unique_ptr;
using ::std::map;


namespace tinyurl {

    struct TinyUrlCodec{
        std::array<char, 6> hash;
        map<string, string > bitch;
    };


    std::unique_ptr<TinyUrlCodec> Init();
    void NextHash(std::array<char, 6> *state);
    std::string Encode(const std::string &url, std::unique_ptr<TinyUrlCodec> *codec);
    std::string Decode(const std::unique_ptr<TinyUrlCodec> &codec, const std::string &hash);
}

#endif //JIMP_EXERCISES_TINYURL_H
