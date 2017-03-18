//
// Created by Ignacy on 3/14/2017.
//

#include "XorCypherBreaker.h"


string XorCypherBreaker(const vector<char> &cryptogram, int key_length, const vector<string> &dictionary)

{
    string tmp_key= "   ", key = "";
    int word_counter=0, max_wc=-1;

    for (int i=97; i<=122; i++) {
        for (int j = 97; j <= 122; j++) {
            for (int k = 97; k <= 122; k++) {
                tmp_key[0] = (char)(i);
                tmp_key[1] = (char)(j);
                tmp_key[2] = (char)(k);
                word_counter=0;
                int iter =0;
                string word ="";

                for (int letter : cryptogram) {

                    char new_letter = (char)(tmp_key[iter % key_length] xor letter);

                    if ((new_letter <= 122) && (new_letter >= 97))
                    {
                        word += new_letter;
                    }
                    else {
                        if (word.length() > 3) {
                            if (find(dictionary.begin(),dictionary.end(),word) != dictionary.end()) {
                                word_counter++;
                            }
                        }
                        word = "";
                    }
                    iter++;
                }
                if (word_counter >= max_wc) {
                    max_wc = word_counter;
                    key = tmp_key;
                }
            }
        }
    }
    return key;
//test4
}