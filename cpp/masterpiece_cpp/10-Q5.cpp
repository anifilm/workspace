/*
Q5
다음 함수는 매개 변수로 주어진 두 개의 int 배열을 연결한 새로운 int 배열을 동적 할당 받아
반환 한다.
  int* concat(int a[], int size_a, int b[], int size_b);

concat() 함수가 int 배열뿐 아니라 다른 타입의 배열도 처리할 수 있도록 일반화하라.

*/
#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
T* concat(T a[], int size_a, T b[], int size_b) {
    T* arr = new T[size_a + size_b];
    copy(a, a+size_a, arr);
    copy(b, b+size_b, arr+size_a);
    return arr;
}

int main() {

    int a1[5] = {1, 10, 100, 5, 4};
    int a2[3] = {2, 20, 200};
    int* a3 = concat(a1, 5, a2, 3);
    for (int i = 0; i < 8; i++)
        cout << a3[i] << ' ';
    cout << endl;
    delete[] a3;

    double d1[6] = {1.1, 2.25, 7.2, 5.15, 5.3, 6.6};
    double d2[4] = {10.2, 20.4, 70.15, 80.31};
    double* d3 = concat(d1, 6, d2, 4);
    for (int i = 0; i < 9; i++)
        cout << d3[i] << ' ';
    cout << endl;
    delete[] d3;

    char c1[5] = {'a', 'd', 'z', 't', 'w'};
    char c2[5] = {'b', 's', 'g', 'y', 'x'};
    char* c3 = concat(c1, 5, c2, 5);
    for (int i = 0; i < 10; i++)
        cout << c3[i] << ' ';
    cout << endl;
    delete[] c3;

    return 0;
}
