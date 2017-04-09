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
    //cout<<counter.total<<" "<<counter.distinct<<endl;

    cout<<endl;
    for(auto iter : secik)
    {
        cout<<iter.searched_word<<" ";
    }


    return 0;
}