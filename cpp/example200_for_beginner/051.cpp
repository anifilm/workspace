// 날짜와 시간을 문자열로 변환하기 (localtime)
#include <iostream>
#include <ctime>

using namespace std;

int main() {

    time_t now = time(NULL);
    tm *ptm = localtime(&now);

    char buffer[82];
    strftime(buffer, 82, "예제 만드는 지금은 %Y년 %m월 %d일, %H시 %M분 %S초 입니다.(%p)", ptm);

    cout << buffer << endl;

    return 0;
}
