/* 문제 22-2 [구조체 배열의 선언]
앞서 문제 22-1에서 정의한 employee 구조체를 기반으로 길이가 3인 배열을 선언하자.
그리고 세 명의 정보를 프로그램 사용자로부터 입력 받아서 배열에 저장한 다음, 배열에
저장된 데이터를 순서대로 출력하는 예제를 작성해 보자.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    char name[20];      // 종업원 이름
    char socialNum[20]; // 주민등록번호
    int salary;         // 급여정보
};

int main() {

    // 한글 입출력을 위한 설정 (파일은 EUC-KR로 저장할 것!)
    system("chcp 949");

    struct employee emp[3];

    int i;
    for (i = 0; i < 3; i++) {
        printf("\n[%d번째 종업원 정보 입력]\n", i + 1);
        printf("종업원 이름 입력: "); scanf("%s", emp[i].name);
        printf("주민등록번호 입력: "); scanf("%s", emp[i].socialNum);
        printf("급여정보 입력: "); scanf("%d", &emp[i].salary);
    }

    for (i = 0; i < 3; i++) {
        printf("\n[%d번째 종업원 정보]\n", i + 1);
        printf("종업원 이름: %s, ", emp[i].name);
        printf("주민등록번호: %s, ", emp[i].socialNum);
        printf("급여정보: %d\n", emp[i].salary);
    }
    return 0;
}
