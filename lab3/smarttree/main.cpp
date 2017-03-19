//
// Created by Ignacy on 3/17/2017.
//
#include <sstream>
#include "SmartTree.h"
using namespace datastructures;
int main ()
{
    string str;
    stringstream ss;
    unique_ptr<datastructures::SmartTree> root;
    root = CreateLeaf(99);
    root = InsertLeftChild(move(root), CreateLeaf(100));
    root = InsertRightChild(move(root), CreateLeaf(88));
    root->left = InsertLeftChild(move(root->left), CreateLeaf(1234));
    root->left = InsertRightChild(move(root->left), CreateLeaf(4321));
    root->right = InsertLeftChild(move(root->right), CreateLeaf(897));
    root->right = InsertRightChild(move(root->right), CreateLeaf(761));
    PrintTreeInOrder(root, &ss);
    //str = DumpTree(root);
    cout <<root->value;
    return 0;
}