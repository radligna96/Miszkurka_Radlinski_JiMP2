//
// Created by miszk on 4/5/2017.
//

#ifndef JIMP_EXERCISES_MATRIX_H
#define JIMP_EXERCISES_MATRIX_H

#include <complex>
#include "string.h"
#include "iostream"
#include <regex>
#include <initializer_list>
#include <vector>
#include <memory>
#include <utility>



using std::endl;
using std::regex;
using std::smatch;
using std::string;
using std::cout;

namespace algebra {
    class Matrix {
    public:
        Matrix();

        ~Matrix();

        Matrix(string matrix_str);

        Matrix(int rows, int cols);

        Matrix(std::initializer_list<std::vector<std::complex<double>>> matrix_list);

        Matrix(const Matrix &matrix);

        Matrix Add(const Matrix &matrix) const;

        Matrix Sub(const Matrix &matrix);

        Matrix Mul(const Matrix &matrix);

        Matrix Div(const Matrix &matrix);

        Matrix Pow(int power);

        std::pair<size_t, size_t> Size();

        string Print() const;

        Matrix & operator=(const Matrix& matrix);

//private:
        std::complex<double> **array;
        int n_rows;
        int n_cols;

    protected:

    };
}
#endif //JIMP_EXERCISES_MATRIX_H
