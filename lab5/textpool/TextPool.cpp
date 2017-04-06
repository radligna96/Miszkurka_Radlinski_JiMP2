//
// Created by radligna on 2017-04-04.
//

#include "TextPool.h"

using pool::TextPool;


TextPool::TextPool(){};

TextPool::TextPool(TextPool &&text) {
    swap(perla,text.perla);
}

TextPool & TextPool::operator=(TextPool &&text)  {
    if (this == &text) {
        return text;
    }
    perla.clear();
    swap(perla,text.perla);
    return *this;
}

TextPool::~TextPool() {
    perla.clear();
};

TextPool::TextPool(const std::initializer_list<string_view> &some_list) {

    for (auto i : some_list)
        perla.emplace(i);
}

size_t TextPool::StoredStringCount() const {

    unsigned long size = perla.size();
    return size;
}

std::experimental::string_view TextPool::Intern(const std::string &str) {

    for (auto i : perla) {
        if (i == str){
            return i;
        }
    }

    perla.emplace(str);
    return Intern(str);

}