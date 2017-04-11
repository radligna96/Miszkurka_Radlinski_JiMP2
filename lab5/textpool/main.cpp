//
// Created by radligna on 2017-04-04.
//

#include "TextPool.h"

using namespace pool;
using namespace std;

int main() {
    //Inicjalizacja wstępna puli za pomocą listy inicjalizacyjnej
    TextPool pool {"abc", "efg", "hij", "klmn", "oprst", "efg"};

    cout<<pool.StoredStringCount()<<endl;
    //wstawienie napisu do puli
    string_view s1 = pool.Intern("efg");

    cout<<pool.StoredStringCount()<<endl;

    //wstawienie kolejnego napisu do puli (w obu przypadkach nie
    //powinien się zmienić rozmiar puli)
    string_view s2 = pool.Intern("efg");

    cout<<pool.StoredStringCount()<<endl;

    cout<<s1.begin()<<endl<<s2.begin();


    return 0;
}