//
// Created by Ignacy on 3/17/2017.
//

#include "SmartTree.h"
namespace datastructures
{

    unique_ptr<SmartTree> CreateLeaf(int value) {
        //auto ptr1 = make_unique<SmartTree>(value);
        unique_ptr<SmartTree> ptr1(new SmartTree);
        ptr1->value = value;
        ptr1->left = nullptr;
        ptr1->right = nullptr;
        return ptr1;
    }

    unique_ptr <SmartTree> InsertLeftChild(unique_ptr<SmartTree> tree, unique_ptr<SmartTree> left_subtree)
    {
        tree -> left = move(left_subtree);

        return tree;
    }
    unique_ptr <SmartTree> InsertRightChild(unique_ptr<SmartTree> tree, unique_ptr<SmartTree> right_subtree)
    {
        tree -> right = move(right_subtree);
        return tree;
    }

    void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out)
    {
        if(unique_ptr == nullptr) return;
        PrintTreeInOrder(unique_ptr->left, out);
        *out << unique_ptr->value<<", ";
        PrintTreeInOrder(unique_ptr->right, out);
    }
/*
    string ufnkcja(const std::unique_ptr<SmartTree> &tree, string str)
    {
        ostringstream ss;
        ss << tree->value;
        string value= ss.str();
        if ((tree== nullptr )) return "[none]";
        else {

            if (tree->left != nullptr) {

                return ("[" + value + ufnkcja(tree->left, str) + " ]");
            }

            if (tree->right != nullptr) {

                return ("[" + value + ufnkcja(tree->right, str) + " ]");
            }
        }
    }
*/
    void ufnkcja2(const std::unique_ptr<SmartTree> &tree, string * str)
    {
        if ((tree==nullptr))
            *str += " [none]";

        else {
            ostringstream ss;
            ss << tree->value;
            string value= ss.str();

            *str += " [" + value + "";
            ufnkcja2(tree->left, str);
            //*str +=  " ]";

           // *str += ("[" );
            ufnkcja2(tree->right, str);
           *str +=  "]";
            }
        }

    std::string DumpTree(const std::unique_ptr<SmartTree> &tree)
    {
        string str = "",str2="";
        //str = ufnkcja(tree, str);
        ufnkcja2(tree, &str);
        //cout<<str;
        for(int i=1; i<str.length(); i++)
            str2+=str[i];
        return str2;
    }
    unique_ptr <SmartTree> RestoreTree(const string &tree)
    {
        if (tree == "[none]")
            return nullptr;
        
        unsigned long iterator = 1;
        string value;
        unsigned long stringsize = tree.length();
        
        while (iterator < stringsize){
            if (tree[iterator]==' '){
                value=tree.substr(1, iterator);
                iterator++;
                break;
            }
            iterator++;
        }
        //left child
        int bracketscounter = 0;
        unsigned long leftstart = iterator;
        std::string leftchild;
        while (iterator < stringsize){
            if (tree[iterator]=='['){
                bracketscounter+=1;
            }
            else if (tree[iterator]==']'){
                bracketscounter-=1;
            }
            if (bracketscounter==0){
                leftchild = tree.substr(leftstart, iterator-leftstart+1);
                iterator+=2;
                break;
            }
            iterator++;
        }
        
        //right child
        bracketscounter = 0;
        unsigned long rightstart = iterator;
        std::string rightchild;
        while (iterator < stringsize){
            if (tree[iterator]=='['){
                bracketscounter+=1;
            }
            else if (tree[iterator]==']'){
                bracketscounter-=1;
            }
            if (bracketscounter==0){
                rightchild = tree.substr(rightstart, iterator-rightstart+1);
                break;
            }
            iterator++;
        }
        auto root = CreateLeaf(std::stoi(value));
        root->left = RestoreTree(leftchild);
        root->right = RestoreTree(rightchild);
        return root;
    }
}
