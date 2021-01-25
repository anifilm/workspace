// const 함수를 이용한 오버로딩의 활용
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
    int operator[](int idx) const {  // const 선언으로 오류 해결!
        if (idx < 0 || idx >= arrlen) {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrLen() const { return arrlen; }
};

void ShowAllData(const BoundCheckIntArray& ref) {
    int len = ref.GetArrLen();
    for (int idx = 0; idx < len; idx++)
        cout << ref[idx] << endl;
}

int main() {

    BoundCheckIntArray arr(5);
    for (int i = 0; i < 5; i++)
        arr[i] = (i + 1) * 11;

    ShowAllData(arr);

    return 0;
}
