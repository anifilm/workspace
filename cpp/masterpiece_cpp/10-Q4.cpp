/*
Q4
배열에서 원소를 검색하는 search() 함수를 템플릿으로 작성하라. search()의 첫 번째 매개 변수는
검색하고자 하는 원소 값이고, 두 번째 매개 변수는 배열이며, 세 번재 매개 변수는 배열의 개수이다.
search() 함수가 검색에 성공하면 true를, 아니면 false를 반환한다. search()의 호출 사례는 다음
과 같다.
  (호출 사례 생략...)

*/
#include <iostream>

using namespace std;

template <class T>
bool search(T find, T arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == find)
            return true;
    }
    return false;
}

int main() {

    int x[5] = {1, 10, 100, 5, 4};
    if (search(100, x, 5))
        cout << "100이 배열 x에 포함되어 있다.";
    else
        cout << "100이 배열 x에 포함되어 있지 않다.";
    cout << endl;

    double y[6] = {1.1, 2.25, 7.2, 5.15, 5.3, 6.6};
    if (search(5.2, y, 6))
        cout << "7.2는 배열 y에 포함되어 있다.";
    else
        cout << "7.2는 배열 y에 포함되어 있지 않다.";
    cout << endl;

    char z[5] = {'a', 'd', 'z', 't', 'w'};
    if (search('b', z, 5))
        cout << "문자'd'는 배열 z에 포함되어 있다.";
    else
        cout << "문자'd'는 배열 z에 포함되어 있지 않다.";
    cout << endl;

    return 0;
}
