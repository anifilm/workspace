#include <stdio.h>

int main()
{
	int arr[5];
	int i, ave = 0;

	for (i = 0; i < 5; i++) {
		printf("%d번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 5; i++) {
		ave = ave + arr[i];
	}
	
	ave = ave / 5;
	printf("\n전체 학생의 평균은 %d점 입니다.\n\n", ave);

	for (i = 0; i < 5; i++) {
		printf("학생 %d: ", i + 1);

		if (arr[i] >= ave)
			printf("합격\n");
		else
			printf("불합격\n");
	}

	return 0;
}
