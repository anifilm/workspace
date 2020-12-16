#include <stdio.h>
#include <stdlib.h>

char* ReadUserName() {
    char* name = (char*)malloc(sizeof(char) * 30);
    printf("What's your name? ");
    gets(name);
    return name; // 동적할당된 포인터의 주소 값을 반환
}

int main() {

    char * name1;
    char * name2;

    name1 = ReadUserName();
    printf("name1: %s\n", name1);

    name2 = ReadUserName();
    printf("name2: %s\n", name2);

    printf("again name1: %s\n", name1);
    printf("again name2: %s\n", name2);

    free(name1);
    free(name2);
    return 0;
}

/*

malloc() 함수의 사촌 뻘 되는 calloc() 함수

void* calloc(size_t elt_count, size_t, elt_size);
    -> 성공 시 할당된 메모리의 주소 값, 실패 시 NULL 반환

  char* ptr1 = (char*)malloc(sizeof(char) * 10);
  char* ptr3 = (char*)calloc(10, sizeof(char));

힙에 할당된 메모리 공간 확장시 호출하는 realloc() 함수

void* realloc(void* ptr, size_t size);
    -> 성공 시 할당된 메모리의 주소 값, 실패 시 NULL 반환

  int* arr = (int*)malloc(sizeof(int) * 3);     // 길이가 3인 int형 배열 할당
  arr = (int*)realloc(arr, sizeof(int) * 5);    // 길이가 5인 int형 배열로 확장

*/
