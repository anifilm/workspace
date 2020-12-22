/*
Q8
실습 문제 7의 문제를 수정해 보자. 사용자로부터 다음과 같이 원의 개수를 입력받고, 원의
개수만큼 반지름을 입력받는 방식으로 수정하라. 원의 개수에 따라 동적으로 배열을 할당
받아야 한다.
  (실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Circle {
private:
    int radius; // 원의 반지름 값
public:
    void setRadius(int r);  // 반지름을 설정한다.
    double getArea();  // 면적을 리턴한다.
};

void Circle::setRadius(int r) {
    this->radius = r;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {

    int circleNum;
    cout << "원의 개수: ";
    cin >> circleNum;

    Circle* circleArray = new Circle[circleNum];    // 동적 배열 할당
    int radius, count = 0;

    for (int i = 0; i < circleNum; i++) {
        cout << "원 " << i+1 << "의 반지름: ";
        cin >> radius;
        circleArray[i].setRadius(radius);
    }

    for (int i = 0; i < circleNum; i++) {
        if (circleArray[i].getArea() > 100)
            count++;
    }
    cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

    delete[] circleArray;   // 동적 배열 반환

    return 0;
}
