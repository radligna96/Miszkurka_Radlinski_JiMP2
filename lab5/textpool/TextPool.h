//
// Created by radligna on 2017-04-04.
//

#ifndef JIMP_EXERCISES_TEXTPOOL_H
#define JIMP_EXERCISES_TEXTPOOL_H

#include <initializer_list>
#include <string>
#include <experimental/string_view>
#include <set>
#include <iostream>
#include <algorithm>

using std::string;
using std::set;
using std::experimental::string_view;

namespace pool {

    class TextPool {
    /*
    Rule of Five (z usuniętą możliwością kopiowania)
  domyślny konstruktor
  konstruktor z listą inicjalizacyjną
     */
    private:
        set<const string_view> perla;

    public:
        TextPool(){};

        TextPool(const std::initializer_list<const string> &some_list);
        //Rule of five://
        //1. konstruktor kopiujący
        //XXX(const Matrix &xxx);
        //2. konstruktor przenoszący
        TextPool(TextPool &&text);
        //3. operator przypisania kopiujący
        //XXX &operator=(const Matrix &xxx);
        //4. operator przypisania przenoszący
        TextPool &operator=(TextPool &&text);
        //5. Destruktor
        ~TextPool(){};


        std::experimental::string_view Intern(const std::string &str);
        size_t StoredStringCount() const;




    };


}
#endif //JIMP_EXERCISES_TEXTPOOL_H
