/*
Q2
정수 공간 5개를 배열로 동적 할당받고, 정수를 5개 입력받아 평균을 구하고 출력한 뒤 배열
을 소멸시키도록 main() 함수를 작성하라.
  (실행 결과 생략...)

*/
#include <iostream>

using namespace std;

int main() {

    int* p = new int[5];
    int sum = 0;

    cout << "정수를 5개 입력: ";
    for (int i = 0; i < 5; i++) {
        cin >> p[i];
        sum += p[i];
    }
    cout << "평균 " << double(sum) / 5 << endl;

    delete[] p;

    return 0;
}
