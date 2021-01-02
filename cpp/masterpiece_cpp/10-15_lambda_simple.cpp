// 매개 변수 x, y의 합을 출력하는 람다식 만들기
#include <iostream>

using namespace std;

int main() {

    [](int x, int y) { cout << "합은 " << x + y << endl; } (2, 3);  // 람다식 실행. 5 출력

    return 0;
}
