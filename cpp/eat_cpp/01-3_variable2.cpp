// 변수는 변수 사용 직전에 선언해도 된다.
#include <iostream>

using namespace std;

int main() {

    int sum = 0;

    for (int i = 1; i <= 10; i++)
        sum += i;

    cout << "합은: " << sum << endl;

    return 0;
}
