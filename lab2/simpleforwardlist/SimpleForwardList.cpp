//
// Created by Ignacy on 3/14/2017.
//

#include "SimpleForwardList.h"


ForwardList *CreateNode(int value) {
    ForwardList *tmp;
    tmp = new ForwardList;
    tmp->value = value;
    tmp->next = nullptr;
    return tmp;
}

ForwardList *PushFront(ForwardList *list, int value) {
    if (list) {
        ForwardList *tmp;
        tmp = new ForwardList;
        tmp->value = value;
        tmp->next = list;
        list = tmp;
        return list;
    } else
        return list;
}

void Append(ForwardList *list, ForwardList *tail) {
    if(!list) {
        
    } else {
        while (list->next)
            list = list->next;
        list->next = tail;
    }

}

void show(ForwardList *tmp) {
    cout << "pokazuje: ";
    while (tmp != nullptr) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

void DestroyList(ForwardList *list) {
    while (list)
    {
        ForwardList* old = list;
        list = list->next;
        delete old;
    }
}