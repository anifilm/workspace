// 배열 포인터 예제
#include <stdio.h>

int main() {

    char (*arr)[3];

    char tmp1[3] = {'b', 'l', 'o'};
    char tmp2[3] = {'c', 'k', '\0'};    // 문자열의 끝을 알리는 '\0'을 추가
    char tmp3[5] = {'d', 'm', 'a', 's', 'k'};   // 배열의 사이즈가 다릅니다 (가리키기 불가)

    printf("tmp1[3]의 주소: %p\n", tmp1);
    printf("tmp2[3]의 주소: %p\n", tmp2);
    printf("tmp3[5]의 주소: %p\n", tmp3);

    printf("\n");  printf("\n");

    arr = &tmp1;    // arr은 tmp1의 주소를 가리킵니다
    printf("arr의 주소: %p\t 문자열: ", arr);
    for (int i = 0; i < (int)sizeof(*arr); i++) {
        printf("%c", (*arr)[i]);
    }
    printf("\n");

    arr = &tmp2;    // arr은 tmp2의 주소를 가리킵니다
    printf("arr의 주소: %p\t 문자열: ", arr);
    for (int i = 0; i < (int)sizeof(*arr); i++) {
        printf("%c", (*arr)[i]);
    }
    printf("\n");

//  arr = &tmp3;    // 배열의 사이즈가 다르다는 것은 타입이 다르다는 뜻

    return 0;
}

/*

배열 포인터란?
 - 배열을 가리키는 '하나의 포인터'
    특정 사이즈의 배열'만' 가리킬 수 있는 하나의 포인터이다.
 - 선언방법: char (*arr)[3];
    char 타입의 인덱스를 3개 가지고 있는 배열을 가리키는 포인터

    int* pNum; 과 같은 포인터의 종류 중 하나, 단지 가리키는 타입이 배열
    pNum은 int 타입을 가리키는 것이고,
    arr은 char타입의 배열 사이즈[3]인 타입을 가리키는 것


출처: https://blockdmask.tistory.com/56 [개발자 지망생]

*/
