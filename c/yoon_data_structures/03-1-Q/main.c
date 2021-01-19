#include <stdio.h>
#include "ArrayList.h"

int main() {

    // ArrayList의 생성 및 초기화
    List list;
    int data;
    ListInit(&list);

    // 1. 정수 1부터 9까지 리스트에 저장
    for (int i = 1; i < 10; i++)
        LInsert(&list, i);

    // 저장된 데이터의 전체 출력
    printf("현재 데이터의 수: %d\n", LCount(&list));

    if (LFirst(&list, &data)) {  // 첫 번째 데이터 조회
        printf("%d ", data);

        while (LNext(&list, &data))  // 두번째 이후 데이터 조회
            printf("%d ", data);
    }
    printf("\n\n");

    // 2. 리스트에 저장된 값의 합을 계산하여 출력
    int sum = 0;
    if (LFirst(&list, &data)) {  // 첫 번째 데이터 조회
        sum += data;

        while (LNext(&list, &data))  // 두번째 이후 데이터 조회
            sum += data;
    }
    printf("리스트에 저장된 값의 합은 %d입니다.\n\n", sum);

    // 3. 리스트에서 2의 배수와 3의 배수를 삭제
    if (LFirst(&list, &data)) {
        if (data % 2 == 0 || data % 3 == 0)
            LRemove(&list);

        while (LNext(&list, &data)) {
            if (data % 2 == 0 || data % 3 == 0)
                LRemove(&list);
        }
    }

    // 4. 삭제 후 남은 데이터 전체 출력
    printf("현재 데이터의 수: %d\n", LCount(&list));

    if (LFirst(&list, &data)) {  // 첫 번째 데이터 조회
        printf("%d ", data);

        while (LNext(&list, &data))  // 두번째 이후 데이터 조회
            printf("%d ", data);
    }
    printf("\n");

    return 0;
}
