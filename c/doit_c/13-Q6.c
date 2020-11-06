// Q6 포인터를 사용하여 데이터 구성하기
// 다음과 같이 a, b, c 변수가 있습니다. 이 변수에는 각각 0x12, 0x34, 0x5678 값이
// 저장되어 있습니다.
// char a = 0x12, b = 0x34;
// short c = 0x5678;
// 이렇게 a, b, c 변수에 저장된 값과 포인터를 사용하여 새로운 변수 t에 0x12345678
// 형태의 값을 저장하는 코드를 작성해 보세요.
// int t;   /* t에 상수 값 0x12345678이 저장되도록 만들어야 함 */
#include <stdio.h>

int main() {

    char a = 0x12, b = 0x34;
    short c = 0x5678;
    int t;

    char* p = (char*)&t;
    *(short*)p = c;
    *(p + 2) = b;
    *(p + 3) = a;

    printf("t = 0x%x\n", t);

    return 0;
}
