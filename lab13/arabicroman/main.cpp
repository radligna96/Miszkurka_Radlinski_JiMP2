//
// Created by radligna on 06.06.17.
//
/*
#include "Klasa1.h"
#include "Klasa1Test.h"

#include <utility>

using TestFunction = bool (*)();

std::vector<std::pair<string,TestFunction>> all_tests{{"ArabicRomanConversionOf1ReturnsI", ArabicRomanConversionOf1ReturnsI}, {"ArabicRomanConversionOfNegativeReturns0", ArabicRomanConversionOfNegativeReturns0}, {"ArabicRomanConversionOf92ReturnsXCII", ArabicRomanConversionOf92ReturnsXCII}, {"ArabicRomanConversionOfbiggerthan3999Returns0",ArabicRomanConversionOfbiggerthan3999Returns0}, {"RomanArabicConversionOfIReturns1", RomanArabicConversionOfIReturns1}, {"RomanArabicConversionOfEmptyStringReturns0", RomanArabicConversionOfEmptyStringReturns0}};

void ReportTest(const string &failed_test_name) {
    std::cerr << "Test " << failed_test_name << " FAILED" <<endl;
}

int RunTests(const std::vector<std::pair<string,TestFunction>> tests){
    int failed_tests = 0;
    for(auto test : tests){
        bool result = test.second();
        if( result)
            continue;
        else{
            ReportTest(test.first);
            failed_tests ++;
        }
    }
    return failed_tests;
}

int main()
{
    cout<<ArabicToRoman(92)<<endl;
    cout<<RzymToArab("XCII")<<endl;

    int result = RunTests(all_tests);
    cout<<"number of errors: "<<result<<endl;

    return 0;
}
 */

#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

class LessThen
{
    int v;
public:
    LessThen(int _v){v=_v;}
    bool operator()(int k){return k<v;}
};

int main()
{
  list<int> li;
    for(int i=0;i<10;i++)
    {li.push_back(i);li.push_front(i);}
    cout<< count_if(li.begin(),li.end(),LessThen(3)) <<endl;
}