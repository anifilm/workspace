// C++ 기반의 이라인 함수 정의 (자료형에 의존하지 않는 예)
#include <iostream>

template <typename T>
inline T SQUARE(T x) {
    return x * x;
}

int main() {

    std::cout << SQUARE(5.5) << std::endl;
    std::cout << SQUARE(8.8) << std::endl;

    return 0;
}
