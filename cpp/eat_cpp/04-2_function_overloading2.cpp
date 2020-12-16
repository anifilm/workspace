// 함수의 오버로딩 2
#include <iostream>

using namespace std;

void print(int x) {
    cout << "int: " << x << endl;
}

/*
void print(char x) {
    cout << "char: " << x << endl;
}
*/

void print(double x) {
    cout << "double: " << x << endl;
}

int main() {

    int a = 1;
    char b = 'c';
    double c = 3.2f;

    print(a);
    print(b);       // 모호하다 (ambiguous)라고 판단해서 오류를 발생하게 된다.
    print(c);

    return 0;
}
