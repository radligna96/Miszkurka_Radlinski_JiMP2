//
// Created by Ignacy on 3/14/2017.
//

#include "Palindrome.h"

using namespace std;

int main() {
    int menu;
    string slowo("");
    char c;
    cout << "--MENU--" << endl << "0 - WYJSCIE" << endl << "1 - SPRAWDZ PALINDROM"<<endl;
    cin >> menu;
    if (menu == 0)
    {
        return 0;
    }
    else if (menu == 1)
    {
        cout << "Wpisz slowo prosze" << endl;
        getchar();
        while ((c = getchar())!= 10)
        {
            slowo += c;
        }
        is_palindrome(slowo);
    }
    else
    {
        cout << "zle wybrales numer";
    }return 0;

}