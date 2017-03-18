//
// Created by Ignacy on 3/14/2017.
//

#include "Polybius.h"

string PolybiusDecrypt(string crypted)
{
    string message="";
    string tmp="";

    map<string, string> mapa = {{"11","a"}, {"12","b"}, {"13","c"}, {"14","d"}, {"15","e"},
                                {"21","f"}, {"22","g"}, {"23","h"}, {"24","i"}, {"24","j"},{"25","k"},
                                {"31","l"}, {"32","m"}, {"33","n"}, {"34","o"}, {"35","p"},
                                {"41","q"}, {"42","r"}, {"43","s"}, {"44","t"}, {"45","u"},
                                {"51","v"}, {"52","w"}, {"53","x"}, {"54","y"}, {"55","z"}};

    for (int i=0; i<crypted.length(); i+=2) // huehue ale pzyypal miszkurka
    {
        tmp="";
        tmp += crypted[i];
        tmp += crypted[i+1];
        message += mapa[tmp];
    }
    return message;
}
string PolybiusCrypt(string message)
{
    string crypted;

    for (int i=0;i<message.length();i++)
    {
        message[i]=(char)(tolower(message[i]));
    }
    map<char, string> mapka = {{'a', "11"}, {'b', "12"}, {'c', "13"}, {'d', "14"}, {'e', "15"},
                               {'f', "21"}, {'g', "22"}, {'h', "23"}, {'i', "24"}, {'j', "24"}, {'k', "25"},
                               {'l', "31"}, {'m', "32"}, {'n', "33"}, {'o', "34"}, {'p', "35"},
                               {'q', "41"}, {'r', "42"}, {'s', "43"}, {'t', "44"}, {'u', "45"},
                               {'v', "51"}, {'w', "52"}, {'x', "53"}, {'y', "54"}, {'z', "55"}};

    for (int i = 0; i <message.length(); i++)
    {
        crypted += mapka[message[i]];
    }
    return crypted;
}
int funkcja(int kk)
{
    string word;
    string message="";
    ofstream myfile_Z("plik2.txt", ios_base::in | ios_base::trunc);
    if(!myfile_Z)
        cout<<"error 406, plik2 not found!"<<endl;
    ifstream myfile("plik1.txt");
    if(!myfile)
        cout<<"error 406, plik1 not found!"<<endl;
    while(myfile >> word) {
        cout << word;
        myfile_Z<<word;
        for (int i=0; i<word.length(); i++)
        {
            message+=word[i];
        }
    }
    message = PolybiusCrypt(message);
    cout<<endl<<message<<endl<<PolybiusDecrypt(message);
    myfile.close();
    return kk+1;
}