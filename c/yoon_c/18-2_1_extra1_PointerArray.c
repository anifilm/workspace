// 포인터 배열 예제 1 const char* 문자열 이용
#include <stdio.h>

int main() {

    const char* arr[3];    //포인터 배열 선언.
    int i;

    arr[0] = "BlockDMask";      // arr[0]은 -> 문자열 주소를 가리킵니다.
    arr[1] = "C Programming";   // arr[1]은 -> 문자열 주소를 가리킵니다.
    arr[2] = "point_arr";       // arr[2]은 -> 문자열 주소를 가리킵니다.

    for (i = 0; i < 3; i++) {
        printf("arr[%d] -> %s\n", i, arr[i]);
    }

    return 0;
}

/*

포인터 배열이란?
 - 포인터 들의 배열이다.
    배열의 요소가 포인터들로 이루어져 있다.

 - 선언방법: char* arr[3];
    배열 요소의 자료형이 char* (포인터)인 배열
    그 배열의 요소의 개수가 3개


출처: https://blockdmask.tistory.com/56 [개발자 지망생]

*/
