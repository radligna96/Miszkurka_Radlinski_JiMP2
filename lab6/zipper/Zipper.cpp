//
// Created by miszk on 4/30/2017.
//

#include "Zipper.h"

namespace datastructures{


    vector<pair<string, int>> Zipper::zip(vector<string> v1, vector<int> v2) {
        vector<pair<string, int>> paired_vector;
        for(int i=0; (i<v1.size())||(i<v2.size()); i++) {
            if((i < v1.size())&&(i < v2.size()))
                paired_vector.emplace_back(std::make_pair(v1[i],v2[i]));
            if ((i >= v1.size())&&(i < v2.size()))
                paired_vector.emplace_back(std::make_pair("",v2[i]));
            if ((i < v1.size())&&(i >= v2.size()))
                paired_vector.emplace_back(std::make_pair(v1[i],0));

        }
        return paired_vector;
    }
}