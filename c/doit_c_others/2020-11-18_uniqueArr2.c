// 정수 배열에서 중복 값 (요소) 제거하기 2 - O(nlogn)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {
    False = -1, True = 1
};

typedef struct _element {
    int isExisted;
    int value;
    int firstIndex;
} Element;

#define ARR_CAPACITY 10
#define ELEMENTS_CAPACITY 10

void DeleteDuplicatedElementsInArr(int* arr, int arrCapacity, Element* elements, int elementsCapacity, int* elementsCount);
void CopyArr(int* arr, int elementsCount, Element* elements);
void PrintArr(int* arr, int arrCapacity);
int CompareElements(const void* one, const void* other);

int main() {

    int arr[ARR_CAPACITY] = {1, 3, 4, 1, 7, 2, 5, 4, 3, 9};
    int elementsCount = ARR_CAPACITY;
    Element elements[ELEMENTS_CAPACITY + 1];

    printf("중복 값 제거 전의 정수 배열\n");
    PrintArr(arr, elementsCount);

    printf("중복 값 제거 후의 정수 배열\n");
    DeleteDuplicatedElementsInArr(arr, ARR_CAPACITY, elements, ELEMENTS_CAPACITY, &elementsCount);
    qsort(elements, ELEMENTS_CAPACITY, sizeof(Element), CompareElements);   // TODO: 퀵소트 관련 내용 찾아보기
    CopyArr(arr, elementsCount, elements);
    PrintArr(arr, elementsCount);

    return 0;
}

void DeleteDuplicatedElementsInArr(int* arr, int arrCapacity, Element* elements, int elementsCapacity, int* elementsCount) {
    int i;
    *elementsCount = 0;
    memset(elements, False, sizeof(elements[0]) * (elementsCapacity + 1));
    for (i = 0; i < arrCapacity; i++) {
        if (elements[arr[i]].isExisted == False) {
            elements[arr[i]].isExisted = True;
            elements[arr[i]].value = arr[i];
            elements[arr[i]].firstIndex = i;
            (*elementsCount)++;
        }
    }
}

void CopyArr(int* arr, int elementsCount, Element* elements) {
    int i;
    memset(arr, 0, sizeof(arr[0]) * elementsCount);
    for (i = 0; i < elementsCount; i++) {
        arr[i] = elements[i].value;
    }
}

void PrintArr(int* arr, int arrCapacity) {
    int i;
    for (i = 0; i < arrCapacity; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int CompareElements(const void* one, const void* other) {
    Element* oneElement = (Element*)one;
    Element* otherElement = (Element*)other;
    int basis = otherElement->isExisted - oneElement->isExisted;
    if (basis == 0) {
        return oneElement->firstIndex - otherElement->firstIndex;
    } else {
        return basis;
    }
}

/*

[코드 출처]
https://kkikkodev.tistory.com/56

*/
