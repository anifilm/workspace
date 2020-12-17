// string 클래스를 이용한 문자열 입력 및 다루기
#include <iostream>
#include <string>   // string 클래스를 사용하기 위한 헤더 파일

using namespace std;

int main() {

    string song = "Falling in love with you.";
    string elvis = "Elvis Presley";
    string singer;

    cout << song + "를 부른 가수는? ";  // + 로 문자열 연결
    cout << "(힌트: 첫글자는 " << elvis[0] << "): ";  // [] 연산자 사용

    getline(cin, singer);   // 문자열 입력
    if (singer == elvis)    // 문자열 비교
        cout << "맞았습니다.";
    else
        cout << "틀렸습니다. " + elvis + " 입니다.";    // + 로 문자열 연결

    cout << endl;
    return 0;
}

/*

getline() 함수는 string 타입의 C++ 문자열을 입력 받기 위해 제공되는 전역 함수

*/
