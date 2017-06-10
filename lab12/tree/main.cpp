//
// Created by radligna on 30.05.17.
//

#include "Tree.h"
using namespace tree;
int main(){


    Tree<int> simple_tree(0);

    Tree<int> tree{4};
    std::cout<<tree.value<<" "<<tree.depth<<std::endl;

    tree.Insert(3);
    std::cout<<tree.left->value<<" "<<tree.depth<<std::endl;

   tree.Insert(2);
   std::cout<<tree.left->left->value<<" "<<tree.depth<<std::endl;

    tree.Insert(5);
   //std::cout<<tree.right->value<<" "<<tree.depth<<std::endl;

    tree.Insert(0);
    //std::cout<<tree.right->value<<" "<<tree.size<<std::endl;

    tree.Insert(9);
    //std::cout<<tree.right->value<<" "<<tree.size<<std::endl;

    tree.Insert(-1);
    //std::cout<<tree.right->value<<" "<<tree.size<<std::endl;*/
    return 0;
}