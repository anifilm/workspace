// 디폴트 매개 변수로 인한 함수 중복의 모호성
#include <iostream>

using namespace std;

void msg(int id) {
    cout << id << endl;
}

void msg(int id, string s = "") {
    cout << id << ": " << s << endl;
}

int main() {

    msg(5, "Good Morning");  // 정상 컴파일. 두번째 msg() 호출
//  msg(6);     // 컴파일 오류. 함수 호출 모호

    return 0;
}
