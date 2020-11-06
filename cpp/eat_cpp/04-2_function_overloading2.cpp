// 함수의 오버로딩 2
#include <iostream>

void print(int x) {
    std::cout << "int: " << x << std::endl;
}

// void print(char x) {
//     std::cout << "char: " << x << std::endl;
// }

void print(double x) {
    std::cout << "double: " << x << std::endl;
}

int main() {

    int a {1};
    char b {'c'};
    double c {3.2f};

    print(a);
    print(b);       // 모호하다 (ambiguous)라고 판단해서 오류를 발생하게 된다.
    print(c);

    return 0;
}
