// big() 함수 오버로딩 (Function Overloading) 연습
#include <iostream>

using namespace std;

int big(int a, int b) {
    if (a > b) return a;    // a와 b중 큰 수 반환
    else return b;
}

int big(int a[], int size) {
    int res = a[0];
    for (int i = 1; i < size; i++)
        if (res < a[i]) res = a[i]; // 배열 a[]에서 가장 큰 수 반환
    return res;
}

int main() {

    int array[5] = {1, 9, -2, 8, 6};
    cout << big(2, 3) << endl;  // int big(int a, int b) 호출
    cout << big(array, 5) << endl;  // int big(int a[], int size) 호출

    return 0;
}
