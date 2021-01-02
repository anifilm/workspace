// 반지름이 r인 원의 면적을 반환하는 람다식 만들기
#include <iostream>

using namespace std;

int main() {

    double pi = 3.14;  // 지역 변수

    auto calc = [pi](int r) -> double { return r * r * pi; };  // 반지름이 r인 원 면적을 반환하는 람다식 작성
    cout << "면적은 " << calc(3) << endl;  // 람다식 호출. 28.26 출력

    return 0;
}
