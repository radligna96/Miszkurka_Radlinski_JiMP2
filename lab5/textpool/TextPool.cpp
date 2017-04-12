//
// Created by radligna on 2017-04-04.
//

#include "TextPool.h"

using pool::TextPool;

TextPool::TextPool(){};

TextPool::TextPool(TextPool &&text) {
    swap( sv_set ,text.sv_set);
}

TextPool & TextPool::operator=(TextPool &&text)  {
    if (this == &text) {
        return text;
    }
    sv_set.clear();
    swap(sv_set,text.sv_set);
    return *this;
}

TextPool::~TextPool() {
    sv_set.clear();
};

TextPool::TextPool(const std::initializer_list<string_view> &some_list) {

    for (auto i : some_list)
        sv_set.emplace(i);
}

size_t TextPool::StoredStringCount() const {

    return sv_set.size();

}

std::experimental::string_view TextPool::Intern(const std::string &str) {

    for (auto i : sv_set) {
        if (i == str){
            return i;
        }
    }

    sv_set.emplace(str);
    return Intern(str);

}