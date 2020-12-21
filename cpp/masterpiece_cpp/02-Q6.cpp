/*
Q6
문자열을 두 개 입력받고 두 개의 문자열이 같은지 검사하는 프로그램을 작성하라. 만일
같으면 "같습니다", 아니면 "같지 않습니다"를 출력하라.
  (실행 결과 생략...)

*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char password1[20], password2[20];

    cout << "새 암호를 입력하세요: " << endl;
    cin >> password1;
    cout << "새 암호를 다시 한번 입력하세요: " << endl;
    cin >> password2;

    if (strcmp(password1, password2) == 0)
        cout << "같습니다.";
    else
        cout << "같지 않습니다.";

    cout << endl;
    return 0;
}
