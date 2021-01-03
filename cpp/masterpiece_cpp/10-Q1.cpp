/*
Q1
배열을 받아 가장 큰 값을 반환하는 제네릭 함수 biggest()를 작성하라. 또한 main() 함수를
작성하여 biggest()를 호출하는 몇 가지 사례를 보여라.

*/
#include <iostream>

using namespace std;

template <class T>
T biggest(T arr[], int n) {
    T big = arr[0];
    for (int i = 1; i < n; i++)
        if (big < arr[i]) big = arr[i];
    return big;
}

int main() {

    int x[5] = {1, 10, 100, 5, 4};
    cout << biggest(x, 5) << endl;

    double y[6] = {1.1, 2.25, 7.2, 5.15, 5.3, 6.6};
    cout << biggest(y, 6) << endl;

    char z[5] = {'a', 'd', 'z', 't', 'w'};
    cout << biggest(z, 5) << endl;

    return 0;
}
