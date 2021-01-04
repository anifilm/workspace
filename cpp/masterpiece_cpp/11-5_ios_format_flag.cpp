// setf()와 unsetf()를 사용한 포맷 출력
#include <iostream>

using namespace std;

int main() {

    cout << 30 << endl;     // 10진수로 출력

    cout.unsetf(ios::dec);  // 10진수 해제
    cout.setf(ios::hex);    // 16진수로 설정
    cout << 30 << endl;     // 1e

    cout.setf(ios::showbase);  // 16진수에 0x접두어를 붙이도록 설정
    cout << 30 << endl;     // 0x1e

    cout.setf(ios::uppercase); // 16진수와 A~F를 대문자로 출력
    cout << 30 << endl;     // 0x1E

    cout.setf(ios::dec | ios::showpoint);  // 10진수 표현과 동시에
                                            // 실수에 소수점이하 나머지는 0으로 출력
    cout << 23.5 << endl;   // 23.5000

    cout.setf(ios::scientific);  // 실수를 과학산술용 표현으로 출력
    cout << 23.5 << endl;   // 2.350000E+01

    cout.setf(ios::showpos);  // 양수인 경우 + 부호도 함께 출력
    cout << 23.5 << endl;   // +2.350000E+01

    return 0;
}

/*

포맷 플래그

long setf(long flags)
  flags를 스트림의 포맷 플래그로 설정하고 이전 플래그를 반환한다.

long unsetf(long flags)
  flags에 설정된 비트 값에 따라 스르팀의 포맷 프래그를 해제하고 이전 플래그를 반환한다.


ios 클래스에 정의된 포맷 플래그

플래그               값          의미
ios::skipws         0x0001      입력시 공백문자(스페이스, 탭, 개행문자)를 무시
ios::unitbuf        0x0002      출력 스트림에 들어오는 데이터를 버퍼링하지 않고 바로 출력
ios::uppercase      0x0004      16진수의 A~F. 지수 표현의 E를 대문자로 출력
ios::showbase       0x0008      16진수이면 0x를. 8진수이면 0을 숫자 앞에 붙여 출력
ios::showpoint      0x0010      실수 값에 대해, 정수 부분과 더불어 소수점 이하의 끝자리들을 0으로 출력
ios::shopos         0x0020      양수에 대해 + 기호 출력
ios::left           0x0040      필드를 왼쪽 정렬 (left-align) 형식으로 출력
ios::right          0x0080      필드를 오른쪽 정렬 (right-align) 형식으로 출력
ios::internal       0x0100      부호는 왼쪽 정렬로 숫자는 오른쪽 정렬로 출력
ios::dex            0x0200      10진수로 출력. 기본값
ios::oct            0x0400      8진수로 출력
ios::hex            0x0800      16진수로 출력
ios::scientific     0x1000      실수에 대해 과학 산술용 규칙에 따라 출력
ios::fixed          0x2000      실수에 대해 소수점 형태로 출력
ios::boolalpha      0x4000      설정되면, 논리값 true를 "true"로, false를 "false"로 출력하고
                                설정되지 않으면, 정수 1과 0으로 출력

*/
