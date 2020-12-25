/*
Q5
다음 main()에서 Color 클래스는 3요소(빨강, 초록, 파랑)로 하나의 색을 나타내는 클래스
이다. (4장 실습 문제 1번 참고)
+ 연산자로 색을 더하고, == 연산자로 색을 비교하고자 한다. 실행 결과를 참고하여 Color
클래스와 연산자, 그리고 프로그램을 완성하라.
  (main() 함수, 실행 결과 생략...)

  (1) +와 == 연산자를 Color 클래스의 멤버 함수로 구현하라.
  (2) +와 == 연산자를 Color 클래스의 프렌드 함수로 구현하라.
*/
#include <iostream>

using namespace std;

class Color {
    int red, green, blue;
public:
    Color() { red = green = blue = 0; }
    Color(int r, int g, int b) { red = r; green = g; blue = b; }
    void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
    void show() { cout << red << ' ' << green << ' ' << blue << endl; }

    friend Color operator+(Color op1, Color op2);
    friend bool operator==(Color op1, Color op2);
};

Color operator+(Color op1, Color op2) {
    Color tmp;
    tmp.red = op1.red + op2.red;
    tmp.green = op1.green + op2.green;
    tmp.blue = op1.blue + op2.blue;
    return tmp;
}

bool operator==(Color op1, Color op2) {
    if (op1.red == op2.red && op1.green == op2.green && op1.blue == op2.blue) return true;
    else return false;
}

int main() {

    Color red(255, 0, 0), blue(0, 0, 255), c;
    c = red + blue;
    c.show();  // 색 값 출력

    Color fuchsia(255, 0, 255); // 빨간색 성분 255, 초록색 성분 0, 파란색 성분 255가 합쳐진 보라색을 나타냄
    if (c == fuchsia)
        cout << "보라색 맞음";
    else
        cout << "보라색 아님";

    cout << endl;
    return 0;
}
