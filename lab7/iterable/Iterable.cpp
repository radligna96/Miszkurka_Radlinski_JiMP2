//
// Created by miszk on 4/30/2017.
//

#include "Iterable.h"


namespace utility {
    Zipper::Zipper(vector<int> vi, vector<string> vs) {
        string last_word="";
        int last_int=0;
        for(int i=0; (i<vi.size())||(i<vs.size()); i++) {
            if((i < vi.size())&&(i < vs.size()))
            {
                this->zipped.emplace_back(std::make_pair(vs[i],vi[i]));
                last_word = vs[i];
                last_int = vi[i];
            }
            if ((i >= vs.size())&&(i < vi.size()))
                this->zipped.emplace_back(std::make_pair(last_word,vi[i]));
            if ((i < vs.size())&&(i >= vi.size()))
                this->zipped.emplace_back(std::make_pair(vs[i],last_int));
        }

    }

    bool Zipper::NotEquals(const std::unique_ptr<IterableIterator> &other) const {
        return false;
    }

    IterableIterator &Zipper::Next() { return *this; }

    pair<int, string> Zipper::Dereference() const {
        return (std::make_pair(*current_int_position_, *current_str_position_));
    }

    vector<pair<string, int>>::const_iterator Zipper::begin() {
        return (this->zipped.begin());
    }

    vector<pair<string, int>>::const_iterator Zipper::end() {
        return this->zipped.end();
    }


    Enumerate::Enumerate(vector<string> vs) {
        int iter = 1;
        for(auto word : vs)
        {
            this->enumerated.emplace_back(std::make_pair(iter,word));
            iter++;
        }
    }

    Product::Product(vector<int> vi, vector<string> vs) {
        for (auto i_iter : vi)
        {
            for(auto s_iter : vs)
                this->produced.emplace_back(std::make_pair(i_iter, s_iter));
        }
    }

    ZipperIterator::ZipperIterator(const vector<int>::const_iterator current_int_position, const vector<string>::const_iterator current_str_position, vector<int>::const_iterator end_int_iterator, vector<string>::const_iterator end_str_iterator) {
        this->current_int_position_ = current_int_position;
        this->current_str_position_ = current_str_position;
        this->starting_int_position_ = current_int_position;
        this->starting_str_position_ = current_str_position;

        this->end_int_iterator_ = end_int_iterator;
        this->end_str_iterator_ = end_str_iterator;
    }

    bool ZipperIterator::NotEquals(const std::unique_ptr<IterableIterator> &other) const {
        if(this->Dereference().first != (*other).Dereference().first)
            return true;
        else
            return false;
    }

    IterableIterator &ZipperIterator::Next() {
        current_str_position_ ++;
        current_int_position_ ++;
        return *this;
    }

    pair<int, string> ZipperIterator::Dereference() const {
        return (std::make_pair(*current_int_position_, *current_str_position_));
    }




}