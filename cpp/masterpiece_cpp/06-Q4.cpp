/*
Q4
다음 클래스에 중복된 생성자를 디폴트 매개 변수를 가진 하나의 생성자로 작성하고 테스트
프로그램을 작성하라.
  (MyVector 클래스 생략...)

*/
#include <iostream>

using namespace std;

class MyVector {
private:
    int* mem;
    int size;
public:
//  MyVector();
    MyVector(int n, int val);
    ~MyVector() { delete[] mem; }
    void show() {
        for (int i = 0; i < size; i++)
            cout << mem[i] << ' ';
        cout << endl;
    }
};

/*
MyVector::MyVector() {
    mem = new int[100];
    size = 100;
    for (int i = 0; i < size; i++)
        mem[i] = 0;
} */

MyVector::MyVector(int n = 100, int val = 0) {
    mem = new int[n];
    size = n;
    for (int i = 0; i < size; i++)
        mem[i] = val;
}

int main() {

    MyVector a;
    MyVector b(10, 10);
    a.show();
    b.show();

    return 0;
}
