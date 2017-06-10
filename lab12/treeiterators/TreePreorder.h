//
// Created by miszk on 6/10/2017.
//

#ifndef JIMP_EXERCISES_TREEPREORDER_H
#define JIMP_EXERCISES_TREEPREORDER_H

#include "TreeIterators.h"
namespace tree{

    template <class T>
    PreOrderTreeIterator<T>::PreOrderTreeIterator(Tree<T> *ptr) : TreeIterator<T>(ptr){
        BuildVector(ptr);
    }

    template <class T>
    void PreOrderTreeIterator<T>::BuildVector(Tree<T> *node) {
        this->PushBack(node->value);
        if (node->left) BuildVector(node->left.get());
        if (node->right) BuildVector(node->right.get());
    }


    template <class T>
    class PreOrderTreeView {
    public:
        PreOrderTreeView(){};
        PreOrderTreeView(Tree<T> * root);
        PreOrderTreeIterator<T> begin();
        PreOrderTreeIterator<T> end();
        PreOrderTreeIterator<T> tree_iterator;
    };

    template <class T>
    PreOrderTreeView<T>::PreOrderTreeView(Tree<T> *root) : tree_iterator(root)  {
    }

    template <class T>
    PreOrderTreeIterator<T> PreOrderTreeView<T>::begin() {
        tree_iterator.iter = 0;
        return tree_iterator;
    }

    template <class T>
    PreOrderTreeIterator<T> PreOrderTreeView<T>::end() {
        tree_iterator.iter = int(tree_iterator.iterated.size());
        return tree_iterator;
    }

    template <class T>
    PreOrderTreeView<T> PreOrder(Tree<T> *root){
    return PreOrderTreeView<T>(root);
    }

}



#endif //JIMP_EXERCISES_TREEPREORDER_H
