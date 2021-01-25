/* 문제 11-2 [C++ 기반의 데이터 입출력]
문제 2
이번에는 재미 삼아서 (정말 재미 삼아서이다.) 2차원 배열 접근에 대한 연산자 오버로딩을 진행하고자 한다. 실제로 이렇게
까지 연산자를 직접 오버로딩 하는 경우는 거의 없다. 다만, 필자는 호기심을 유발 및 충족시킨다는 측면에서 이 문제를 제시
하는 것이다. 그러니 여러분도 이 문제에 단순한 호기심과 즐거움을 느꼈으면 좋겠다. 그럼 문제를 제시하겠다. 다음의 이름
으로 클래스를 정의하자.
  class BoundCheckIntArray { ... }

이 클래스는 BoundCheckInt2DArray 클래스의 2차원 배열 버전이다. 따라서 다음과 같이 객체를 생성하면,
  BoundCheckIntArray arr2d(3, 4);

세로와 가로의 길이가 각각 3과 4인, int형 2차원 배열처럼 동작하는 arr2d 객체가 생성되어, 다음의 형태로 데이터를 저장
및 참조할 수 있어야 한다.
  for (int n = 0; n < 3; n++)
      for (int m = 0; m < 4; m++)
          arr2d[n][m] = n + m;

  for (int n = 0; n < 3; n++) {
      for (int m = 0; m < 4; m++)
          cout << arr2d[n][m] << ' ';
      cout << endl;
  }

참고로 두 개의 [] 연산자를 동시에 오버로딩 하는 것은 허용되지 않기 때문에, 위의 다음 문장은,
  arr2d[n][m];

두 번의 [] 연산자 호출을 동반하게끔 구현해야 한다. 즉, 첫 번째 [] 연산에 의해서 위의 문장은 다음과 같이 해석되어야 하며,
  (arr2d.operator[](n))[m];

그리고 arr2d.operator[](n) 연산의 반환 값을 이용해서 두 번째 [] 연산은 다음과 같이 해석되어야 한다.
  ((반환 값).operator[])(m);

참고로 이는 호기심 유발 이상의 의미를 갖지는 않지만, 제법 수준이 높은 문제이니(본서의 검토 과정에서 제법 수준이 높은 게
아니고 많이 수준이 높다는 의견이 있었다.), 풀지 못했다고 해서 실망할 필요는 없다.
*/
#include <iostream>
#include <cstdlib>

using namespace std;

class BoundCheckIntArray {
private:
    int* arr;
    int arrlen;
    BoundCheckIntArray(const BoundCheckIntArray& arr) {}
    BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) { return *this; }
public:
    BoundCheckIntArray(int len) : arrlen(len) {
        arr = new int[len];
    }
    ~BoundCheckIntArray() { delete[] arr; }
    int& operator[](int idx) {
        if (idx < 0 || idx >= arrlen) {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return arr[idx];
    }
    int operator[](int idx) const {
        if (idx < 0 || idx >= arrlen) {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrLen() const { return arrlen; }
};

typedef BoundCheckIntArray* BoundCheckIntArrayPtr;

class BoundCheck2DIntArray {
private:
    BoundCheckIntArray** arr;
    int arrlen;
    BoundCheck2DIntArray(const BoundCheck2DIntArray& arr) {}
    BoundCheck2DIntArray& operator=(const BoundCheck2DIntArray& arr) { return *this; }
public:
    BoundCheck2DIntArray(int col, int row) : arrlen(col) {
        arr = new BoundCheckIntArrayPtr[col];
        for (int i = 0; i < col; i++)
            arr[i] = new BoundCheckIntArray(row);
    }
    BoundCheckIntArray& operator[](int idx) {
        if (idx < 0 || idx >= arrlen) {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return *(arr[idx]);
    }
    ~BoundCheck2DIntArray() {
        for (int i = 0; i < arrlen; i++)
            delete arr[i];
        delete[] arr;
    }
};

int main() {

    BoundCheck2DIntArray arr2d(3, 4);

    for (int n = 0; n < 3; n++) {
        for (int m = 0; m < 4; m++)
            arr2d[n][m] = n + m;
    }

    for (int n = 0; n < 3; n++) {
        for (int m = 0; m < 4; m++)
            cout << arr2d[n][m] << ' ';
        cout << endl;
    }

    return 0;
}
