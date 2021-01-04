// width(), fill(), precision()을 사용한 포맷 출력
#include <iostream>

using namespace std;

void showWidth() {
    cout.width(10);  // 다음에 출력되는 "Hello"를 10칸으로 지정
    cout << "Hello" << endl;
    cout.width(5);  // 다음에 출력되는 정수 12를 5칸으로 지정
    cout << 12 << endl;

    cout << '%';
    cout.width(10);  // 다음에 출력되는 "Korea/"만 10칸으로 지정
    cout << "Korea/" << "Seoul/" << "City" << endl;
    cout << endl;
}

int main() {

    showWidth();  // width() 사용 사례

    cout.fill('^');  // fill()을 적용한 후 width()의 사례를 보여준다.
    showWidth();

    cout.precision(5);  // precision() 사용 예
    cout << 11./3. << endl;

    return 0;
}

/*

포맷 함수 활용 - 너비 설정, 빈칸 채우기, 유효 숫자 자릿수 지정
  ostream 클래스의 멤버 함수 width(), fill(), precision()은 각각 출력되는 필드의 너비,
  유효 숫자 개수, 빈칸을 채우는 문자 등을 지정하는 데 사용된다. 이 함수로 지정된 포맷은
  << 연산자를 이용하여 출력될 때만 적용된다.

- 필드의 최소 너비 설정, width()

int width(int minWidth)
  출력되는 필드의 최소 너비를 minWidth로 설정하고 이전에 설정된 너비의 값을 반환

- 필드의 빈 공간 채우기, fill()

char fill(char cFill)
  필드의 빈칸을 cFill 문자로 채우도록 지정하고 이전 문자의 값을 반환

- 유효 숫자 자리수 지정, precision()

int precision(int np)
  출력되는 수의 유효 숫자 자리수를 np개로 설정. 정수 부분과 소수점 이하의 수의 자리를
  모두 포함하고 소수점(.)은 제외

*/
