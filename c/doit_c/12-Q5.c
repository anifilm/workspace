// Q5 정수를 오름차순으로 정렬하기
// 7개의 요소를 저장할 수 있는 data 배열이 있습니다. 이 배열에는 다음과 같이 7개의 숫자가
// 저장되어 있는데, 이 숫자들을 오름차순으로 정렬하는 소스 코드를 작성해 보세요.
// int data[7] = {6, 3, 9, 7, 2, 4, 1};
#include <stdio.h>

int main() {

    int data[7] = {6, 3, 9, 7, 2, 4, 1};
    int i, j, temp;

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (i == j) continue;
            else if (data[i] < data[j]) {
                temp = data[j];
                data[j] = data[i];
                data[i] = temp;
            }
        }
    }

    printf("sorted data[7] = {");
    for (i = 0; i < 6; i++)
        printf("%d, ", data[i]);
    printf("%d}\n", data[i]);

	return 0;
}
