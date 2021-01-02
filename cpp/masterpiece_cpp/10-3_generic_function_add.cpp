// 배열의 합을 구하여 반환하는 제네릭 add() 함수 만들기 연습
#include <iostream>

using namespace std;

template <class T>
T add(T data[], int n) {  // 타입 T의 배열 data에서 n개의 요소를 합한 결과를 반환
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += data[i];
    return sum;  // sum 변수의 타입과 반환 타입이 모두 T로 선언되어 있다.
}

int main() {

    int x[5] = {1, 2, 3, 4, 5};
    double d[6] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7};

    cout << "sum of x[] = " << add(x, 5) << endl;
    cout << "sum of d[] = " << add(d, 6) << endl;

    return 0;
}
