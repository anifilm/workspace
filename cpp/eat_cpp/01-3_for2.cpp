// 1부터 10까지 합
#include <iostream>

using namespace std;

int main() {

    int i, sum {0};

    for (i = 0; i <= 10; i++)
        sum += i;

    cout << "합은: " << sum << endl;

    return 0;
}
