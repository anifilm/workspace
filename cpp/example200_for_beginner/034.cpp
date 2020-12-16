// 중첩 순환문 이해하기 (for ~ continue ~ break)
#include <iostream>

using namespace std;

int main() {

    int number = 7;

    for (int i = 0; i < 10; i++) {
        if (i % 3 == 0)
            continue;
        else if (i == number)
            break;
        else
            cout << "현재 i 값: " << i << endl;
    }

    return 0;
}
