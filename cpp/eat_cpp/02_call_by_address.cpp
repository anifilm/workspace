// 참조자의 도입 1
#include <iostream>

void change_val(int *p) {
    *p = 3;
}

int main() {

    int number {5};

    std::cout << number << std::endl;
    change_val(&number);
    std::cout << number << std::endl;

    return 0;
}

/*

C언어에서는 어떠한 변수를 가리키고 싶을 땐 반드시 포인터를 사용해야만 했습니다.
그런데 C++에서는 다른 변수나 상수를 가리키는 방법으로 다른 방식을 제공하는데,
이를 바로 참조자(reference)라고 합니다.

*/
