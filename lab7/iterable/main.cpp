//
// Created by miszk on 4/30/2017.
//

#include "Iterable.h"

using namespace utility;

int main() {

    vector <int> vi {1,23, 44};
    vector <string> vs {"ff","oo"};
    Zipper s {vi,vs};
    for (auto iter : s.zipped){
        cout<<endl<<iter.first<<" "<<iter.second;
    }

    auto it = ZipperIterator(vi.begin(),vs.begin(), vi.end(), vs.end());

    return 0;
}

/*
więc tak do lab7 jest dodane nowe zadanie z iterable, o co chodzi?
o stworzenie kilku klas bazowych służących jako baza pod implementację obiektów iterowalnych.
Jako implementacje należy dorzucić zipper (który był już na zajeciach), enumerable (który do wekotra stringów generuje parę index i wartość, a la odpowiednia metoda z pythona) i product która tworzy iloczyn kartezjański podanych wektorów.
testy jednostkowe powinny naprowadzić na implementacje
tzn. należy zdefiniować klase bazową pod iterator: IterableIterator z metodami:
        Dereference()
Next()
NotEquals()
Iterable z metodami:
        Begin()
End()
klasa Iterable dodatkowo powinna implementować begin() i end(), które są wykorzystywane przez range for.
dodatkowo ponieważ metoda begin() i end() poiwnno zwrcać itertor przez wartość należy doimplemntować IteratorIterableWrapper, która opakowuje smart pointer do różnych implmentacji IterableIterator, wtedy musi mieć zdefniowane:
operator++()
operator!=(const IterableIteratorWrapper &)
operator*()
iterujemy po dwóch wekotrach pierwszy po intach drugi po stringach (enumerate tylko po stringach ale produkuje pary int, string)
 */