// cout과 <<를 이용한 화면 출력
#include <iostream>

double area(int r);

int main() {

    int n = 3;
    char c = '#';

    std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
    std::cout << "n + 5 = " << n + 5 << std::endl;
    std::cout << "면적은 " << area(n) << std::endl;  // 함수 area()의 리턴 값 출력

    return 0;
}

double area(int r) {
    return r * r * 3.14;
}
