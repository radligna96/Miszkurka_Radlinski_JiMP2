//
// Created by Ignacy on 3/14/2017.
//

#include "TinyUrl.h"


int main(){
    std::string code = "0ZZZZZ";
    std::array<char, 6> tab;

    for (int i = 0; i < 6; ++i)
        (tab)[i] = code[i];

    ::tinyurl::NextHash(&tab);
    return 0;
}