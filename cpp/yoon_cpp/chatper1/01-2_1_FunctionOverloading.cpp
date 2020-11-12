// 함수 오버로딩
#include <iostream>

void MyFunc(void) {
    std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c) {
    std::cout << "MyFunc(char) called" << std::endl;
}

void MyFunc(int a, int b) {
    std::cout << "MyFunc(int, int) called" << std::endl;
}

int main() {

    MyFunc();
    MyFunc('A');
    MyFunc(12, 23);

    return 0;
}
