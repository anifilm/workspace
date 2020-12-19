/*
Q1
main()의 실행 결과가 다음과 같도록 Tower 클래스를 작성하라.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Tower {
private:
    int height;
public:
    Tower();
    Tower(int h);
    int getHeight();
};

Tower::Tower() {
    height = 1;
}

Tower::Tower(int h) {
    height = h;
}

int Tower::getHeight() {
    return height;
}

int main() {

    Tower myTower;  // 1 미터
    Tower seoulTower(100);  // 100 미터
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

    return 0;
}
