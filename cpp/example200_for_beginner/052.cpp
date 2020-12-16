// 지나간 시간 알아내기 (time)
#include <iostream>
#include <ctime>

using namespace std;

int main() {

    time_t start = time(NULL);
    time_t finish = time(NULL);

    int pass_int = 1;

    time(&start);       // 시작 시간 저장

    for (int i = 1; i < 100000; i++) {
        for (int j = 1; j < 100000; j++)
            pass_int += 1;
    }

    time(&finish);      // 완료 시간 저장

    cout << "1을 100억 번 더하는 시간: " << difftime(finish, start) << "초" << endl;

    return 0;
}
