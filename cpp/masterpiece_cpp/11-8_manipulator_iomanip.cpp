// 매개 변수를 가진 조작자 사용
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << showbase;

    // 타이틀을 출력한다.
    cout << setw(8) << "Number";
    cout << setw(10) << "Octal";
    cout << setw(10) << "Hexa" << endl;

    // 하나의 수를 집진수, 8진수, 16진수 형태로 한 줄에 출력한다.
    for (int i = 0; i < 50; i += 5) {
        cout << setw(8) << setfill('.') << dec << i;   // 10진수
        cout << setw(10) << setfill(' ') << oct << i;  //  8진수
        cout << setw(10) << setfill(' ') << hex << i << endl;  // 16진수
    }

    return 0;
}

/*

매개 변수를 가지는 조작자

조작자                       I/O       용도
resetioflags(long flags)     IO       flags에 지정된 플래그들을 해제
setbase(int base)             O       base를 출력할 수의 진수로 지정
setfill(char cFill)           I       필드를 출력하고 남은 공간을 cFill 문자로 채움
setioflags(long flags)       IO       flags를 스트림 입출력 플래그로 설정
setprecition(int np)          O       출력되는 수의 유효 숫자 자릿수를 np개로 설정. 소수점(.)은 제외
setw(int minWidth)            O       필드의 최소 너비를 minWidth로 설정

*/
