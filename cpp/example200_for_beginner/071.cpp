// 포인터 배열 사용하기
#include <iostream>

using namespace std;

int main() {

    const int kSize = 3;
    int numbers[kSize] = {10, 20, 30};
    int* pointer1 = numbers;

    int no1 = 1, no2 = 2, no3 = 3;
    int* pointer2[kSize] = {&no1, &no2, &no3};

    for (int i = 0; i < kSize; i++)
        cout << "Pointer1[" << i << "] = " << *(pointer1 + i) << endl;
    cout << endl;

    for (int i = 0; i < kSize; i++)
        cout << "Pointer2[" << i << "] = " << *pointer2[i] << endl;

    return 0;
}
