/* 이론 문제
Q5
메모장으로 Welcome 입력 후 <Enter> 키를 입력하고, C++ 입력 후 <Enter> 키 없이 test.txt
파일에 저장하였다.

  (1) test.txt 파일의 바이트 수는 얼마인가?
      >> 12바이트
  (2) ASCII 표를 참고하여 test.txt에 저장된 바이트를 16진수로 말하라.
      >> 57 65 6C 63 6F 6D 65 20 0D 0A 43 2B 2B
  (3) 아래 코드는 파일의 문자 개수를 세는 코드이다. 실행하였을 때 출력되는 count 값은
      얼마인가?
  (4) 위 코드에서 ifstream fin("test.txt");를 ifstream fin("test.txt", ios::binary);
      로 변경하면 출력되는 count 값은 얼마인가?
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream fin("./12-Q5_test.txt", ios::binary);
    int ch, count = 0;
    while ((ch = fin.get()) != EOF)
        count++;
    cout << count << endl;  // (4) >> 12

    return 0;
}
