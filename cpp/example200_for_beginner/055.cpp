// 문자열 길이 구하기 (length)
#include <iostream>

using namespace std;

int main() {

    string jinduk_name {"김승만"};
    string jinsung_name {"김만"};

    cout << "진덕여왕 이름 길이: " << jinduk_name.length() << endl;
    cout << "진성여왕 이름 길이: " << jinsung_name.length() << endl;

    return 0;
}

/*

chcp65001, utf-8 설정으로 한글 1글자당 3바이트로 출력

*/
