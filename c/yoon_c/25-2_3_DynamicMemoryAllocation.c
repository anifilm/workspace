#include <stdio.h>
#include <stdlib.h>

int main() {

    int* ptr1 = (int*)malloc(sizeof(int));
    int* ptr2 = (int*)malloc(sizeof(int) * 8);
    int i;

    *ptr1 = 20;
    for (i = 0; i < 8; i++)
        ptr2[i] = i + 1;

    printf("%d\n", *ptr1);  // 20
    for(i = 0; i < 8; i++)
        printf("%d ", ptr2[i]); // 1 2 3 4 5 6 7 8
    printf("\n");

    free(ptr1);
    free(ptr2);
    return 0;
}

/*

힙 영역의 메모리 공간 할당과 해제: malloc()과 free() 함수

void* malloc(size_t size);
    -> 성공 시 할당된 메모리의 주소값, 실패시 NULL 반환

void free(void* ptr);

malloc() 함수는 void형으로 반환되므로 반환되는 주소 값을 적절히 형 변환해서
할당된 메모리 공간에 접근해야 한다.

  char* cptr = (char*)malloc(sizeof(char));
   int* iptr = (int*)malloc(sizeof(int));
double* dptr = (double*)malloc(sizeof(double));

memset() 함수를 사용하여 동적할당된 메모리 초기화 방법

void* memset (void* ptr, int value, size_t num);

  char* ptr = (char*)malloc(sizeof(char) * 10);
  memset(ptr, 0, sizeof(ptr));  // 동적할당된 ptr의 크기만큼 0으로 채워서 초기화 시킴

*/
