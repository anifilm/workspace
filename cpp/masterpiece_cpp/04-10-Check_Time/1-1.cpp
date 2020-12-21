/*
1 다음 물음에 대한 간단한 코드를 보여라.
  (1) 1개의 double 공간을 동적으로 할당받고 3.14를 기록하라.
*/
#include <iostream>

using namespace std;

int main() {

    double* p = new double(3.14);
    cout << *p << endl;

    delete p;
    return 0;
}
