#include <iostream>
#include <ctime>

using namespace std;

int main() {

    time_t now = time(NULL);
    tm *ptm = localtime(&now);

    char buffer[64];
    strftime(buffer, 64, "예제 만드는 지금은 %Y년 %m월 %d일, %H시 %M분 %S초 입니다. (%p)", ptm);

    cout << buffer << endl;
    cout << "test" << endl;

    return 0;
}
