// 논리형 변수 이해하기 (bool)
#include <iostream>

using namespace std;

int main() {

    int x {10};
    int y {6};
    bool is_true = false;

    if (x > y)
        is_true = true;
    else
        is_true = false;

    if (is_true)
        cout << "x는 y보다 큽니다." << endl;
    else
        cout << "x는 y보다 작습니다." << endl;


    return 0;
}
