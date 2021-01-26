/*
파일이름: BoundCheckArray.h
작성자: 임채영
업데이트: [2021-01-26] 파일버전 0.1
*/
#ifndef __BOUND_CHECK_ARRAY_H__
#define __BOUND_CHECK_ARRAY_H__

#include <iostream>

template <class T>
class BoundCheckArray {
private:
    T* arr;
    int arrlen;
    BoundCheckArray(const BoundCheckArray& arr) {}
    BoundCheckArray& operator=(const BoundCheckArray& arr) {}
public:
    BoundCheckArray(int len = 100);
    ~BoundCheckArray();
    T& operator[](int idx);
    T operator[](int idx) const;
    int GetArrLen() const;
};

template <class T>
BoundCheckArray<T>::BoundCheckArray(int len) : arrlen(len) {
    arr = new T[len];
}

template <class T>
BoundCheckArray<T>::~BoundCheckArray() {
    delete[] arr;
}

template <class T>
T& BoundCheckArray<T>::operator[](int idx) {
    if (idx < 0 || idx >= arrlen) {
        std::cout << "Array index out of bound exception" << std::endl;
        exit(1);
    }
    return arr[idx];
}

template <class T>
T BoundCheckArray<T>::operator[](int idx) const {
    if (idx < 0 || idx >= arrlen) {
        std::cout << "Array index out of bound exception" << std::endl;
        exit(1);
    }
    return arr[idx];
}

template <class T>
int BoundCheckArray<T>::GetArrLen() const {
    return arrlen;
}

#endif
