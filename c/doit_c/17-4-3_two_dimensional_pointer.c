// 2차원 포인터로 연령별 윗몸 일으키기 횟수 관리하기
#include <stdio.h>
#include <malloc.h>

int main() {

    // 연령별 인원수를 저장할 포인터 - 사용자에게 입력 받음
    unsigned char *p_limit_table;
    // 연령별 윗몸 일으키기 횟수를 저장할 2차원 포인터
    unsigned char **p;
    int age, age_step, member, temp, sum;

    printf("20대부터 시작해서 연령층이 몇 개 인가요?: ");
    scanf("%d", &age_step);
    // 연령별 인원수를 저장할 메모리를 만듬
    p_limit_table = (unsigned char *)malloc(age_step);
    p = (unsigned char **)malloc(sizeof(unsigned char *) * age_step);
    // 연령별로 윗몸 일으키기 횟수를 입력 받음
    for (age = 0; age < age_step; age++) {
        printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
        printf("이 연령대는 몇 명 입니까?: ");
        scanf("%d", &temp);
        *(p_limit_table + age) = (unsigned char)temp;
        // 입력 받은 인원수만큼 메모리를 할당
        *(p + age) = (unsigned char *)malloc(*(p_limit_table + age));
        // 해당 연령에 소속된 사람들을 순서대로 입력 받음
        for (member = 0; member < *(p_limit_table + age); member++) {
            printf("%dth: ", member + 1);
            scanf("%d", &temp);     // 윗몸 일으키기 횟수를 정수로 입력 받음
            *(*(p + age) + member) = (unsigned char)temp;
        }
    }

    printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");

    // 연령별로 입력된 횟수를 합산하여 평균 값을 출력
    for (age = 0; age < age_step; age++) {
        sum = 0;
        printf("%d0대: ", age + 2);
        // 해당 연령에 소속된 사람들의 횟수를 합산
        for (member = 0; member < *(p_limit_table + age); member++) {
            sum = sum + *(*(p + age) + member);
        }
        // 합산 값을 인원수로 나누어서 평균을 냄
        printf("%5.2f\n", (double)sum / *(p_limit_table + age));

        free(*(p + age));   // 이 연령에 할당했던 동적 메모리를 해제
    }

    free(p);                // 윗몸 일으키기 횟수를 저장하기 위해 구성했던 메모리를 해제
    free(p_limit_table);    // 연령별 인원수를 기억하기 위해 사용했던 메모리를 해제

    return 0;
}
