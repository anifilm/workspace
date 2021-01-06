/* 이론 문제
Q11
다음은 fin에 연결된 텍스트 파일을 256바이트 단위로 읽어 화면에 출력하는 코드이다.
코드를 완성하라.

*/
#include <iostream>
#include <fstream>

using namespace std;

void fread(ifstream& fin) {
    char buf[256];  // 버퍼 buf를 선언한다.
    while (!fin.eof()) {
        fin.read(buf, 256);
        int n = fin.gcount();  // 실제 읽은 바이트 수 알아낸다.
        cout.write(buf, n);   // write()를 이용하여 읽은 데이터를 화면에 출력한다.
    }
}
