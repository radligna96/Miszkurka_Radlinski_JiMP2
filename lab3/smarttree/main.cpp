//
// Created by Ignacy on 3/17/2017.
//
#include "SmartTree.h"

int main ()

{
    std::cout<<"ooo";

    unique_ptr<datastructures::SmartTree> head = datastructures::CreateLeaf(10);
    cout<<head->value;
    return 0;
}