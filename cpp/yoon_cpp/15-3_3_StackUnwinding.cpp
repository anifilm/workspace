// 스택 풀기(Stack Unwinding)
#include <iostream>

using namespace std;

void SimpleFuncOne(void);
void SimpleFuncTwo(void);
void SimpleFuncThree(void);

int main() {

    try {
        SimpleFuncOne();
    }
    catch (int expn) {
        cout << "예외코드: " << expn << endl;
    }

    return 0;
}

void SimpleFuncOne() {
    cout << "SimpleFuncOne(void)" << endl;
    SimpleFuncTwo();
}

void SimpleFuncTwo() {
    cout << "SimpleFuncTwo(void)" << endl;
    SimpleFuncThree();
}

void SimpleFuncThree() {
    cout << "SimpleFuncThree(void)" << endl;
    throw -1;
}
