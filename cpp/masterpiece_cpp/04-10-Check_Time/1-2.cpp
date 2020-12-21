/*
1 다음 물음에 대한 간단한 코드를 보여라.
  (2) 배열을 동적으로 할당받아 5개의 정수를 입력받고, 제일 큰수를 출력하고 배열을 반환한다.
*/
#include <iostream>

using namespace std;

int main() {

    int* pArray = new int[5];
    if (!pArray) {
        cout << "메모리를 할당할 수 없습니다." << endl;
        return 0;
    }

    for (int i = 0; i < 5; i++) {
        cout << i+1 << "번째 정수: ";
        cin >> pArray[i];
    }

    int max = pArray[0];
    for (int i = 1; i < 5; i++) {
        if (max < pArray[i]) max = pArray[i];
    }
    cout << "제일 큰수 = " << max << endl;

    delete[] pArray;
    return 0;
}
