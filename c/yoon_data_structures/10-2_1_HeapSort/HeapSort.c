// 힙 정렬 (Heap Sort)
#include <stdio.h>
#include "UsefulHeap.h"

int PriComp(int n1, int n2) {
    return n2 - n1;  // 오름차순 정렬
}

void HeapSort(int arr[], int n, PriorityComp pc) {
    Heap heap;
    int i;

    HeapInit(&heap, pc);

    // 정렬대상을 가지고 힙을 구성
    for (i = 0; i < n; i++)
        HInsert(&heap, arr[i]);

    // 순서대로 하나씩 꺼내서 정렬을 완성
    for (i = 0; i < n; i++)
        arr[i] = HDelete(&heap);
}

int main() {

    int arr[5] = {5, 3, 2, 4, 1};
    int len = sizeof(arr) / sizeof(int);

    HeapSort(arr, len, PriComp);

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
