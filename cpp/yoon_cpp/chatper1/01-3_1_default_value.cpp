// 매개변수의 기본값 (Default Value)
#include <iostream>

int Adder(int num1 = 1, int num2 = 2) {
    return num1 + num2;
}

int main() {

    std::cout << Adder() << std::endl;
    std::cout << Adder(5) << std::endl;
    std::cout << Adder(3, 5) << std::endl;

    return 0;
}
