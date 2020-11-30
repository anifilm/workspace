// 가변인자 함수 사용하기 (C언어 스타일)
#include <iostream>
#include <stdarg.h>

using namespace std;

int Sum(int arg, ...) {
    va_list ap;
    va_start(ap, arg);

    int sum {};
    for (int i {0}; i < arg; i++)
        sum += va_arg(ap, int);

    va_end(ap);
    return sum;
}

int main() {

    int number = Sum(5, 1, 2, 3, 4, 5);

    cout << "1에서 5까지 합: " << number << endl;

    return 0;
}
