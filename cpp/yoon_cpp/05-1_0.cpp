// C++ 스타일의 초기화
#include <iostream>

using namespace std;

int main() {

    // 우리는 지금까지 다음과 같은 방식으로 변수와 참조자를 선언 및 초기화 해왔다.
    // 대입 연산자를 사용한 복사 초기화 (copy initialization)
    int num = 10;
    int& ref = num;

    // 하지만 C++에서는 다음의 방식으로 선언 및 초기화가 가능하다.
    // 괄호를 사용한 직접 초기화 (direct initialization)
    int num2(20);
    int& ref2(num2);

    // C++11의 유니폼 초기화 (Uniform initialization in C++11)
    // 중괄호를 사용한 유니폼 초기화 (Uniform initialization)
    int num3 {30};
    int& ref3 {num3};

    // 빈 {}로 변수를 초기화 하면 기본 초기화(defualt initialization)가 된다.
    // 기본 초기화는 변수를 0으로 초기화 한다.
    int value {};
    // 또 유니폼 초기화는 형 변환을 허용하지 않는다음 이점이 있다.
    // 변수를 다은 자료형의 값으로 초기화 하려고 하면 컴파일러에서 경고 또는 오류가 발생한다.
//  int value2 {4.5};   // error an interger variable can not hold a non-interger value

    return 0;
}

/*

유니폼 초기화 관련 내용 출처 (소년코딩)
https://boycoding.tistory.com/181

생성자 멤버 초기화 리스트 (Constructor member initializer list)
https://boycoding.tistory.com/246

*/
