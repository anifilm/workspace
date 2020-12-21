/*
Q5
<Enter> 키가 입력될 때까지 문자들을 읽고, 입력된 문자 'x'의 개수를 화면에 출력하라.
  (실행 결과 생략...)

*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str[100];
    int count_x = 0;

    cout << "문자들을 입력하라(100개 미만)." << endl;
    cin.getline(str, sizeof(str));

    for (size_t i = 0; i < strlen(str); i++)
        if (str[i] == 'x') count_x++;

    cout << "x의 개수는 " << count_x << endl;

    return 0;
}
