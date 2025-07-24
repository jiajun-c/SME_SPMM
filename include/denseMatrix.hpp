#include <iostream>
#include "vector.hpp"

template<typename T>
class denseMatrix
{
private:

    /* data */
public:
    size_t nRows;
    size_t nCols;
    Vector<T>values;

    denseMatrix(/* args */);
    denseMatrix(size_t rows, size_t cols, Vector<T>&&values);
    denseMatrix(size_t rows, size_t cols, bool randGen, T constValue);
    ~denseMatrix();
};

template <typename T>
denseMatrix<T>::denseMatrix(size_t rows, size_t cols, bool randGen, T constValue): values(Vector<T>(rows*cols)) {
    if (!randGen) {
        for (int i = 0; i < rows*cols; i++) values.values[i] = constValue;
    }
    nRows = rows;
    nCols = cols;
}

template <typename T>
denseMatrix<T>::denseMatrix(size_t rows, size_t cols, Vector<T>&&values) {
    nRows = rows;
    nCols = cols;
    this->values.values = values.values;
    this->values.size = values.size;
    values.values = nullptr;
}


template <typename T>
denseMatrix<T>::denseMatrix(/* args */)
{

}

template <typename T>
denseMatrix<T>::~denseMatrix()
{
    
}
