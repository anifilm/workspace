// sum() 함수 오버로딩 (Function Overloading) 연습
#include <iostream>

using namespace std;

int sum(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++)
        sum += i;   // a부터 b까지 더하기
    return sum;
}

int sum(int a) {
    int sum = 0;
    for (int i = 1; i <= a; i++)
        sum += i;   // 1부터 a까지 더하기
    return sum;
}

int main() {

    cout << sum(3, 5) << endl;
    cout << sum(3) << endl;
    cout << sum(100) << endl;

    return 0;
}
