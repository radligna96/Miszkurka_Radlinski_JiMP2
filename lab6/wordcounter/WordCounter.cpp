//
// Created by miszk on 4/9/2017.
//

#include "WordCounter.h"
using datastructures::WordCounter;
using datastructures::Word;


WordCounter::WordCounter(initializer_list<Word> words) {
    total = 0;
    distinct = 0;
    int tmp = 0;
    bool flag=true;
    for (auto word : words)
    {
        total++;
        flag = true;
        tmp = 0;
        for(pair<Word, Counts> iter : mylist)
        {
            if (iter.first.searched_word == word.searched_word)
            {
                find(mylist.begin(),mylist.end(),iter)->second.count++;
                flag = false;
                break;
            }
            tmp++;
        }

        if (flag)
        {
            Counts oo{1};
            distinct++;
            mylist.emplace_back(std::make_pair(word,oo));
        }
    }
    /*
    std::ifstream myfile(file_);
    if(!myfile)
        cout<<"error 406, plik1 not found!"<<endl;
    else{
        string word, word3;
        map <string, int> dictionary;
        while(myfile >> word) {

            word3="";
            std::regex pattern {R"([[:alnum:]]+)"};
            std::smatch matches;
            std::regex_search (word,matches, pattern);
            for (auto match: matches)
            {
                word3 = match.str();
            }
            word = word3;

            if(word != "")
            {
                total += 1;
                if(dictionary.find(word) == dictionary.end())
                {
                    dictionary.emplace(word, 1);
                    distinct++;
                }
                else
                {
                    dictionary.find(word)->second += 1;
                }
            }
        }
        Word word1;
        Counts wc;
        for(auto iter : dictionary)
        {

            word1.searched_word = iter.first;
            wc.count = iter.second;
            cout<<word1.searched_word<<" "<<wc.count<<endl;
            mylist.emplace_back(std::make_pair(word1, wc));
        }
    }

    myfile.close();
*/

}

int WordCounter::DistinctWords() {
    return distinct;
}

int WordCounter::TotalWords() {
    return total;
}

int WordCounter::operator[](string wanted) {
    for(auto iter : mylist)
    {
        if(iter.first.searched_word == wanted)
        {
            return iter.second.count;
        }
    }
    return 0;
}


/*
set<Word> WordCounter::Words() {
    set<Word> _set;
    //aga poszla jesc
    list<int> lista;

    for(auto iter : mylist)
    {
        lista.emplace_back(iter.second.count);
    }

    lista.sort();

    //aga wrocila
/*
    for(int iter : lista)
    {
        for(pair<Word, Counts> pair2 : mylist)
        {

            if (iter == pair2.second.count)
            {
             //   _set.emplace(Word (pair2.first.searched_word));
            //    mylist.remove(pair2);
                break;
            }
        }
    }





    for(auto iter : mylist)
    {
        _set.emplace(iter.first);
    }


}
*/

set<Word> WordCounter::Words() {
    list<int> lista;
    set<Word> _set;

    for(auto iter : mylist)
    {
        lista.emplace_back(iter.second.count);
    }

    lista.sort();

    map<Word, Counts> mapka;
    for(auto iter : mylist)
    {
        mapka.emplace(iter.first, iter.second);
    }

    for(int iter : lista)
    {
        //cout<<iter<<" ";
        for(auto em_el : mapka)
        {
            //cout<<em_el.first.searched_word;
            //_set.emplace(find(mylist.begin(),mylist.end(),em_el)->first);

            if (iter == em_el.second.count)
            {
                //cout<<em_el.second.count<<" ";
                _set.emplace(em_el.first);
                em_el.second.count=-1;
                break;
            }
            //cout<<iter<<" "<<em_el.first.searched_word<<" "<<em_el.second.count<<endl;
        }

    }
        return _set;
}

WordCounter::WordCounter() {

    total = 0;
    distinct = 0;
}

