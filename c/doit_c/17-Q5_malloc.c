// Q5 스택 구현하기
// short형 정수 값을 30개 까지 저장할 수 있는 스택 자료 구조를 구현해 보세요.
// 이때 push와 pop 기능은 꼭 함수로 만들어서 사용해야 합니다.
// 힌트1 배열로 구현하는 경우에 전체 개수를 30개로 제한합니다.
// 힌트2 포인터와 malloc 함수와 free 함수를 사용하는 경우에 전체 개수를 30개로 제한하지 않아도 됩니다.
#include <stdio.h>
#include <malloc.h>

#define MAX_DATA_COUNT 30

void Push(short *ap_data_list, short *ap_top) {
    // 스택이 꽉 차서 더 이상 데이터를 저장할 수 없는 경우
    if (*ap_top >= MAX_DATA_COUNT - 1) {
        printf("스텍에 데이터를 Push할 공간이 없습니다.\n");
        return;
    }

    short data;
    printf("Input data: ");
    scanf("%hd", &data);

    (*ap_top)++;
    ap_data_list[*ap_top] = data;
}

void Pop(short *ap_data_list, short *ap_top) {
    // 스택이 비어있는 경우
    if (*ap_top == -1) printf("Pop할 데이터가 존재하지 않습니다.\n");

    short data = ap_data_list[*ap_top];
    (*ap_top)--;

    printf("Pop Data: %hd\n", data);
}

void PrintData(short *ap_data_list, short a_top) {
    printf("----[ Stack Data ]----\n");

    for (int i = 0; i <= a_top; i++) {
        printf(" %2d번째 = %hd\n", i + 1, ap_data_list[i]);
    }
    printf("----------------------\n\n");
}

int main() {

    // malloc 함수로 구현
    short *data_list = (short *)malloc(sizeof(short) * MAX_DATA_COUNT);
    // 스텍에서 가장 최근 추가된 데이터의 위치 (TOP)
    short top = -1;
    short menu = 0;

    while (1) {
        printf("\n------[ Menu ]------\n");
        printf(" 1. Push data \n");
        printf(" 2. Pop data \n");
        printf(" 3. Show data \n");
        printf(" 4. Exit \n");
        printf("----------------------\n\n");

        printf("Select menu (1 ~ 4): ");
        scanf("%hd", &menu);

        if (menu == 1) Push(data_list, &top);
        else if (menu == 2) Pop(data_list, &top);
        else if (menu == 3) PrintData(data_list, top);
        else break;
    }

    free(data_list);

    return 0;
}
