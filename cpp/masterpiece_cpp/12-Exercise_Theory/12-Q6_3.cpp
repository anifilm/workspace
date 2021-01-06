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
    로 변경하면 출력되는 count 값은 얼마인가?
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream fin("./12-Q6_test.txt");
    char ch;
    int count = 0;
    while (true) {
        fin.get(ch);
        if (fin.eof()) break;
        count++;
    }
    cout << count << endl;  // (3) >> 18

    return 0;
}

/*

파일 저장시 개행 문자는 '\r', '\n' (0D 0A)의 두 문자가 저장되고
fin.get(ch); 파일에서 '\r', '\n'를 읽고 ch에 '\n' 하나만 반환된다.

*/
