//
// Created by miszk on 4/5/2017.
//

#include "Matrix.h"
using algebra::Matrix;
int main(){

    std::initializer_list<std::vector<std::complex<double>>> lista = {{1.0i, 0., 0.}, {0., 1.0i, 0.}, {0., 0., 1.0i}};
    Matrix oggy(lista);
    std::complex<double> nana = 2 + 1i;
    std::complex<double> nana2 = 1 + 1i;
    //cout<<nana*nana2<<endl<<endl;
    //Matrix oggy("[7i1, 0i0; 0i0, 0i1]");

    //cout<<oggy.Print()<<endl;

    Matrix m1{{1. + 3.0i, 2. + 2.0i}, {3. + 1.0i, 4. + 6.0i}, {5. + 5.i, 6. + 4.0i}};
    Matrix m2{{7. + 1.0i, 12. + 1.3i, 1.5 + 3.7i, 1.0i}, {15. + 2.0i, 2. + 4.6i, 2.1 + 3.8i, 1.4 + 0.2i}};
    //cout<<m1.Size().first<<" "<<m1.Size().second<<endl;
    //cout<<m2.Size().first<<" "<<m2.Size().second<<endl;
    //cout<<oggy.Pow(2).Print()<<endl;
    oggy.Pow(2);
    //cout<<m3.array[0][0];




    /*
    Matrix m1(argv[1]);
    Matrix m2(argv[2]);
    cout << "Macierz pierwsza: " << m1.print() << endl;
    cour << "Macierz druga: " << m2.print() << endl;
    cout << "Dodawanie" << (m1.add(m2)).print() << endl;
    cout << "Odejmowanie" << (m1.sub(m2)).print() << endl;
    cout << "Mnożenie" << (m1.mul(m2)).print() << endl;
    cout << "Dzielenie" << (m1.div(m2)).print() << endl;
    cout << "Potęgowanie" << (m1.pow(2)).print() << endl;
    cout << "Potęgowanie" << (m2.pow(2)).print() << endl;
     */
    return 0;
}