/* 문제 11-2 [C++ 기반의 데이터 입출력]
문제 1
예제 StablePointPtrArray.cpp의 65, 66행을 다음과 같이 구성할 수 있도록 Point 클래스를 대상으로 연산자 오버로딩을
진행해 보자.
  for (int i = 0; i < arr.GetArrLen(); i++)
      cout << arr[i];

물론, 실행결과에는 변함이 없도록 연산자를 오버로딩 해야 한다.
*/
#include <iostream>
#include <cstdlib>

using namespace std;

class Point {
private:
    int xpos, ypos;
public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
    friend ostream& operator<<(ostream& os, const Point& pos);
    friend ostream& operator<<(ostream& os, const Point* pos);
};

ostream& operator<<(ostream& os, const Point& pos) {
    os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
    return os;
}

ostream& operator<<(ostream& os, const Point* pos) {
    os << '[' << pos->xpos << ", " << pos->ypos << ']' << endl;
    return os;
}

typedef Point* POINT_PTR;

class BoundCheckPointPtrArray {
private:
    POINT_PTR* arr;
    int arrlen;
    BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr) {}
    BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& arr) { return *this; }
public:
    BoundCheckPointPtrArray(int len) : arrlen(len) {
        arr = new POINT_PTR[len];
    }
    ~BoundCheckPointPtrArray() { delete[] arr; }
    POINT_PTR& operator[](int idx) {
        if (idx < 0 || idx >= arrlen) {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return arr[idx];
    }
    POINT_PTR operator[](int idx) const {
        if (idx < 0 || idx >= arrlen) {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrLen() const { return arrlen; }
};

int main() {

    BoundCheckPointPtrArray arr(3);
    arr[0] = new Point(3, 4);
    arr[1] = new Point(5, 6);
    arr[2] = new Point(7, 8);

    for (int i = 0; i < arr.GetArrLen(); i++)
        cout << arr[i];

    delete arr[0];
    delete arr[1];
    delete arr[2];

    return 0;
}
