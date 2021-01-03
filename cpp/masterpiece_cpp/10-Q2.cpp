/*
Q2
두 개의 배열을 비교하여 같으면 true를, 아니면 false를 반환하는 함수 equalsArrays()를 작성
하라. 또한 main() 함수를 작성하여 equalsArrays()를 호출하는 몇 가지 사례를 보여라.
equalsArrays()를 호출하는 코드 사례는 다음과 같다.
  (호출 사례 생략...)

*/
#include <iostream>

using namespace std;

template <class T>
bool equalsArrays(T arr1[], T arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i])
            return false;
    }
    return true;
}

int main() {

    int a1[5] = {1, 10, 100, 5, 4};
    int a2[5] = {1, 10, 100, 5, 4};
    if (equalsArrays(a1, a2, 5))  // "같다"
        cout << "같다";
    else
        cout << "다르다";
    cout << endl;

    double d1[6] = {1.1, 2.25, 7.2, 5.15, 5.3, 6.6};
    double d2[6] = {1.2, 2.25, 7.2, 5.15, 5.3, 6.6};
    if (equalsArrays(d1, d2, 6))  // "다르다"
        cout << "같다";
    else
        cout << "다르다";
    cout << endl;

    char c1[5] = {'a', 'd', 'z', 't', 'w'};
    char c2[5] = {'a', 'd', 'z', 't', 'x'};
    if (equalsArrays(c1, c2, 5))  // "다르다"
        cout << "같다";
    else
        cout << "다르다";
    cout << endl;

    return 0;
}
