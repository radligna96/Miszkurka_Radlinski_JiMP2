//
// Created by miszk on 4/5/2017.
//


#include "Matrix.h"
using algebra::Matrix;

std::complex<double> funkcja(string value_s) {
    string real = value_s.substr(0,value_s.find('i'));
    string imagin_dragons = value_s.substr(value_s.find('i')+1,value_s.length());
    double r = std::stod(real);
    double i = std::stod(imagin_dragons);
    std::complex<double> o;
    o.real(r);
    o.imag(i);
    return o;
}

Matrix::Matrix(string matrix_str) {

    long semicolons = std::count(matrix_str.begin(), matrix_str.end(), ';');
    n_rows = int(semicolons + 1);
    string tmp = matrix_str.substr(0, matrix_str.find(';'));
    long spaces = std::count(tmp.begin(), tmp.end(), ' ');
    n_cols = int(spaces + 1);

    std::complex<double> **tablica = new std::complex<double>  *[n_rows];
    for (int i=0; i< n_rows; i++)
        tablica[i]=new std::complex<double>  [n_cols];
    array = tablica;

    string line;
    line = matrix_str.substr(1, matrix_str.length() - 2);
    regex pattern {R"(\w+\.*\w+\.*\w+)"};
    string rendered="";
    smatch matches;
    int row = 0;
    int col =0;

    while (std::regex_search (line,matches, pattern)) {
        for (auto match: matches)
        {

            string x = match.str();
            array[row][col] = funkcja(x);
            col++;
            if(col > n_cols - 1) {
                col = 0;
                row++;
            }
        }
        line = matches.suffix().str();
    }
}

Matrix::Matrix(int rows, int cols) {
    n_rows = rows;
    n_cols = cols;
    if ((rows<0)||(cols<0))
        std::cout<<"wtf dude";

    std::complex<double> **tablica = new std::complex<double>  *[rows];
    for (int i=0; i< rows; i++)
        tablica[i]=new std::complex<double>  [cols];
    array = tablica;
}

Matrix::Matrix(const Matrix &matrix) {
    //robimy nowa tablice 2d
    n_cols = matrix.n_cols;
    n_rows = matrix.n_rows;
    std::complex<double> **new_array = new std::complex<double>  *[n_rows];
    for (int i=0; i< n_rows; i++)
        new_array[i]=new std::complex<double>  [n_cols];

    for (int i=0; i<n_rows; i++)
    {
        for (int j=0;j<n_cols; j++)
        {
            new_array[i][j]=matrix.array[i][j];
        }
    }
    array = new_array;
}

Matrix & Matrix::operator=(const Matrix& matrix) {
    //jeśli ktoś wpadł na pomysł x = x;
    if (this == &matrix) {
        return *this;
    }
    //w przyciwynym wypadku mamy x = y;
    //musimy sami zwolnic pamięć po x (czyli this):
    for (int i=0; i<n_rows; i++)
    {
        delete [] array [i];
    }
    delete [] array;
    //i wreszcie kopiowanie, ten kod jest
    //jest identyczny więc można by go wydzielić do innej metody...
    n_cols = matrix.n_cols;
    n_rows = matrix.n_rows;
    std::complex<double> **new_array = new std::complex<double>  *[n_rows];
    for (int i=0; i< n_rows; i++)
        new_array[i]=new std::complex<double>  [n_cols];

    for (int i=0; i<n_rows; i++)
    {
        for (int j=0;j<n_cols; j++)
        {
            new_array[i][j]=matrix.array[i][j];
        }
    }
    array = new_array;

}

Matrix Matrix::Add(const Matrix &matrix) const {
    //array matrix.array
    if ((n_rows ==matrix.n_rows)&&(n_cols == matrix.n_cols))
    {
        Matrix new_matrix(n_rows, n_cols);
        for(int i= 0; i<n_rows; i++)
        {
            for(int j=0; j<n_cols;j++)
            {
                new_matrix.array[i][j] = array[i][j] + matrix.array[i][j];
            }
        }
        return new_matrix;
    }
    else
        return Matrix();
}

Matrix Matrix::Sub(const Matrix &matrix) {
    //array matrix.array
    if ((n_rows ==matrix.n_rows)&&(n_cols == matrix.n_cols))
    {
        Matrix new_matrix(n_rows, n_cols);
        for(int i= 0; i<n_rows; i++)
        {
            for(int j=0; j<n_cols;j++)
            {
                new_matrix.array[i][j] = array[i][j] - matrix.array[i][j];
            }
        }
        return new_matrix;
    }
    else
        return Matrix();
}

Matrix Matrix::Mul(const Matrix &matrix) {
    if (n_cols == matrix.n_rows)
    {   std::complex<double> whatever = 0i;
        Matrix new_matrix(n_rows, matrix.n_cols);
        for(int i= 0; i<n_rows; i++)
        {
            for(int j=0; j<matrix.n_cols;j++)
            {
                whatever = 0i;
                for(int k=0; k<n_cols; k++)
                {
                     whatever+=array[i][k]*matrix.array[k][j];
                    //cout<<i<<" "<<j<<" "<<k<<endl;
                    //cout<<array[i][k]<<" "<<matrix.array[k][j]<<endl;
                   // cout<<"a po wymnozeniu to "<<whatever<<endl;
                }
                //cout<<endl;
                new_matrix.array[i][j] = whatever;
            }
        }
        return new_matrix;
    }
    else
    {
        Matrix uu(0,0);
        return uu;
    }

}

Matrix Matrix::Pow(int power) {

    if(power==0)
    {
        Matrix new_matrix(n_rows, n_cols);
        for(int i=0; i<n_rows; i++)
        {
            for(int j=0; j<n_cols; j++)
            {
                if(i==j)
                    new_matrix.array[i][j] = 1;
                else
                    new_matrix.array[i][j] = 0;
            }
        }
        return new_matrix;
    }
    else
    {
        Matrix new_matrix(*this);
        Matrix first_matrix(*this);

        while(power > 1)
        {
            new_matrix = new_matrix.Mul(first_matrix);
            power--;
        }
        return new_matrix;
    }
}

Matrix Matrix::Div(const Matrix &matrix) {
    return Matrix();
}

std::pair<size_t, size_t> Matrix::Size() {
    return std::pair<size_t, size_t>{n_rows,n_cols};
}

Matrix::Matrix() {
    n_rows = n_cols = 0;
}

string dtos(double dou) {
    string dou_s = std::to_string(dou);
    for(int i=int(dou_s.length())-1; i>=0; i--)
    {
        if (dou_s[i] != '0')
        {
            break;
        }
        else
        {
            dou_s = dou_s.substr(0, dou_s.length()-1);
        }
    }
    if (dou_s[dou_s.length()-1]=='.')
        dou_s = dou_s.substr(0, dou_s.length()-1);
    return dou_s;
}

string Matrix::Print() const {
    if (n_cols == 0)
    {
        return "[]";
    }
    string ret ="[";
    for(int i=0; i<n_rows; i++)
    {
        for( int j=0; j<n_cols; j++)
        {
            ret += dtos(array[i][j].real());
            ret += "i";
            ret+= dtos(array[i][j].imag());

            if(j!=n_cols-1)
                ret += ", ";
        }
        if(i!=n_rows-1)
            ret += "; ";
    }
    ret += "]";
    return ret;
}

Matrix::Matrix(std::initializer_list<std::vector<std::complex<double>>> matrix_list) {

    int num_row = int(matrix_list.size());
    unsigned long num_col =0;
    for(auto row : matrix_list)                    // ogarnianie rozmiaru arraya
    {
        num_col = row.size();
        break;
    }

    n_cols = int(num_col);                          // USUNALEM NEW_MATRIX!!!!
    n_rows = num_row;

    std::complex<double> **tablica = new std::complex<double>  *[n_rows]; //alokacja pamieci na array
    for (int i=0; i< n_rows; i++)
        tablica[i]=new std::complex<double>  [n_cols];
    array = tablica;
    array[0][0] = 1.0 + 1.0i;


    int i=0;
    int j=0;
    for(std::vector<std::complex<double>> row : matrix_list)
    {
        j=0;
        for(std::complex<double> element : row)
        {
            array[i][j] = element;
            //cout<<" "<<element;
            j++;
        }
        i++;
        //cout<<endl;
    }


}

Matrix::~Matrix() {
    for (int i=0; i<n_rows; i++)
    {
        delete [] array [i];
    }
    delete [] array;

}

