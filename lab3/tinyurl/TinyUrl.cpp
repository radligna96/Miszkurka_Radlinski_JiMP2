//
// Created by Ignacy on 3/14/2017.
//


#include "TinyUrl.h"
namespace tinyurl {

    void NextHash(array<char, 6> *state) {
        unsigned long i = 5;
        unsigned long index;
        string alfa = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        //operator[]( 1 );
        if (state->at(i) == 'z') {
            while (state->at(i) == 'z') {
                state->at(i) = '0';
                i--;
            }
            index = alfa.find(state->at(i));
            state->at(i) = alfa.at(index + 1);
        } else {

            index = alfa.find(state->at(i));
            state->at(i) = alfa.at(index + 1);

        }
        cout << endl << state->begin();
    }

}