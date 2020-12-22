// 참조 리턴
#include <iostream>

using namespace std;

char c = 'a';

char& find() {  // char 타입의 참조 반환
    return c;   // 변수 c에 대한 참조 반환
}

int main() {

    char a = find();    // a = 'a'가 됨
    cout << c << ' ' << a << endl;

    char& ref = find(); // ref는 c에 대한 참조
    ref = 'M';  // c = 'M'
    cout << c << ' ' << ref << endl;

    find() = 'b';   // c = 'b'가 됨
    cout << c << ' ' << ref << endl;

    return 0;
}
