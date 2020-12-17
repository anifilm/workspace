// cin.getlien() 함수를 이용한 문자열 입력
#include <iostream>

using namespace std;

int main() {

    char address[100];

    cout << "주소를 입력하세요: ";
    cin.getline(address, 100, '\n');    // 키보드로부터 주소 읽기

    cout << "주소는 " << address << " 입니다." << endl;   // 주소 출력

    return 0;
}

/*

cin.getline() 함수를 이용하여 공백이 포함된 문자열 입력

cin.getline(char buf[], int size, char delimitChar)
 - buf: 키보드로부터 읽은 문자열을 저장할 배열
 - size: buf[] 배열의 크기
 - delimitChar: 문자열 입력 끝을 지정하는 구분 문자

최대 size - 1개의 문자를 입력받거나 delimitChar로 지정된 문자를 만나면 문자열의 입력
이 종료된다. 입력된 문자열은 buf[] 배열에 저장되며, delimitChar로 지정된 문자는 저장
되지 않고 cin의 버퍼에서도 사라진다. 그리고 buf[] 배열에 널 문자('\0')가 덧붙여진다.

*/
