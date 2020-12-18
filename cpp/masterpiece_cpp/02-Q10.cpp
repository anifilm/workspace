/*
Q10
문자열을 하나 입력받고 문자열의 부분 문자열을 다음과 같이 출력하는 프로그램을 작성하라.
예시는 다음과 같다.
  (실행의 예 생략...)

*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str[20];

    cout << "문자열 입력: ";
    cin >> str;

    for (size_t i = 0; i < strlen(str); i++) {
        for (size_t j = 0; j < i + 1; j++)
            cout << str[j];
        cout << endl;
    }

    return 0;
}
