//
// Created by radligna on 30.05.17.
//

#ifndef JIMP_EXERCISES_TREE_H
#define JIMP_EXERCISES_TREE_H

#include <cstddef>
#include <iostream>

#include <sstream>

#include <vector>

#include <memory>

#include <string>

#include <sstream>

#include <algorithm>

using std::move;

namespace tree{

    template<class T>
    class Tree  {
    public:
        T value;
        std::unique_ptr<Tree<T>> left;
        std::unique_ptr<Tree<T>> right;
        int size;
        int depth;
        Tree();
        Tree(T value);
        ~Tree(){};

        auto Root(){return this;};
        
        T Value(){
            return value;
        }
        int Size(){
            return size;
        }
        int Depth();

        bool operator<(const Tree &other) const {
            return this->value < other.value;
        }
        //Tree<T> Find(T value);
        void Insert(T value);
    };

    template<class T>
    Tree<T>::Tree() {
        depth= 0;
        size = 0;
        left = nullptr;
        right = nullptr;
    }

    template<class T>
    Tree<T>::Tree(T value) {
        size = 1;
        depth = 1;
        this->value = value;
        left = nullptr;
        right = nullptr;
    }


    template<class T>
    void Tree<T>::Insert(T val) {
        if (val < value) {
            if (left != nullptr) left->Insert(val);
            else {
                std::unique_ptr<Tree<T>> new_node = std::make_unique<Tree<T>>();
                new_node->value = val;
                new_node->left = nullptr;
                new_node->right = nullptr;
                this->left = std::move(new_node);
            }
        }
        else {
            if ( right != nullptr) right->Insert(val);
            else {
                std::unique_ptr<Tree<T>> new_node = std::make_unique<Tree<T>>();
                new_node->value = val;
                new_node->left = nullptr;
                new_node->right = nullptr;
                this->right = std::move(new_node);
            }
        }
        size++;
    }


    template<class T>
    int Tree<T>::Depth(){
        if(this) {
            return 1 + std::max(this->left->Depth(), this->right->Depth());
        } else {
            return 0;
        }
    }

/*
    template<class T>
    void Tree<T>::Insert(T value) {
        if(size == 0) {
            this->value = value;
            size ++;
        }

        else{
            Tree *new_node = new Tree();
            new_node->value = value; //nowo stworzone dziecko nie ma nullptry na left i right
            new_node->left = nullptr;
            new_node->right = nullptr;
            if(*this < *new_node) {
                if(this->right != nullptr) {
                    //delete new_node;
                    this->right->Insert(value);
                }

                else {
                    this->right = new_node;
                    size ++;
                }
            }
            else{
                if(this->left != nullptr){
                    std::cout<<"uu";
                    //delete new_node;
                    this->left->Insert(value);
                }
                else {
                    this->left = new_node;
                    size ++;
                }
            }
        }
    }
*/

/*
    template<class T>
    Tree<T> Tree<T>::Find(T value) {
        std::cout<<this->value<<std::endl;
        if(this->value < value) {
            if(this->right != nullptr) {
                this->right->Find(value);
            }
        }
        else if(this->value > value){
            if(this->left != nullptr){
                this->left->Find(value);
            }
        }
        else
            return *this;
    }*/

}



#endif //JIMP_EXERCISES_TREE_H
