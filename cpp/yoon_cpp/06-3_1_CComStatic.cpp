// C언어에서 이야기한 static
#include <iostream>

using namespace std;

void Counter() {
    static int cnt;
    cnt++;
    cout << "Current cnt: " << cnt << endl;
}

int main() {

    for (int i = 0; i < 10; i++)
        Counter();

    return 0;
}
