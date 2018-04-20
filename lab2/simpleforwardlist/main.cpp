//
// Created by Ignacy on 3/14/2017.
//

#include "SimpleForwardList.h"

int main()
{
    ForwardList *head = CreateNode(506);
    ForwardList *node = CreateNode(402);
    ForwardList *node2 = CreateNode(400);
    show (head);
    Append(node, node2);
    Append(head, node);
    show(head);
    ForwardList *nHead = nullptr;
    show(nHead);
    Append(nHead, head);
    show(nHead);
    return 0;

}