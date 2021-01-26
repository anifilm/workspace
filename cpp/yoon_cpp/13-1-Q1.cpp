/* 문제 13-1 [함수 템플릿의 정의]
문제 1
인자로 전달되는 두 변수에 저장된 값을 서로 교환하는 SwapData라는 이름의 함수를 템플릿으로 정의해 보자. 그리고 다음
Point 클래스를 대상으로 값의 교환이 이뤄짐을 확인할 수 있도록 main() 함수를 구성해 보자.
  (Point 클래스 생략...)

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
};

template <typename T>
void SwapData(T& n1, T& n2) {
    T temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {

    Point p1(1, 2);
    Point p2(11, 12);

    SwapData(p1, p2);

    p1.ShowPosition();
    p2.ShowPosition();

    return 0;
}
