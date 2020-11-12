// 문제 02-4 [C++의 표준함수 호출]
// 문제 1
// 다음 표준함수를 호출하는 예제를 만들되, C++의 헤더를 선언해서 만들어보자, 그리고 예제의
// 내용은 상관이 없지만, 아래의 함수들을 최소 1회 이상 호출해야 한다. 참고로 다음 함수들은
// C언어의 경우 <string.h>에 선언되어 있다.
//  - strlen    문자열의 길이 계산
//  - strcat    문자열의 뒤에 덧붙이기
//  - strcpy    문자열의 복사
//  - strcmp    문자열의 비교
#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str1[14] = "Hello, world!";
    cout << str1 << ": " << strlen(str1) << endl;

    char str_hello[] = "Hello, ";
    char str_world[7] = "world!";
    strcat(str_hello, str_world);
    cout << str_hello << endl;

    char str_copy[7];
    strcpy(str_copy, str_world);
    cout << str_copy << endl;

    if (strcmp(str_world, str_copy) == 0)
        cout << "String is same!" << endl;
    else
        cout << "String is not same." << endl;

    return 0;
}
