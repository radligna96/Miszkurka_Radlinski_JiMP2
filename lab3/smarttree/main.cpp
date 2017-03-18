//
// Created by Ignacy on 3/17/2017.
//
#include <sstream>
#include "SmartTree.h"
using namespace datastructures;
int main ()

{
    std::cout<<"ooo";
    stringstream ss;
    unique_ptr<datastructures::SmartTree> head = datastructures::CreateLeaf(10);
    auto root = CreateLeaf(99);
    root = InsertLeftChild(std::move(root), CreateLeaf(100));
    root = InsertRightChild(std::move(root), CreateLeaf(88));
    root->left = InsertLeftChild(std::move(root->left), CreateLeaf(1234));
    root->left = InsertRightChild(std::move(root->left), CreateLeaf(4321));
    root->right = InsertLeftChild(std::move(root->right), CreateLeaf(897));
    root->right = InsertRightChild(std::move(root->right), CreateLeaf(761));
    cout<<head->value;
    PrintTreeInOrder(root, &ss);
    return 0;
}