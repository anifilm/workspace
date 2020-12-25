/*
Q6
2차원 행렬을 추상화한 Matrix 클래스를 작성하고, show() 멤버 함수와 다음 연산에 가능
하도록 연산자를 모두 구현하라.
  (연산 내용, 실행 결과 생략...)

  (1) 연산자 함수를 Matrix의 멤버 함수로 구현하라.
  (2) 연산자 함수를 Matrix의 프렌드 함수로 구현하라.
*/
#include <iostream>

using namespace std;

class Matrix {
    int arr[4];
public:
    Matrix() { for (int i = 0; i < 4; i++) arr[i] = 0; }
    Matrix(int a1, int a2, int b1, int b2) {
        arr[0] = a1; arr[1] = a2; arr[2] = b1; arr[3] = b2;
    }
    void show() {
        cout << "Matrix = { ";
        for (int i = 0; i < 4; i++)
            cout << arr[i] << ' ';
        cout << '}' << endl;
    }

    friend Matrix operator+(Matrix op1, Matrix op2);
    friend Matrix& operator+=(Matrix& op1, Matrix op2);
    friend bool operator==(Matrix op1, Matrix op2);
};

Matrix operator+(Matrix op1, Matrix op2) {
    Matrix tmp;
    for (int i = 0; i < 4; i++)
        tmp.arr[i] = op1.arr[i] + op2.arr[i];
    return tmp;
}

Matrix& operator+=(Matrix& op1, Matrix op2) {
    for (int i = 0; i < 4; i++)
        op1.arr[i] += op2.arr[i];
    return op1;
}

bool operator==(Matrix op1, Matrix op2) {
    for (int i = 0; i < 4; i++) {
        if(op1.arr[i] != op2.arr[i])
            return false;
    }
    return true;
}

int main() {

    Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
    c = a + b;
    a += b;
    a.show();
    b.show();
    c.show();
    if (a == c)
        cout << "a and c are the same" << endl;

    return 0;
}
