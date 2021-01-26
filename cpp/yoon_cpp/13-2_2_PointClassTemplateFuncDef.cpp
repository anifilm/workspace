// 클래스 템플릿의 선언과 정의의 분리
#include <iostream>

using namespace std;

template <class T>
class Point {
private:
    T xpos, ypos;
public:
    Point(T x = 0, T y = 0);
    void ShowPosition() const;
};

template <class T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) {}

template <class T>
void Point<T>::ShowPosition() const {
    cout << '[' << xpos << ", " << ypos << ']' << endl;
}

int main() {

    Point<int> pos1(3, 4);
    pos1.ShowPosition();

    Point<double> pos2(2.4, 3.6);
    pos2.ShowPosition();

    Point<char> pos3('P', 'F');  // 좌표정보를 문자로 표시하는 상황의 표현
    pos3.ShowPosition();

    return 0;
}
