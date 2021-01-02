// 큰 값을 반환하는 제네릭 bigger() 함수 만들기 연습
#include <iostream>

using namespace std;

template <class T>
T bigger(T a, T b) {  // 두 개의 매개 변수 a, b를 비교하여 큰 값 반환
    if (a > b) return a;
    else return b;
}

int main() {

    int a = 20, b = 50;
    char c = 'a', d = 'z';

    cout << "bigger(20, 50)의 결과는 " << bigger(a, b) << endl;
    cout << "bigger('a', 'z')의 결과는 " << bigger(c, d) << endl;

    return 0;
}
