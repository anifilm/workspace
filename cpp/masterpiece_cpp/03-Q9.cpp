/*
Q9
Oval 클래스는 주어진 사각형에 내접하는 타원을 추상화한 클래스이다. Oval 클래스의 멤버
는 모두 다음과 같다. Oval 클래스를 선언부와 구현부로 나누어 작성하라.
 - 정수값의 사각형 너비와 높이를 가지는 width, height 변수 멤버
 - 너비와 높이 값을 매개 변수로 받는 생성자
 - 너비와 높이를 1로 초기화하는 매개 변수없는 생성자
 - width와 height를 출력하는 소멸자
 - 타원의 너비를 리턴하는 getWidth() 함수 멤버
 - 타원의 높이를 리턴하는 getHeight() 함수 멤버
 - 타원의 너비와 높이를 변경하는 set(int w, int h) 함수 멤버
 - 타원의 너비와 높이를 화면에 출력하는 show() 함수 멤버

Oval 클래스를 활용하는 코드의 사례와 실행 결과는 다음과 같다.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Oval {
private:
    int width;
    int height;
public:
    Oval();
    Oval(int w, int h);
    ~Oval();
    int getWidth();
    int getHeight();
    void set(int w, int h);
    void show();
};

Oval::Oval() { width = 1, height = 1; }
Oval::Oval(int w, int h) { width = w, height = h;}
Oval::~Oval() {
    cout << "Oval 소멸: ";
    show();
}

int Oval::getWidth() { return width; }
int Oval::getHeight() { return height; }
void Oval::set(int w, int h) { width = w, height = h; }
void Oval::show() {
    cout << "width = " << width << ", height = " << height << endl;
}

int main() {

    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << ", " << b.getHeight() << endl;

    return 0;
}
