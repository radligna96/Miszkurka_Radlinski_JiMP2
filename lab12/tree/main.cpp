//
// Created by radligna on 30.05.17.
//

#include "Tree.h"

int main(){

    Tree<int> tree;
    tree.Insert(4);
    std::cout<<tree.value<<" "<<tree.size<<std::endl;

    tree.Insert(3);
    std::cout<<tree.left->value<<" "<<tree.size<<std::endl;
    return 0;
}