/*
Q7
다음과 같이 원을 추상화한 Circle 클래스가 있다. Circle 클래스와 main() 함수를 작성하고
3개의 Circle 객체를 가진 배열을 선언하고, 반지름 값을 입력받고 면적이 100보다 큰 원의
개수를 출력하는 프로그램을 완성하라. Circle 클래스도 완성하라.
  (Circle 클래스, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Circle {
private:
    int radius; // 원의 반지름 값
public:
    void setRadius(int r);  // 반지름을 설정한다.
    double getArea();   // 면적을 리턴한다.
};

void Circle::setRadius(int r) {
    this->radius = r;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {

    Circle circleArray[3];
    int radius, count = 0;

    for (int i = 0; i < 3; i++) {
        cout << "원 " << i+1 << "의 반지름: ";
        cin >> radius;
        circleArray[i].setRadius(radius);
    }

    for (int i = 0; i < 3; i++) {
        if (circleArray[i].getArea() > 100)
            count++;
    }
    cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

    return 0;
}
