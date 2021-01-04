// 매개 변수 없는 조작자 사용
#include <iostream>

using namespace std;

int main() {

    cout << hex << showbase << 30 << endl;  // ex1e
    cout << dec << showpos << 100 << endl;  // +100
    cout << noshowpos << true << ' ' << false << endl;  // 1 0
    cout << boolalpha << true << ' ' << false << endl;  // true false

    return 0;
}

/*

조작자
입출력 포맷을 지정하는 마지막 방법은 조작자(manipulator) 혹은 스트림 조작자라고 불리는
함수를 이용하는 방법이다. 조작자는 ANSI/IOS 표준 C++ 헤더 파인에 정의된 특별한 원형
(function prototype)을 가진 함수로서, 매개 변수 없는 조작자와 매개 변수를 하나 가진
조작자로 나뉜다. 조작자는 항상 <<, >> 연산자와 함께 사용된다.


매개 변수 없는 조작자

조작자          I/O        용도
endl            O         스트림 버퍼를 모두 출력하고 다음 줄로 넘어감
oct             O         정수 필드를 8진수 기반으로 출력
dec             O         정수 필드를 10진수 기반으로 출력
hex             O         정수 필드를 16진수 기반으로 출력
left            O         왼쪽 정렬로 출력
right           O         오른쪽 정렬로 출력
fixed           O         실수 필드를 고정 소수점 방식으로 출력
scientific      O         실수 필드를 과학 산술용 방식으로 출력
flush           O         스트림 버퍼 강제 출력
showbase        O         16진수의 경우 0x로, 8진수의 경우 0을 앞에 붙여서 출력
noshowbase      O         showbase 지정 취소
showpoint       O         실수 값에 대해, 정수 부분과 소수점 이하의 끝자리 이후 남은 공간을 0으로 출력
noshowpoint     O         showpoint 지정 취소
showpos         O         양수인 경우 + 부호를 붙여서 출력
noshowpos       O         showpos 지정 취소
skipws          I         입력 스트림에서 공백 문자를 읽지 않고 건너뜀
noskipws        I         skipws 지정 취소
boolalpha       O         불리언 값이 출력될 때, "true" 혹은 "false" 문자열로 출력

*/
