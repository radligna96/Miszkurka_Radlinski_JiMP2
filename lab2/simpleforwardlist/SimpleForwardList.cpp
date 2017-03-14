//
// Created by Ignacy on 3/14/2017.
//



#include "SimpleForwardList.h"





ForwardList *CreateNode(int value)

{

    ForwardList *first, *tmp;

    first = nullptr;

    tmp=new ForwardList;

    tmp->value=value;

    tmp->next=first;

    first=tmp;



    return first;

}



ForwardList *PushFront(ForwardList *list, int value)

{

    if (list) {

        ForwardList *tmp;

        tmp = new ForwardList;

        tmp->value = value;

        tmp->next = list;

        list = tmp;

        return list;

    }

    else

        return list;

}



void Append(ForwardList *list, ForwardList *tail){



    while(list->next)

        list= list->next;

    list->next = tail;



}



void show (ForwardList *tmp)

{   cout<<"pokazuje: ";

    while (tmp!= nullptr){

        cout<<tmp->value<<" ";

        tmp=tmp->next;

    }

}



void DestroyList(ForwardList *list) {

    ForwardList *tmp;



    if(list->next) {

        while (list->next) {

            tmp = list;

            list = list->next;

        }

        //cout << tmp->next->value << " ";

        tmp->next = nullptr;

        delete tmp->next;

        list = tmp;

        //cout << list->value;

    }

    else

    {

        cout <<"jestem popieprona";



        list= nullptr;

        delete list;

    }

}

