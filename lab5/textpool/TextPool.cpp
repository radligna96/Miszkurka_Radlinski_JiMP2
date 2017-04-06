//
// Created by radligna on 2017-04-04.
//

#include "TextPool.h"

using pool::TextPool;


    //konstruktor przenoszący:
    TextPool::TextPool(TextPool &&text) {
        std::swap(perla,text.perla);
        //Bardzo popularna szutczka
        //wiemy, ze za chwilę xxx zostanie zniszczony
        //za pomocą destrukotra, więc inicjalizujemy
        //this na nullptr i wymieniamy się z xxx
        //delete nullptr jest bezpieczna operacją i nic się nie stanie...
    }

    //operator przenoszący:
    TextPool & TextPool::operator=(TextPool &&text)  {
        //jeśli ktoś wpadł na pomsył x = move(x);
        if (this == &text) {
            return text;
        }
        perla.clear();
        std::swap(perla,text.perla);
        return *this;
    }

    TextPool::~TextPool()
    {
        perla.clear();
    };

    TextPool::TextPool(){};

    TextPool::TextPool(const std::initializer_list<const string> &some_list) {

        for(auto element : some_list)
        {
            perla.emplace(element);
        }
    }


    size_t TextPool::StoredStringCount() const {

        unsigned long size = perla.size();
        return size;
    }

    std::experimental::string_view TextPool::Intern(const std::string &str) {

        if(perla.find(str)==perla.end())
        {
            perla.emplace(str);
        }
    }
