/*
Q9
이름, 주소, 나이를 입력받아 다시 출력하는 프로그램을 작성하라. 실행 예시는 다음과 같다.
  (실행 결과 생략...)

*/
#include <iostream>

using namespace std;

int main() {

    char name[20], address[100];
    int age;

    cout << "이름은? ";
    cin.getline(name, sizeof(name));
    cout << "주소는? ";
    cin.getline(address, sizeof(address));
    cout << "나이는? ";
    cin >> age;

    cout << name << ", " << address << ", " << age << "세" << endl;

    return 0;
}
