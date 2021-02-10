// 값을 입력받으면서 오름차순으로 정렬하기
#include <stdio.h>
#define MAX 100		// 정수값은 최대 100개 까지 저장

void DisplayList(int a_data[], int a_count) {
    int i;
    // 배열 출력
    printf("[%d", a_data[0]);
    for (i = 1; i < a_count; i++)
        printf(", %d", a_data[i]);
    printf("]\n");
}

void InsertData(int a_data[], int a_count, int a_num) {
    int i, j;
    for (i = 0; i < a_count; i++)
        if (a_num < a_data[i]) break;

    for (j = a_count; j > i; j--)
        a_data[j] = a_data[j - 1];

    a_data[i] = a_num;
}

int main() {

    int temp, count = 0, num[MAX];

    while (count < MAX) {
        printf("Input Data (Exit -> 9999): ");
        scanf("%d", &temp);
        if (temp == 9999) break;
        InsertData(num, count, temp);
        count++;
        DisplayList(num, count);
    }
    printf("\n");

    DisplayList(num, count);

    return 0;
}
