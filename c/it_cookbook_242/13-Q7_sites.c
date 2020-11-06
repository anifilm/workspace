// 07 다음 프로그램을 완성하여 입력받은 관광지 정보 세 개를 모두 출력하라. 여기서 개별 관광지
// 정보는 구조체이며 프로그램은 그 구조체를 가리키는 포인터 배열(array of pointers to structures)
// 을 활용하고 있다. 프로그램을 실행하여 관광지 정보 세 개를 입력받은 후 모든 관광지 정보를
// 출력하라.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;             // 관광지 이름
    char rating;            // 등급: 'A', 'B', 'C'로 평가
} siteType;

int main() {

    int i;
    char temp[100];

    siteType* sites[3];     // 구조체를 가리키는 포인터 배열

    for (i = 0; i < 3; i++) {
        // 포인터를 쓰려면 항상 가리키는 대상을 저장할 공간을 먼저 만들어야 함
        sites[i] = (siteType*)malloc(sizeof(siteType));
        if (sites[i] == NULL)           // 널 테스트
            exit(1);                    // exit로 빠져나감
        printf("Enter name of tour site.\n");
        gets(temp);
        // 포인터를 쓰려면 항상 가리키는 대상을 저장할 공간을 먼저 만들어야 함
        sites[i]->name = (char*)malloc(sizeof(char));
        if (sites[i]->name == NULL)     // 널 테스트
            exit(1);
        strcpy(sites[i]->name, temp);   // 문자열 복사
        printf("Enter rating of the tour site.\n");
        scanf("%c", &sites[i]->rating); // 문자 입력
        while (getchar() != '\n');      // 입력 버퍼 클리어
    }
    for (i = 0; i < 3; i++)
        printf("%s %c\n", sites[i]->name, sites[i]->rating);

    for (i = 0; i < 3; i++) {
        free(sites[i]->name);
        sites[i]->name = NULL;
    }

    for (i = 0; i < 3; i++) {
        free(sites[i]);
        sites[i] = NULL;
    }

    return 0;
}
