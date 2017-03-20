//
// Created by Ignacy on 3/17/2017.
//

#ifndef JIMP_EXERCISES_SMARTTREE_H
#define JIMP_EXERCISES_SMARTTREE_H

#include "iostream"
#include <string>
#include "memory"
#include "sstream"

using namespace std;
using ::std::stringstream;

namespace datastructures
{
    struct SmartTree
    {
        int value;
        unique_ptr<SmartTree> left;
        unique_ptr<SmartTree> right;
    };
    //unique_ptr<SmartTree> root;
    unique_ptr<SmartTree> CreateLeaf(int value);
    unique_ptr<SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree);
    unique_ptr <SmartTree> InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree);
    void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out);
    std::string DumpTree(const std::unique_ptr<SmartTree> &tree);

    //string ufnkcja(const std::unique_ptr<SmartTree> &tree, string str);
    void ufnkcja2(const std::unique_ptr<SmartTree> &tree, string * str);
    std::string DumpTree(const std::unique_ptr<SmartTree> &tree);
    std::unique_ptr <SmartTree> RestoreTree(const std::string &tree);


}
#endif //JIMP_EXERCISES_SMARTTREE_H
