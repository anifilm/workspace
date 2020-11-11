// 문제 01-1 [C++ 기반의 데이터 입출력]
// 문제 3
// 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자.
// 예를 들어서 사용자가 5를 입력한다면 구구단에서 5단을 출력해야 한다.
#include <iostream>

int main() {

    int i, num;

    std::cout << "출력을 원하는 구구단 단수를 입력: ";
    std::cin >> num;

    for (i = 1; i <= 9; i++)
        std::cout << num << " x " << i << " = " << num * i << std::endl;

    return 0;
}
