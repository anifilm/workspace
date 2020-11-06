// 포인터 배열로 연령별 윗몸 일으키기 횟수 관리하기
#include <stdio.h>
#include <malloc.h>

int main() {

    // 연령별 인원수를 저장할 배열 - 사용자에게 입력 받음
    unsigned char limit_table[3];
    // 연령별 윗몸 일으키기 횟수를 저장할 배열
    unsigned char* p[3];
    int age, member, temp, sum;
    // 연령별로 윗몸 일으키기 횟수를 입력 받음
    for (age = 0; age < 3; age++) {
        printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
        printf("이 연령대는 몇 명 입니까?: ");
        scanf("%d", &temp);
        limit_table[age] = (unsigned char)temp;
        // 입력 받은 인원수만큼 메모리를 할당
        p[age] = (unsigned char*)malloc(limit_table[age]);
        // 해당 연령에 소속된 사람들을 순서대로 입력 받음
        for (member = 0; member < limit_table[age]; member++) {
            printf("%dth: ", member + 1);
            scanf("%d", &temp);     // 윗몸 일으키기 횟수를 정수로 입력 받음
            *(p[age] + member) = (unsigned char)temp;
        }
    }

    printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");

    // 연령별로 입력된 횟수를 합산하여 평균 값을 출력
    for (age = 0; age < 3; age++) {
        sum = 0;
        printf("%d0대: ", age + 2);
        // 해당 연령에 소속된 사람들의 횟수를 합산
        for (member = 0; member < limit_table[age]; member++) {
            sum = sum + *(p[age] + member);
        }
        // 합산 값을 인원수로 나누어서 평균을 냄
        printf("%5.2f\n", (double)sum / limit_table[age]);

        free(p[age]);
    }

    return 0;
}
