// 람다 기본 사용 방법 익히기 ([]())
#include <iostream>

using namespace std;

auto func1 = []() { cout << "Lambda Function" << endl; };
auto func2 = [](int x, int y) -> bool { return x < y; };

int main() {

    int x = 2;

    auto func3 = [=](int y) {
        func1();
        cout << "x < y = " << func2(x, y) << endl;
    };

    cout << boolalpha;
    func3(4);

    auto func4 = [=](int y) { return x * x + y * y; };

    cout << "x * x + y * y = " << func4(5) << endl;

    return 0;
}

/*

람다 문법
[캡처 블록](파라미터) { 구성 소스 }

 - 캡처 블록: 람다 함수에서 참조할 변수 목록
 - 파라미터 : 람다 함수에서 사용할 인자 목록
 - 구성 소스: 일반 함수처럼 구성할 수 있음

*/
