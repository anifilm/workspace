// 변수는 변수 사용 직전에 선언해도 된다.
#include <iostream>

int main() {

    int sum {0};

    for (int i {1}; i <= 10; i++)
        sum += i;

    std::cout << "합은: " << sum << std::endl;

    return 0;
}
