//
// Created by miszagni on 16.05.17.
//

#include "Algo.h"


void Algo::CopyInto(const vector<int> &v, int n_elements, vector<int> *out) {
    out->resize((unsigned long) n_elements);
    std::copy_n(v.begin(), n_elements, out->begin());
}

bool Algo::Contains(const std::vector<int> &v, int element) {
    std::vector<int>::const_iterator it = std::find(v.begin(), v.end(), element);
    return it != v.end();

}

void Algo::InitializeWith(int initial_value, std::vector<int> *v) {
    std::fill(v->begin(), v->end(), initial_value);
}

int Algo::Product(const std::vector<int> &v) {
    int product = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());
    return product;
}

int Algo::Sum(const std::vector<int> &v) {
    int sum = std::accumulate(v.begin(), v.end(), 0);
    return sum;
}

void Algo::SortInPlace(std::vector<int> *v) {
    std::sort(v->begin(), v->end());
}

std::vector<int> Algo::Sort(const std::vector<int> &v) {
    vector<int> l_czy_k = v;
    std::sort(l_czy_k.begin(), l_czy_k.end());
    return l_czy_k;
}
