// new 연산자에 의해서 발생하는 예외
#include <iostream>
#include <new>

using namespace std;

int main() {

    int num = 0;

    try {
        while (1) {
            num++;
            cout << num << "번째 할당" << endl;
            new int[10000][10000];
        }
    }
    catch (bad_alloc& bad) {
        cout << bad.what() << endl;
        cout << "더 이상 할당 불가!" << endl;
    }

    return 0;
}
