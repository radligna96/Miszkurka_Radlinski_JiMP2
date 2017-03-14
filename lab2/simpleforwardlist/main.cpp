//
// Created by Ignacy on 3/14/2017.
//



#include "SimpleForwardList.h"



int main()

{

    ForwardList *tail;

    tail = new ForwardList;

    tail->value = 326;

    tail->next = nullptr;



    ForwardList *head = CreateNode(506);

    show (head);

    head = PushFront(head, 607);

    cout<<endl;

    show (head);

    Append(head, tail);

    head = PushFront(head, 4);

    cout<<endl;

    show (head);

    DestroyList(head);

    cout<<endl;

    show (head);

    DestroyList(head);

    cout<<endl;

    show (head);

    DestroyList(head);

    cout<<endl;

    show (head);

    DestroyList(head);

    cout<<endl;

    show (head);    DestroyList(head);

    cout<<endl;

    show (head);

    return 0;

}