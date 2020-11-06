// 함수 인자로 레퍼런스 받기
#include <iostream>

void change_val(int& ref) {
    ref = 3;
}

int main() {

    int number {5};

    std::cout << number << std::endl;
    change_val(number);
    std::cout << number << std::endl;

    return 0;
}

/*

int &ref = number;  // 함수 호출이 레퍼런스 선언과 내용이 같다고 할 수 있다.

*/
