//
// Created by radligna on 06.06.17.
//

#include "Klasa1Test.h"

bool ArabicRomanConversionOf1ReturnsI() {
    string expected = "I";
    string result = ArabicToRoman(1);
    return expected == result;
}

bool ArabicRomanConversionOf92ReturnsXCII() {
    string expected = "XCII";
    string result = ArabicToRoman(92);
    return expected == result;
}

bool ArabicRomanConversionOfNegativeReturns0(){
    string expected = "0";
    string result = ArabicToRoman(-92);
    return expected == result;
}

bool ArabicRomanConversionOfbiggerthan3999Returns0() {
    string expected = "0";
    string result = ArabicToRoman(4000);
    return expected == result;
}

bool RomanArabicConversionOfIReturns1() {
    int expected = 1;
    int result = RzymToArab("I");
    return expected == result;
}

bool RomanArabicConversionOfEmptyStringReturns0() {
    int expected = 0;
    int result = RzymToArab("");
    return expected == result;
}

