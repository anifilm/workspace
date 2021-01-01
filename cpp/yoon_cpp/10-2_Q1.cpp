/* 문제 10-2 [단항 연산자 오버로딩]
문제 1: 멤버 함수의 형태로 오버로딩
부호 연산자로서 -는 단항 연산자이다. 이 연산자는 피연산자의 부호를 반전시킨 결과를 반환
한다. 예를 들어서 다음 문장이 실행되면,
  int num2 = -num1;

num2에는 num1과 절대값은 같지만 부호가 다른 값이 저장된다. 물론 num1의 값에는 영향을
미치지 않는다. 이와 유사하게 Point 클래스를 대상으로 -연산자를 오버로딩 해 보자. 다음
의 문장이 실행되면,
  Point pos2 = -pos1;

pos2의 멤버 변수는 pos1의 멤버 변수 값과 다른 부호의 값으로 초기화 되도록 오버로딩
해 보자.
*/
#include <iostream>

using namespace std;

class Point {
private:
    int xpos, ypos;
public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
    void ShowPosition() const {
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }
    Point operator-();
};

Point Point::operator-() {
    Point pos(-xpos, -ypos);
    return pos;
}

int main() {

    Point pos1(-10, -20);
    Point pos2 = -pos1;
    pos1.ShowPosition();
    pos2.ShowPosition();

    return 0;
}
