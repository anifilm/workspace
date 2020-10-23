// 콘솔창에 출력하기 (cout, cin, endl)
#include <iostream>

using namespace std;

int main() {

    int number {0};

    cout << "숫자를 입력하세요: ";
    cin >> number;

    cout << "입력한 숫자는 " << number << " 입니다." << endl;

    return 0;
}
