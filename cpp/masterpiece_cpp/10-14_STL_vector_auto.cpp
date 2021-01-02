// auto를 이용한 변수 선언
#include <iostream>
#include <vector>

using namespace std;

int square(int x) { return x * x; }

int main() {

    // 기본 타입 선언에 auto 활용
    auto c = 'a';    // c는 char 타입으로 결정
    auto pi = 3.14;  // pi는 double 타입으로 결정
    auto ten = 10;   // ten은 int 타입으로 결정
    auto* p = &ten;  // 변수 p는 int* 타입으로 결정
    cout << c << ' ' << pi << ' ' << ten << ' ' << *p << endl;

    // 함수의 반환 타입으로 추론
    auto ret = square(3);  // square() 함수의 반환 타입이 int이므로 ret는 int로 결정
    cout << ret << endl;

    vector<int> v = {1, 2, 3, 4, 5};  // 벡터 v에 5개의 원소를 삽입

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << ' ';
    cout << endl;

    // 템플릿에 auto를 사용하여 복잡한 선언 간소화
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << ' ';
    cout << endl;

    // 향상된 for문 사용
    for (auto i : v)
        cout << i << ' ';
    cout << endl;

    return 0;
}
