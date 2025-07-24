#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <iostream>
#include <vector>

template <typename T> // 声明模板参数 T
class Vector
{
public:
    /* data */

    T* values;
    size_t size;
    size_t capacity;
    Vector(): values(nullptr), size(0), capacity(0)
    {

    }
    Vector(std::vector<T>&& v)
    {
        values = new T[v.size()];
        for (int i = 0; i < size; i++) {
            values[i] = v[i];
        }
        this->size = v.size();
    }
    Vector(size_t len) {
        values = new T[len];
        size = len;
        capacity = len;
    }
    
    Vector(Vector&& temp) {
        values = temp.values;
        size = temp.size;
        capacity = temp.size;
        temp.values = nullptr;
    }

    T operator[](int i) {
        if (i > size) {
            // TODO error handle
        }
        return values[i];
    }

    ~Vector()
    {
        delete[] values;
    }

};



#endif // VECTOR_HPP




