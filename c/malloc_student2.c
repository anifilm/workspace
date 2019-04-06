#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int i, j, input, sum = 0;
	int subject, student;
	int **arr;
	// 우리는 arr[subject][student] 배열을 만들 것이다.

	printf("입력할 과목의 수: ");
	scanf("%d", &subject);

	printf("학생의 수는?: ");
	scanf("%d", &student);

	arr = (int **)malloc(sizeof(int *) * subject);

	for (i = 0; i < subject; i++) {
		arr[i] = (int *)malloc(sizeof(int) * student);
	}

	for (i = 0; i < subject; i++) {
		printf("\n과목 %d 점수 ----------\n", i + 1);

		for (j = 0; j < student; j++) {
			printf("학생 %d의 점수: ", j + 1);
			scanf("%d", &input);

			arr[i][j] = input;
		}
	}
	
	printf("\n----------------------\n");

	for (i = 0; i < subject; i++) {
		sum = 0;

		for (j = 0; j < student; j++) {
			sum += arr[i][j];
		}

		printf("과목 %d  평균점수는 %d점 입니다.\n", i + 1, sum / student);
	}

	for (i = 0; i < subject; i++) {
		free(arr[i]);
	}

	free(arr);

	return 0;
}
