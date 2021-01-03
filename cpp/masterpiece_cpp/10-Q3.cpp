/*
Q3
배열의 원소를 반대 순서로 뒤집는 reverseArray() 함수를 템플릿으로 작성하라. reverseArray()의
첫 번째 매개 변수는 배열에 대한 포인터이며 두 번째 매개 변수는 배열의 개수이다. reverseArray()
의 호출 사례는 다음과 같다.
  (호출 사례 생략...)

*/
#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
void reverseArray(T arr[], int n) {
    reverse(arr, arr+n);
}

int main() {

    int x[5] = {1, 10, 100, 5, 4};
    reverseArray(x, 5);
    for (int i = 0; i < 5; i++)
        cout << x[i] << ' ';
    cout << endl;

    double y[6] = {1.1, 2.25, 7.2, 5.15, 5.3, 6.6};
    reverseArray(y, 6);
    for (int i = 0; i < 6; i++)
        cout << y[i] << ' ';
    cout << endl;

    char z[5] = {'a', 'd', 'z', 't', 'w'};
    reverseArray(z, 5);
    for (int i = 0; i < 5; i++)
        cout << z[i] << ' ';
    cout << endl;

    return 0;
}
