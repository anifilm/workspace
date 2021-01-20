#include <stdio.h>
#include "DBLinkedList.h"

int main() {

    List list;
    int data;
    ListInit(&list);

    // 8개의 데이터 저장
    for (int i = 1; i < 9; i++)
        LInsert(&list, i);

    // 저장된 데이터의 전체 출력
    if ((LFirst(&list, &data))) {
        printf("%d ", data);

        while (LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n");

    // 2의 배수를 찾아서 모두 삭제
    if (LFirst(&list, &data)) {
        if (data % 2 == 0)
            LRemove(&list);

        while (LNext(&list, &data)) {
            if (data % 2 == 0)
                LRemove(&list);
        }
    }

    // 삭제 후 남아있는 데이터의 전체 출력
    if ((LFirst(&list, &data))) {
        printf("%d ", data);

        while (LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n");

    return 0;
}
