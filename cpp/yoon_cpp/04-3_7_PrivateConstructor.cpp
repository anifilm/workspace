// private 생성자
#include <iostream>

using namespace std;

class AAA {
private:
    int num;
public:
    // default 생성자
    AAA() : num (0) {
            cout << "called default constructor" << endl;
    }
    // private 생성자를 호출하여 초기화 하는 함수를 구성
    AAA& CreateInitObj(int n) const {
        // 메모리 동적할당후 private 생성자 호출하여 초기화 (클래스 내에서는 private 개체에 접근이 가능하다)
        AAA* ptr = new AAA(n);
        return *ptr;
    }
    void ShowNum() const { cout << num << endl; }
private:
    // private 생성자
    AAA(int n) : num(n) {
            cout << "called private constructor" << endl;
    }
};

int main() {

    // default 생성자로 초기화
    AAA base;
    base.ShowNum();

    // private 생성자를 통해서 초기화 하기 위해 public에 구성된 함수를 사용
    AAA& obj1 = base.CreateInitObj(3);
    obj1.ShowNum();

    // private 생성자를 통해서 초기화 하기 위해 public에 구성된 함수를 사용
    AAA& obj2 = base.CreateInitObj(12);
    obj2.ShowNum();

    delete &obj1;   // private 생성자에서 동적할당한 메모리 반환
    delete &obj2;   // private 생성자에서 동적할당한 메모리 반환
    return 0;
}

/*

AAA 클래스의 멤버함수 내에서도 AAA 클래스의 객체 생성이 가능하다!
생성자가 private이라는 것은 외부에서의 객체 생성을 허용하지 않겠다는 뜻이다.

*/
