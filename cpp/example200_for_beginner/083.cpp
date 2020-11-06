// 1차원 배열 함수 인자 사용하기
#include <iostream>

using namespace std;

void Print1(int* arr) {
    cout << "== Print1 ==" << endl;
    cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
    cout << endl;
    arr[1] = 2000;
}

void Print2(int arr[]) {
    cout << "== Print2 ==" << endl;
    cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
    cout << endl;
    arr[2] = 3000;
}

int main() {

    int data[3] {1, 2, 3};

    Print1(data);
    Print2(data);

    cout << "== 결과 ==" << endl;
    cout << data[0] << ", " << data[1] << ", " << data[2] << endl;

    return 0;
}
