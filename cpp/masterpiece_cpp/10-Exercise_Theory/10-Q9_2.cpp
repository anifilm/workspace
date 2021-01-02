/* 이론 문제
Q9
다음 제네릭 함수가 있다.

template <class T>
T avg(T* p, int n) {
    T sum = 0;
    for (int k = 0; k < n; k++)
        sum += p[k];
    return sum / n;
}

아래의 호출을 컴파일하여 생성되는 구체화된 버전의 avg() 함수의 소스 코드는 무엇인가?
  (2)
  double d[] = {3.5, 6.7, 7.8};
  cout << avg(d, 3);
*/
#include <iostream>

using namespace std;

double avg(double* p, int n) {
    double sum = 0;
    for (int k = 0; k < n; k++)
        sum += p[k];
    return sum / n;
}

int main() {
    double d[] = {3.5, 6.7, 7.8};
    cout << avg(d, 3);
    return 0;
}
