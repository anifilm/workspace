/* 문제 01-3 [매개변수의 기본값]
문제 1
예제 01-3_3_DefaultValue.cpp에 정의된함수 BoxVolume을 '매개변수의 기본값 지정' 형태가
아닌, '함수 오버로딩'의 형태로 재구현 해보자. 물론 main 함수는 변경하지 않아야 하며,
실행 결과도 동일해야 한다.
*/
#include <iostream>

int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);

int main() {

    std::cout << "[3, 3, 3]: " << BoxVolume(3, 3, 3) << std::endl;
    std::cout << "[5, 5, D]: " << BoxVolume(5, 5) << std::endl;
    std::cout << "[7, D, D]: " << BoxVolume(7) << std::endl;

    return 0;
}

int BoxVolume(int length, int width, int height) {
    return length * width * height;
}

int BoxVolume(int length, int width) {
    return length * width * 1;
}

int BoxVolume(int length) {
    return length * 1 * 1;
}
