// 함수의 오버로딩 1
#include <iostream>

using namespace std;

void print(int x) {
    cout << "int: " << x << endl;
}

void print(char x) {
    cout << "char: " << x << endl;
}

void print(double x) {
    cout << "double: " << x << endl;
}

int main() {

    int a {1};
    char b {'c'};
    double c {3.2f};

    print(a);
    print(b);
    print(c);

    return 0;
}
