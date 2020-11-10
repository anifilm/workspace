// 문제2
// 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 입력 받은 데이터를
// 그래로 출력하는 프로그램을 작성해 보자.
#include <iostream>

int main() {

    char name[20];
    char phoneNumber[20];

    std::cout << "이름을 입력하세요: ";
    std::cin >> name;

    std::cout << "전화번호를 입력하세요: ";
    std::cin >> phoneNumber;

    std::cout << "당신의 이름은 " << name << " 입니다." << std::endl;
    std::cout << "당신의 전화번호는 " << phoneNumber << " 입니다." << std::endl;

    return 0;
}
