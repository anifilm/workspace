// 매개변수의 기본값 (Default Value)
#include <iostream>

int BoxVolume(int length, int width = 1, int height = 1);
int BoxVolume2(int length = 2, int width = 2, int height = 2);

int main() {

    std::cout << "[3, 3, 3]: " << BoxVolume(3, 3, 3) << std::endl;
    std::cout << "[5, 5, D]: " << BoxVolume(5, 5) << std::endl;
    std::cout << "[7, D, D]: " << BoxVolume(7) << std::endl;
    std::cout << std::endl;

    std::cout << "[3, 3, 3]: " << BoxVolume2(3, 3, 3) << std::endl;
    std::cout << "[5, 5, D]: " << BoxVolume2(5, 5) << std::endl;
    std::cout << "[7, D, D]: " << BoxVolume2(7) << std::endl;
    std::cout << "[D, D, D]: " << BoxVolume2() << std::endl;

    return 0;
}

int BoxVolume(int length, int width, int height) {
    return length * width * height;
}

int BoxVolume2(int length, int width, int height) {
    return length * width * height;
}

/*

반드시 오른쪽 매개변수의 기본값부터 채우는 형태로 정의해아 한다.
(함수에 전달되는 인자가 왼쪽에서 오른쪽으로 채워기지 때문)

int YourFunc(int num1, int num2, int num3 = 30);
int YourFunc(int num1, int num2 = 20, int num3 = 30);
int YourFunc(int num1 = 10, int num2 = 20, int num3 = 30);

*/
