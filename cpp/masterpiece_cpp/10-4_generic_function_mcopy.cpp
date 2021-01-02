// 배열을 복사하는 제네릭 mcopy() 함수 만들기 연습
#include <iostream>

using namespace std;

template <class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n) {  // src[]의 n개 요소를 dest[]에 복사
    for (int i = 0; i < n; i++)
        dest[i] = (T2)src[i];
}

int main() {

    int x[5] = {1, 2, 3, 4, 5};
    double d[5];
    char c[5] = {'H', 'e', 'l', 'l', 'o'}, e[5];

    mcopy(x, d, 5);  // int x[5]의 요소 5개를 double d[5]에 복사
    mcopy(c, e, 5);  // char c[5]의 요소 5개를 char e[5]에 복사

    for (int i = 0; i < 5; i++)
        cout << d[i] << ' ';
    cout << endl;

    for (int i = 0; i < 5; i++)
        cout << e[i] << ' ';
    cout << endl;

    return 0;
}
