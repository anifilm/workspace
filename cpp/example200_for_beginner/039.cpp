// 조건 순환문 이해하기 2 (do ~ while ~ continue ~ break)
#include <iostream>

using namespace std;

int main() {

    int number {0};

    do {
        number++;
        if (number % 3 == 0)
            continue;
        else
            cout << "number 값: " << number << endl;
    } while (number < 10);

    return 0;
}
