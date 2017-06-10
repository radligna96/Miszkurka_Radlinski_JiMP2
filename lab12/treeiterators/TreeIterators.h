//
// Created by miszk on 6/10/2017.
//

#ifndef JIMP_EXERCISES_TREEITERATORS_H
#define JIMP_EXERCISES_TREEITERATORS_H

#include <Tree.h>
#include "TreeInorder.h"
#include "TreePostorder.h"

namespace tree {

    template <class T>
    class TreeIterator {
    public:
        TreeIterator(){};
        TreeIterator(Tree<T> * root_);
        Tree<T> *root;

        virtual void BuildVector(Tree<T> *node)=0;
        const void PushBack(const T new_value){
            iterated.emplace_back(new_value);
        }

        void operator++();
        T operator*();
        bool operator!=(const TreeIterator &other)const;


        int iter;
        std::vector<T> iterated;

    };

    template <class T>
    TreeIterator<T>::TreeIterator(Tree<T> *root_) {
        root = root_;
        iter = 0;
    }

    template <class T>
    void TreeIterator<T>::operator++() {
        iter++;
    }

    template <class T>
    T TreeIterator<T>::operator*() {
        return iterated[iter];
    }

    template <class T>
    bool TreeIterator<T>::operator!=(const TreeIterator &other) const {
        return this->iter != other.iter;
    }


    template <class T>
    class PreOrderTreeIterator : public TreeIterator<T> {
    public:
        PreOrderTreeIterator(){};
        PreOrderTreeIterator(Tree<T> * ptr);
        void BuildVector(Tree<T> *node);
    };

}

#endif //JIMP_EXERCISES_TREEITERATORS_H
