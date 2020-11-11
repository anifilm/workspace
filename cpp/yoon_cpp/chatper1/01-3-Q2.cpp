// 문제 01-3 [매개변수의 기본값]
// 문제 2
// 다음과 같은 형태로의 함수 오버로딩은 문제가 있다. 어떠한 문제가 있는지 설명해보자.
#include <iostream>

int SimpleFunc(int a = 10) {
    return a + 1;
}

int SimpleFunc(void) {
    return 10;
}


int main() {

    std::cout << "int a: " << SimpleFunc() << std::endl;
    std::cout << "void: " << SimpleFunc() << std::endl;

    return 0;
}

/*

SimpleFunc()를 호출하여 기본값을 사용하는 것과 매개변수 전달이 없음 (void)이
동일한 형태로 호출되기 때문에 중첩되어 충돌한다.

*/
