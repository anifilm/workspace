/* 이론 문제
Q15
STL의 vector 클래스를 활용하는 코드이다. 다음 빈칸을 채워라.

  __________  // double 타입의 벡터 v 생성
  v.push_back(3.1);
  v.push_back(4.1);

  // for문을 이용하여 벡터 v의 모든 값을 출력하라.
  ______________________________
  ______________________________

*/
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<double> v;  // double 타입의 벡터 v 생성
    v.push_back(3.1);
    v.push_back(4.1);

    // for문을 이용하여 벡터 v의 모든 값을 출력하라.
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << ' ';
    cout << endl;

    return 0;
}
