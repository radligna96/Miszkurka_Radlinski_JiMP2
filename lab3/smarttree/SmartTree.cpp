//
// Created by Ignacy on 3/17/2017.
//

#include "SmartTree.h"
namespace datastructures
{

    unique_ptr <SmartTree> CreateLeaf(int value)
    {
        unique_ptr<SmartTree> ptr1(new SmartTree);
       // auto song = make_unique<SmartTree>(value);
        ptr1->value = value;
        ptr1->left = nullptr;
        ptr1->right = nullptr;
        return ptr1;
    }

    unique_ptr <SmartTree> InsertLeftChild(unique_ptr<SmartTree> tree, unique_ptr<SmartTree> left_subtree)
    {
        SmartTree * wsk;
        wsk = tree.get();
        while (wsk->left != nullptr)
            wsk = wsk->left.get();
        //wsk->left = left_subtree;

    }


}
