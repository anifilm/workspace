/*
Q7
2차원 행렬을 추상화한 Matrix 클래스를 활용하는 다음 코드가 있다.
  (연산 내용, 실행 결과 생략...)

  (1) <<, >> 연산자 함수를 Matrix의 멤버 함수로 구현하라.
  (2) <<, >> 연산자 함수를 Matrix의 프렌드 함수로 구현하라.
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

    Matrix& operator>>(int op[]);
    Matrix& operator<<(int op[]);
};

Matrix& Matrix::operator>>(int op[]) {
    for (int i = 0; i < 4; i++)
        op[i] = this->arr[i];
    return *this;
}

Matrix& Matrix::operator<<(int op[]) {
    for (int i = 0; i < 4; i++)
        this->arr[i] = op[i];
    return *this;
}

int main() {

    Matrix a(4, 3, 2, 1), b;
    int x[4], y[4] = {1, 2, 3, 4};  // 2차원 행렬의 4개 원소 값
    a >> x;  // a의 각 원소를 배열 x에 복사, x[]는 {4, 3, 2, 1}
    b << y;  // 배열 y의 원소 값을 b의 각 원소에 설정

    for (int i = 0; i < 4; i++)
        cout << x[i] << ' ';    // x[] 출력
    cout << endl;
    b.show();

    return 0;
}
