//
// Created by Ignacy on 3/17/2017.
//

#include "SmartTree.h"
using namespace datastructures;
int main ()

{
    //std::cout<<"o"<<"oo";
    stringstream ss;
    string str1, str2;
    unique_ptr<datastructures::SmartTree> head = datastructures::CreateLeaf(10);
    auto root = CreateLeaf(99);
    root = InsertLeftChild(move(root), CreateLeaf(100));
    root = InsertRightChild(move(root), CreateLeaf(88));
    root->left = InsertLeftChild(move(root->left), CreateLeaf(1234));
    root->left = InsertRightChild(move(root->left), CreateLeaf(4321));
    root->right = InsertLeftChild(move(root->right), CreateLeaf(897));
    root->right = InsertRightChild(move(root->right), CreateLeaf(761));
/*
    //PrintTreeInOrder(root, &ss);
    str2 = "[99 [100 [1234 [none] [none]] [4321 [none] [none]]] [88 [897 [none] [none]] [761 [none] [none]]]]";
    str1 = DumpTree(root);
    cout<<endl<<str1<<"   return"<<endl<<str2<<"  z testu"<<endl;


    root->left->left = InsertLeftChild(move(root->left->left), CreateLeaf(888));
    root->left->left->left = InsertLeftChild(move(root->left->left->left), CreateLeaf(901));

    str2 = "[99 [100 [1234 [888 [901 [none] [none]] [none]] [none]] [4321 [none] [none]]] [88 [897 [none] [none]] [761 [none] [none]]]]";
    str1 = DumpTree(root);
    cout<<endl<<str1<<"   return"<<endl<<str2<<"  z testu"<<endl;
*/
    root->right->right = InsertRightChild(move(root->right->right), CreateLeaf(888));
    root->right->right->right = InsertRightChild(move(root->right->right->right), CreateLeaf(901));


    str2 = "[99 [100 [1234 [none] [none]] [4321 [none] [none]]] [88 [897 [none] [none]] [761 [none] [888 [none] [901 [none] [none]]]]]]";
    root = RestoreTree(str2);
    str1 = DumpTree(root);
    cout<<endl<<str1<<"   return"<<endl<<str2<<"  z testu"<<endl<<str2.substr(0,5);



    return 0;

}