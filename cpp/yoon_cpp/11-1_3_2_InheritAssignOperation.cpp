// 상속 구조에서의 대입 연산자 호출
#include <iostream>

using namespace std;

class First {
private:
    int num1, num2;
public:
    First(int n1 = 1, int n2 = 0) : num1(n1), num2(n2) {}
    First& operator=(const First& ref) {
        cout << "First& operator=()" << endl;
        num1 = ref.num1;
        num2 = ref.num2;
        return *this;
    }
    void ShowData() { cout << num1 << ", " << num2 << endl; }
};

class Second : public First {
private:
    int num3, num4;
public:
    Second(int n1, int n2, int n3, int n4)
        : First(n1, n2), num3(n3), num4(n4) {
    }
    Second& operator=(const Second& ref) {
        cout << "Second& operator=()" << endl;
        num3 = ref.num3;
        num4 = ref.num4;
        return *this;
    }
    /*
    "파생 클래스의 대입 연산자 정의에서, 명시적으로 기본 클래스의 대입 연산자 호출문을 삽입하지 않으면,
    기본 클래스의 대입 연산자는 호출 되지 않아서, 기본 클래스의 멤버변수는 멤버 대 멤버의 복사 대상에서
    제외된다."
    때문에 파생 클래스의 대입 연산자를 정의해야 하는 상황에 놓이게 되면, 기본 클래스의 대입 연산자를 명
    시적으로 호출해야 한다.
    */
    void ShowData() {
        First::ShowData();
        cout << num3 << ", " << num4 << endl;
    }
};

int main() {

    Second ssrc(111, 222, 333, 444);
    Second scpy(0, 0, 0, 0);
    scpy = ssrc;
    scpy.ShowData();

    return 0;
}
