// 디폴트 매개 변수(Default Parameter)를 이용하여 중복 함수 간소화 연습
#include <iostream>

using namespace std;
/* 다음 두 개의 중복 함수를 디폴트 매개 변수를 가진 하나의 함수로 작성하라.

void fillLine() {   // 25개의 '*' 문자를 한 라인에 출력
    for (int i = 0; i < 25; i++)
        cout << '*';
    cout << endl;
}

void fillLine(int n, char c) {  // n개의 c문자를 한 라인에 출력
    for (int i = 0; i < n; i++)
        cout << c;
    cout << endl;
}

*/
void fillLine(int n = 25, char c = '*') {  // n개의 c문자를 한 라인에 출력
    for (int i = 0; i < n; i++)
        cout << c;
    cout << endl;
}

int main() {

    fillLine(); // 25개의 '*'를 한 라인에 출력
    fillLine(10, '%');  // 10개의 '%'를 한 라인에 출력

    return 0;
}
