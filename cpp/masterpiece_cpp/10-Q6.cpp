/*
Q6
다음 함수는 매개 변수로 주어진 int 배열 src에서 배열 minus에 들어있는 같은 정수를 모두 삭제
한 새로운 int 배열을 동적으로 할당받아 반환한다. retSize는 remove() 함수의 실행 결과를 반환
하는 배열의 크기를 전달받는다.
  int* remove(int src[], int sizeSrc, int minus[], int sizeMinus, int& retSize);

템플릿을 이용하여 remove를 일반화하라.

*/
#include <iostream>

using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
    T* dest = new T[sizeSrc];
    bool same;
    for (int i = 0; i < sizeSrc; i++) {
        same = false;
        for (int j = 0; j < sizeMinus; j++) {
            if (src[i] == minus[j]) {
                same = true;
                break;
            }
        }
        if (!same)
            dest[retSize++] = src[i];
    }
    return dest;
}

int main() {

    int size = 0;
    int a1[5] = {1, 10, 100, 5, 4};
    int a2[3] = {4, 5, 6};
    int* a3 = remove(a1, 5, a2, 3, size);
    for (int i = 0; i < size; i++)
        cout << a3[i] << ' ';
    cout << endl;
    delete[] a3;

    size = 0;
    double d1[6] = {1.1, 2.25, 7.2, 5.15, 5.3, 6.6};
    double d2[4] = {1.1, 2.2, 7.2, 8.3};
    double* d3 = remove(d1, 6, d2, 4, size);
    for (int i = 0; i < size; i++)
        cout << d3[i] << ' ';
    cout << endl;
    delete[] d3;

    size = 0;
    char c1[5] = {'a', 'd', 'z', 't', 'w'};
    char c2[5] = {'b', 'd', 'g', 'y', 'w'};
    char* c3 = remove(c1, 5, c2, 5, size);
    for (int i = 0; i < size; i++)
        cout << c3[i] << ' ';
    cout << endl;
    delete[] c3;

    return 0;
}
