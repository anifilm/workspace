/* 이론 문제
Q13
this를 최대한 많이 활용하여 다음 클래스를 가장 바람직하게 수정하라.
  (예문 생략...)
*/
#include <iostream>

using namespace std;

class Location {
    int width, height;
public:
    Location() { this->width = this->height = 0;}
    Location(int w, int h) {
        this->width = w; this->height = h;
    }
    void show();
};

void Location::show() {
    cout << this->width << " " << this->height << endl;
}

int main() {

    Location location(1, 2);
    location.show();

    return 0;
}
