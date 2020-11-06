// new와 delete의 사용
#include <iostream>

int main() {

    int* p = new int;
    *p = 10;

    std::cout << *p << std::endl;

    delete p;
    return 0;
}

/*

C언어에서는 힙(heap) 메모리 공간을 사용하기 위해서 malloc과 free 함수를 사용한다면
C++에서는 new와 delete를 사용하여 메모리를 할당 할 수 있다.

*/
