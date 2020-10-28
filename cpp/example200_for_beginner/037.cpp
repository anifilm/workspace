// 조건 선택문 이해하기 (switch ~ case ~ default)
#include <iostream>

using namespace std;

int main() {

    int number {3};

    switch (number) {
        case 1:
            cout << "number 값은 1입니다." << endl;
            break;
        case 2:
            cout << "number 값은 2입니다." << endl;
            break;
        case 3:
            cout << "number 값은 3입니다." << endl;
            break;
        default:
            cout << "number 값을 알 수 없습니다." << endl;
            break;
    }

    return 0;
}
