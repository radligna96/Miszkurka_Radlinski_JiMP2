//
// Created by Ignacy on 3/17/2017.
//

#ifndef JIMP_EXERCISES_SMARTTREE_H
#define JIMP_EXERCISES_SMARTTREE_H

#include "iostream"
#include "memory"
using namespace std;

namespace datastructures
{
    struct SmartTree
    {
        int value;
        unique_ptr<SmartTree> left;
        unique_ptr<SmartTree> right;
    };
    unique_ptr <SmartTree> CreateLeaf(int value);
    unique_ptr <SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree);


}
#endif //JIMP_EXERCISES_SMARTTREE_H
