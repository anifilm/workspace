// 중복된 생성자들을 디폴트 매개 변수(Default Parameter)를 이용한 간소화 연습
#include <iostream>

using namespace std;
/* 다음 클래스에 중복된 생성자를 디폴트 매개 변수를 가진 하나의 생성자로 작성하라.

class MyVector {
private:
    int* p;
    int size;
public:
    MyVector() {
        p = new int[100];
        size = 100;
    }
    MyVector(int n) {
        p = new int[n];
        size = n;
    }
    ~MyVector() { delete[] p; }
};

*/
class MyVector {
private:
    int* p;
    int size;
public:
    MyVector(int n = 100) {
        p = new int[n];
        size = n;
    }
    ~MyVector() { delete[] p; }
};

int main() {

    MyVector *v1, *v2;
    v1 = new MyVector();        // 디폴트로 정수 배열 100 동적 할당
    v2 = new MyVector(1024);    // 정수 배열 1024 동적 할당

    delete v1;
    delete v2;

    return 0;
}
