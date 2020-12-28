// 추상 클래스 구현 연습
#include <iostream>

using namespace std;

class Calculator {  // 추상 클래스
public:
    virtual int add(int a, int b) = 0;  // 두 정수의 합 반환
    virtual int sub(int a, int b) = 0;  // 두 정수의 차 반환
    virtual double average(int a[], int size) = 0;  // 배열 a의 평균값 반환. size는 배열의 크기
};

class GoodCalc : public Calculator {  // 추상 클래스 구현
public:
    int add(int a, int b) { return a + b; }
    int sub(int a, int b) { return a - b; }
    double average(int a[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++)
            sum += a[i];
        return double(sum) / size;
    }
};

int main() {

    Calculator* p = new GoodCalc();

    int a[] = {1, 2, 3, 4, 5};
    cout << p->add(2, 3) << endl;
    cout << p->sub(2, 3) << endl;
    cout << p->average(a, 5) << endl;

    delete p;

    return 0;
}
