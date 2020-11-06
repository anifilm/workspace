// const 포인터 이해하기
#include <iostream>

using namespace std;

int main() {

    int number1 {10};
    int number2 {20};

    /* ptr1 포인터의 주소값이 가리키는 값을 상수로 선언 */
    const int* ptr1;            // 주소값 변경 가능, 주소가 가리키는 값 변경 불가능

    ptr1 = &number1;            // 포인터 변수 ptr1에 number1의 메모리 주소값을 저장
    cout << ptr1 << endl;
    cout << *ptr1 << endl;

    // *ptr1 = 30;              // 값 변경 불가능

    ptr1 = &number2;            // 포인터 변수 ptr1에 number2의 메모리 주소값을 저장
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
    cout << endl;

    /* ptr2 포인터를 상수로 선언 */
    int* const ptr2 {&number1}; // 주소값 변경 불가능, 주소가 가리키는 값은 변경 가능
    cout << ptr2 << endl;
    cout << *ptr2 << endl;

    // *ptr2 = &number2;        // 주소값 변경 불가능

    *ptr2 = number2;            // ptr2 주소가 가리키는 값을 변경, 20
    cout << ptr2 << endl;
    cout << *ptr2 << endl;

    return 0;
}
