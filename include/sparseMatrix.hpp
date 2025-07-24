#include <iostream>
#include "vector.hpp"

template<typename T>
class sparseMatrix
{
private:
    size_t nRows;
    size_t nCols;
    Vector<T>values;
    Vector<size_t>colIdx;
    Vector<size_t>rowPtr;
    /* data */
public:
    sparseMatrix(/* args */);
    sparseMatrix(size_t rows, size_t cols, Vector<T>&&values, Vector<size_t>&&colIdx, Vector<size_t>&&rowIdx);
    ~sparseMatrix();
};

template <typename T>
sparseMatrix<T>::sparseMatrix(size_t rows, size_t cols, Vector<T>&&values, Vector<size_t>&&colIdx, Vector<size_t>&&rowPtr) {
    nRows = rows;
    nCols = cols;
    this->values.values = values.values;
    this->values.size = values.size;
    values.values = nullptr;

    this->colIdx.values = colIdx.values;
    this->colIdx.size = colIdx.size;
    colIdx.values = nullptr;

    this->rowPtr.values = rowPtr.values;
    this->rowPtr.size = rowPtr.size;
    rowPtr.values = nullptr;
}


template <typename T>
sparseMatrix<T>::sparseMatrix(/* args */)
{

}

template <typename T>
sparseMatrix<T>::~sparseMatrix()
{
    
}
