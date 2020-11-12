/* 문제 02-1 [참조자 기반의 Call-by-reference 구현]
문제 3
문제의 제시에 앞서 먼저 다음 코드를 보자.

int main(void) {
    int num1 = 5;
    int* ptr1 = &num1;
    int num2 = 10;
    int* ptr2 = &num2;
    ...
}

위의 코드를 보면 ptr1과 ptr2가 각각 num1과 num2를 가리키고 있다. 이때 ptr1과 ptr2를
대상으로 다음과 같이 함수를 호출하고 나면,
SwapPointer(ptr1, ptr2);

ptr1과 ptr2가 가리키는 대상이 서로 바뀌도록 SwapPointer 함수를 정의해 보자.
*/
#include <iostream>

using namespace std;

/*
void SwapPointer(int* p_num1, int* p_num2) {
    int temp = *p_num1;
    *p_num1 = *p_num2;
    *p_num2 = temp;
}
*/
void SwapPointer(int *(&p_num1), int *(&p_num2)) {
    int* temp = p_num1;
    p_num1 = p_num2;
    p_num2 = temp;
}


int main() {

    int num1 = 5;
    int* ptr1 = &num1;
    int num2 = 10;
    int* ptr2 = &num2;

    cout << "before swap reference" << endl;
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    cout << endl;

    SwapPointer(ptr1, ptr2);
    cout << "after swap pointer" << endl;
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    return 0;
}
