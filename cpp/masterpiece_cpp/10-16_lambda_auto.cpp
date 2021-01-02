// auto로 람다식 다루기
#include <iostream>

using namespace std;

int main() {

    auto love = [](string a, string b) {
        cout << a << " 보다 " << b << "가 좋아" << endl;
    };

    love("돈", "네");      // 람다식 호출
    love("냉면", "만두");  // 람다식 호출

    return 0;
}
