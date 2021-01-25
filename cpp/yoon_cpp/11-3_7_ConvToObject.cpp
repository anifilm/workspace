// 임시객체로의 자동 형 변환과 형 변환 연산자 (Conversion Operator)
#include <iostream>

using namespace std;

class Number {
private:
    int num;
public:
    Number(int n = 0) : num(n) {
        cout << "Number(int n = 0)" << endl;
    }
    Number& operator=(const Number& ref) {
        cout << "operator=()" << endl;
        num = ref.num;
        return *this;
    }
    void ShowNumber() { cout << num << endl; }
};

int main() {
/*
    Number num1;
    Number num2(0);
    num2 = num1;  // 동일 자료형의 객체간 대입연산
    num2.ShowNumber();  // 100이 출력된다.
*/
    Number num;
    num = 30;  // 일치하지 않는 자료형간의 대입연산
    num.ShowNumber();

    return 0;
}
