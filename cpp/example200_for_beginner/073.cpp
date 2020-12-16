// 전역 변수 이해하기 (extern)
#include <iostream>

using namespace std;

int g_number = 100;             // 전역 변수 선언, 기본적으로 전역 변수는 extern
// extern int g_number = 100;   // 파일 외부에서 전역 변수를 사용 가능
// extern int g_number;         // 파일 외부에 선언된 전역 변수를 사용
// static int g_number = 100;   // 파일 내부에서만 전역 변수를 사용

int Func1() {
    return g_number++;
}

int Func2() {
    return g_number++;
}

int main() {

    int number = g_number++;

    cout << "메인 number: " << number << endl;
    cout << "Func1 number: " << Func1() << endl;
    cout << "Func2 number: " << Func2() << endl;

    return 0;
}
