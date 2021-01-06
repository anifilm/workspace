/* 이론 문제
Q12
다음은 fin에 연결된 텍스트 파일을 1024바이트 단위로 읽어 화면에 출력하는 함수이다.
코드를 완성하라.

*/
#include <iostream>
#include <fstream>

using namespace std;

void fread(ifstream& fin) {
    char buf[1024];  // 버퍼 buf를 선언한다.
    while (true) {
        fin.read(buf, 1024);
        int n = fin.gcount();  // 실제 읽은 바이트 수 알아낸다.
        cout.write(buf, n);   // write()를 이용하여 읽은 데이터를 화면에 출력한다.
        if (n < 1024)  // 읽은 바이트가 1024보다 작으면
            break;  // 루프를 중단한다.
    }
}
