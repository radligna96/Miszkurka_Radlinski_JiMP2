//
// Created by radligna on 2017-04-04.
//

#ifndef JIMP_EXERCISES_TEXTPOOL_H
#define JIMP_EXERCISES_TEXTPOOL_H

#include <initializer_list>
#include <string>
#include <experimental/string_view>
#include <set>
#include <vector>
#include <iostream>
using std::string;
using std::experimental::string_view;

namespace pool {
    class TextPool {
    private:
        std::set<string_view> perla;

    public:
        //konstruktor przenoszący
        TextPool(TextPool &&xxx);

        //operator przypisania przenoszący
        TextPool & operator=(TextPool &&xxx);

        //Destruktor
        ~TextPool();

        //domyślny konstruktor
        TextPool();

        //konstruktor z listą inicjalizacyjną
        TextPool(const std::initializer_list<string_view> &elements);

        std::experimental::string_view Intern(const std::string &str);
        size_t StoredStringCount() const;

    protected:

    };
}
#endif //JIMP_EXERCISES_TEXTPOOL_H
/*



 */