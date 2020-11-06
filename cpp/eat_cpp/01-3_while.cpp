// while문 이용하기
#include <iostream>

using namespace std;

int main() {

    int i {1}, sum {0};

    while (i <= 10) {
        sum += i;
        i++;
    }

    cout << "합은: " << sum << endl;

    return 0;
}
