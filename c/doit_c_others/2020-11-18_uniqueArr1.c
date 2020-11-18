// 정수 배열에서 중복 값 (요소) 제거하기 1 - O(n2)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {
    False, True
};

#define ARR_CAPACITY 10

void DeleteDuplicatedElementsInArr(int* arr, int* arrCapacity);
int SearchKeyInArr(int* arr, int arrCapacity, int key);
void PrintArr(int* arr, int arrCapacity);

int main() {

    int arr[ARR_CAPACITY] = {1, 3, 4, 1, 7, 2, 5, 4, 3, 9};
    int arrCapacity = ARR_CAPACITY;

    printf("중복 값 제거 전의 정수 배열\n");
    PrintArr(arr, arrCapacity);

    printf("중복 값 제거 후의 정수 배열\n");
    DeleteDuplicatedElementsInArr(arr, &arrCapacity);
    PrintArr(arr, arrCapacity);

    return 0;
}

void DeleteDuplicatedElementsInArr(int* arr, int* arrCapacity) {
    int* uniqueArr = (int*)calloc(*arrCapacity, sizeof(int));
    int i, uniqueArrCount = 0;
    for (i = 0; i < *arrCapacity; i++) {
        if (!SearchKeyInArr(uniqueArr, uniqueArrCount, arr[i])) {
            uniqueArr[uniqueArrCount++] = arr[i];
        }
    }
    memset(arr, 0, sizeof(arr[0]) * (*arrCapacity));
    for (i = 0; i < uniqueArrCount; i++) {
        arr[i] = uniqueArr[i];
    }
    if (uniqueArr) {
        free(uniqueArr);
        uniqueArr = NULL;
    }
    *arrCapacity = uniqueArrCount;
}

int SearchKeyInArr(int* arr, int arrCapacity, int key) {
    int i;
    for (i = 0; i < arrCapacity; i++) {
        if (arr[i] == key) {
            return True;
        }
    }
    return False;
}

void PrintArr(int* arr, int arrCapacity) {
    int i;
    for (i = 0; i < arrCapacity; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/*

[코드 출처]
https://kkikkodev.tistory.com/55

*/
