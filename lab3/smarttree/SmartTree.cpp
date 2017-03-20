//
// Created by Ignacy on 3/17/2017.
//

#include <regex>
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

    void ufnkcja2(const std::unique_ptr<SmartTree> &tree, string * str)
    {

        if ((tree==nullptr))
        {
            *str += " [none]";
        }
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
        string str = "",str2;
        //str = ufnkcja(tree, str);
        ufnkcja2(tree, &str);
        //cout<<str;
        for(int i=1; i<str.length(); i++)
            str2+=str[i];

            return str2;
    }





    std::unique_ptr <SmartTree> RestoreTree(const std::string &tree) {

        /*
         REGEXY TAKIE TAM
        regex pattern {R"((\[)(\d+))"};
        string line {"[789  [465"};
        smatch matches;

        while (std::regex_search (line,matches, pattern)) {
            for (auto x: matches) std::cout << x << " ";
            std::cout << std::endl;
            line = matches.suffix().str();
        }
         */
        if (tree=="[none]")
        {
            return nullptr ;
        }
            unique_ptr<SmartTree> parent(new SmartTree);
            int i = 1;
            string parent_value="";
            while (tree[i] != ' ')
            {
                parent_value += tree[i];
                i++;
            }
            i+=2;
            //cout<<"ojciec: "<<parent_value<<endl;
            string left_child="[";
            int brackets = 1;
            while (brackets != 0)
            {
                left_child += tree[i];
                if (tree[i]=='[')
                    brackets++;
                else if (tree[i]==']')
                    brackets--;
                i++;
            }
            //cout<<"lewe dziecko: " << left_child<<endl;
            i+=2;
            string right_child="[";
            brackets = 1;
            while (brackets != 0)
            {
                right_child += tree[i];
                if (tree[i]=='[')
                    brackets++;
                else if (tree[i]==']')
                    brackets--;
                i++;
            }
            parent = CreateLeaf(stoi(parent_value));
            parent->left = RestoreTree(left_child);
            parent->right = RestoreTree(right_child);
            return parent;
    }



}

