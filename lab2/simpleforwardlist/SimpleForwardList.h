//
// Created by Ignacy on 3/14/2017.
//


#ifndef JIMP_EXERCISES_SIMPLEFORWARDLIST_H

#define JIMP_EXERCISES_SIMPLEFORWARDLIST_H

using namespace std;
#include "iostream"

#include "iostream"

#include "stdio.h"

#include "fstream"

#include "map"

#include "string"

#include "cstdlib"

#include "cctype"

#include "vector"

#include "stdint.h"

#include "string.h"

struct ForwardList
{
    int value;
    ForwardList *next;
};

ForwardList *CreateNode(int value);
void show (ForwardList *tmp);
ForwardList *PushFront(ForwardList *list, int value);
void Append(ForwardList *list, ForwardList *tail);
void DestroyList(ForwardList *list);




#endif //JIMP_EXERCISES_SIMPLEFORWARDLIST_H