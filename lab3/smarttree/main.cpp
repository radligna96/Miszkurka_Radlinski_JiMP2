//
// Created by Ignacy on 3/17/2017.
//

#include "SmartTree.h"
using namespace datastructures;
int main ()

{
    std::cout<<"o"<<"oo";
    stringstream ss;
    unique_ptr<datastructures::SmartTree> head = datastructures::CreateLeaf(10);
    auto root = CreateLeaf(99);
    root = InsertLeftChild(std::move(root), CreateLeaf(100));
    root = InsertRightChild(std::move(root), CreateLeaf(88));
    root->left = InsertLeftChild(std::move(root->left), CreateLeaf(1234));
    root->left = InsertRightChild(std::move(root->left), CreateLeaf(4321));
    root->right = InsertLeftChild(std::move(root->right), CreateLeaf(897));
    root->right = InsertRightChild(std::move(root->right), CreateLeaf(761));
    root->right->right = InsertRightChild(move(root->right->right), CreateLeaf(888));
    root->right->right->right = InsertRightChild(move(root->right->right->right), CreateLeaf(901));

    //PrintTreeInOrder(root, &ss);
    string str1, str2 = "[99 [100 [1234 [none] [none]] [4321 [none] [none]]] "
            "[88 [897 [none] [none]] [761 [none] [888 [none] [901 [none] [none]]]]]]";
    str1 = DumpTree(root);
    cout<<endl<<str1<<endl<<str2<<endl;
    RestoreTree("[99 [100 [1234 [none] [none]] [4321 [none] [none]]] [88 [897 [none] [none]] [761 [none] [none]]]]");

    return 0;

}