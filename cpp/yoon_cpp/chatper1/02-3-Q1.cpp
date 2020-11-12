// 문제 02-1 [참조자 기반의 Call-by-reference 구현]
// 문제 1
// 참조자를 이용해서 다음 요구사항에 부합하는 함수를 각각 정의하라.
// -> 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
// -> 인자로 전달된 int형 변수의 부호를 바꾸는 함수
#include <iostream>

using namespace std;

void AddNumberOne(int& ref) {
    ref += 1;
}

void InvertNumber(int& ref) {
    ref *= -1;
}

int main() {

    int num1 {1}, num2 {1};

    AddNumberOne(num1);
    cout << num1 << endl;
    InvertNumber(num2);
    cout << num2 << endl;

    return 0;
}
