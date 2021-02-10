// Q5 정수를 오름차순으로 정렬하기
// 7개의 요소를 저장할 수 있는 data 배열이 있습니다. 이 배열에는 다음과 같이 7개의 숫자가
// 저장되어 있는데, 이 숫자들을 오름차순으로 정렬하는 소스 코드를 작성해 보세요.
// int data[7] = {6, 3, 9, 7, 2, 4, 1};
#include <stdio.h>

int main() {

    int data[7] = {6, 3, 9, 7, 2, 4, 1};
    int i, j, temp;

    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 7; j++) {
            if (data[i] > data[j]) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    printf("sorted data[7] = {%d", data[0]);
    for (i = 1; i < 7; i++)
        printf(", %d", data[i]);
    printf("}\n");

    return 0;
}
