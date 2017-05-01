//
// Created by miszk on 4/30/2017.
//

#ifndef JIMP_EXERCISES_ITERABLE_H
#define JIMP_EXERCISES_ITERABLE_H

#include <vector>
#include <iostream>
#include <string>
#include <memory>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::pair;

namespace utility {

    class IterableIterator{
    public :

        virtual IterableIterator &Next() = 0;
        virtual pair<int, string> Dereference() const = 0;
        virtual bool NotEquals(const std::unique_ptr<IterableIterator> &other) const =0;
        /*Dereference()
        Next();
        NotEquals();*/

    };

    class Iterable : public IterableIterator {
    public :


    };

    class Enumerate : public Iterable {
    public:
        Enumerate(vector <string> vs);
        vector<pair<int, string>> enumerated;
    };


    class ZipperIterator : public Iterable {
    public:
        ZipperIterator(const vector<int>::const_iterator current_int_position, const vector<string>::const_iterator current_str_position, vector<int>::const_iterator end_int_iterator, vector<string>::const_iterator end_str_iterator);

        vector<string>::const_iterator end_str_iterator_;
        vector<int>::const_iterator end_int_iterator_;
        vector<string>::const_iterator current_str_position_;
        vector<int>::const_iterator current_int_position_;
        vector<string>::const_iterator starting_str_position_;
        vector<int>::const_iterator starting_int_position_;
        pair<int, string> Dereference() const;
        IterableIterator &Next();
        bool NotEquals(const std::unique_ptr<IterableIterator> &other) const;

        ZipperIterator () {};
    };

    class Zipper : public ZipperIterator{
    public:
        Zipper(vector <int> vi, vector <string> vs);
        vector<pair<string, int>> zipped;
        pair<int, string> Dereference() const;
        IterableIterator &Next();
        bool NotEquals(const std::unique_ptr<IterableIterator> &other) const;
        
    };

    class Product : public Iterable{
    public:
        Product(vector <int> vi, vector <string> vs);
        vector<pair<int,string>> produced;

    };

}
#endif //JIMP_EXERCISES_ITERABLE_H
