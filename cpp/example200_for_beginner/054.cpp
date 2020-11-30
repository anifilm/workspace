// 문자열 조회하기 (find)
#include <iostream>

using namespace std;

int main() {

    string baekhap_war = "백합벌 전투: 백제 왕자 부여창의 일기토로 유명한 전투";

    int rtn = baekhap_war.find("부여창");

    if (rtn > 0)
        cout << "문자열을 찾았습니다. 위치는 " << rtn << " 입니다." << endl;
    else
        cout << "문자열을 찾을 수 없습니다." << endl;

    return 0;
}

/*

chcp65001, utf-8 설정으로 한글 1글자당 3바이트로 출력

012 345 678 9 012 345 6 7 890 123 4 567 890 1 234 567 890
백  합  벌  _ 전  투   : _ 백  제  _ 왕  자   _ 부  여  창
                                               ↑
                                        index: 32

*/
