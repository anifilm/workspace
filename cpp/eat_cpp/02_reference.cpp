// 참조자의 도입 2
#include <iostream>

int main() {

    int a {3}, b {6};
    int& another_a = a;     // 변수 a의 별명으로 another_a를 선언
    // &another_a = b;      // 한번 선언된 레퍼런스는 재할당 할 수 없다. (포인터와 다른점)

    another_a = 5;
    std::cout << "a: " << a << std::endl;
    std::cout << "another_a: " << another_a << std::endl;

    return 0;
}
