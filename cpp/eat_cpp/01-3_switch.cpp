// switch문 이용하기
#include <iostream>

using namespace std;

int main() {

    int user_input;
    cout << "나의 정보를 표시합니다." << endl;
    cout << "1. 이름 " << endl;
    cout << "2. 나이 " << endl;
    cout << "3. 성별 " << endl;
    cin >> user_input;

    switch (user_input) {
        case 1:
            cout << "임채영" << endl;
            break;
        case 2:
            cout << "43세" << endl;
            break;
        case 3:
            cout << "남성" << endl;
            break;
        default:
            cout << "궁금한게 없나보군요." << endl;
            break;
    }

    return 0;
}
