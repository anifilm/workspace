/* 이론 문제
Q6
다음과 같이 메모장으로 test.txt 파일을 작성하였다. 0123456789 뒤에 <Enter> 키가 있지만,
Integer 뒤에는 <Enter> 키가 없다.

(1) test.txt 파일의 바이트 수는 얼마인가?
    >> 19바이트
(2) ASCII 표를 참고하여 test.txt에 저장된 바이트를 16진수로 말하라.
    >> 30 31 32 33 34 35 36 37 38 39 0D 0A 49 6E 74 65 67 65 72
(3) 아래 코드는 파일의 문자 개수를 세는 코드이다. 실행하였을 때 출력되는 count 값은
    얼마인가?
(4) 위 코드에서 ifstream fin("test.txt");를 ifstream fin("test.txt", ios::binary);
    로 변경하면 출력되는 count 값은 얼마인가? count 값이 서로 다른 이유는 무엇인가?
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream fin("./12-Q6_test.txt", ios::binary);
    char ch;
    int count = 0;
    while (true) {
        fin.get(ch);
        if (fin.eof()) break;
        count++;
    }
    cout << count << endl;  // (4) >> 19

    return 0;
}

/*

(4)
텍스트 모드로 불러들인 경우 줄바꿈에 대하여 '\r', '\n'를 읽고 '\n' 하나만 반환된다.
바이너리로 모드로 불러들인 경우 줄바꿈에 대하여 '\r', '\n'의 두 바이트를 그대로 count 하게 된다.

*/
