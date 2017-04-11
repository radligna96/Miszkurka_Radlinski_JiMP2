//
// Created by miszk on 4/9/2017.
//

#include "WordCounter.h"
using datastructures::WordCounter;
using datastructures::Word;

int main()
{
    WordCounter counter {Word("a"), Word("p"), Word("a"), Word("a"), Word("hi"), Word("voltage")};
    set<Word> secik;
    secik = counter.Words();
    cout<<"o";

    return 0;
}