//
// Created by miszk on 4/9/2017.
//

#include "Word.h"
using datastructures::Word;

Word::Word(string str)
{
    searched_word = str;
}

bool Word::operator<(Word ignas) const {
    return (searched_word<ignas.searched_word);
}

bool Word::operator>(Word ignas) const {
    return (searched_word>ignas.searched_word);
}

bool Word::operator==(Word ignas) const {
    return (searched_word==ignas.searched_word);
}