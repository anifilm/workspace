/* 문제 07-2 [IS-A 관계의 상속]
문제 1
정사각형을 의미하는 Square 클래스와 직사각형을 의미하는 Rectangle 클래스를 정의하고자
한다. 그런데 정사각형은 직사각형의 일종으로, 다음의 형태로 클래스의 상속관계를 구성하
고자 한다.
  class Rectangle {
      ...
  };
  class Square : public Rectangle {
      ...
  };

이에 다음 main() 함수와 함께 실행이 가능하도록 위의 클래스를 완성해 보자. 참고로 상속을
한다고 해서 파생 클래스에 무엇인가를 많이 담아야 한다는 생각을 버리자.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int w, int h)
        : width(w), height(h) {
    }
    void ShowAreaInfo() {
        cout << "면적: " << width * height << endl;
    }
};
class Square : public Rectangle {
public:
    Square(int n) : Rectangle(n, n) {}
};

int main() {

    Rectangle rec(4, 3);
    rec.ShowAreaInfo();

    Square sqr(7);
    sqr.ShowAreaInfo();

    return 0;
}
