// while문 이용하기
#include <iostream>

int main() {

    int i {1}, sum {0};

    while (i <= 10) {
        sum += i;
        i++;
    }

    std::cout << "합은: " << sum << std::endl;

    return 0;
}
