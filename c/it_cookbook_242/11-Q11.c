// 11 char** p = (char**)malloc(sizeof(char*) * 2);
// 위 선언에 의해 2개 요소로 이루어진 포인터 배열 p[0], p[1]을 생성할 수 있다. 이후 두 개의
// 문자열을 별도로 입력받아 각각을 p[0], p[1]이 가리키는 배열에 저장하되 realoc을 써서 필요한
// 만큼 공간을 확보하여 저장할 수 있다. 이후 swap 함수를 호출하여 p[0], p[1] 포인터 자체를
// 교환한 후 p[0], p[1]이 가리키는 이름을 출력할 수 있다. 다음 프로그램을 완성하여 이러한
// 일련의 작업을 수행하라.
// > Enter first string.
// > Seoul ([Enter])
// > Enter second string.
// > Los Angeles ([Enter])
// > first string became Los Angeles, second string became Seoul.
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    char ch, *temp;
    char** p = (char**)malloc(sizeof(char*) * 2);

    p[1] = p[0] = NULL;     // 포인터 값이 NULL이면 calloc은 malloc과 동일

    printf("Enter first string.\n");
    for (i = 0; (ch = getchar()) != '\n'; i++) {
        p[0] = (char*)realloc(p[0], sizeof(char) * (i + 1));
        // realloc만을 써서 필요 공간 확보 첫 인자는 p[0]
        // i가 0이면 입력 문자수는 1, '\0' 추가하려면 이보다 하나 더 큰 공간이 필요
        if (p[0] == NULL)   // 널 테스트, p[0]이 널이면
            exit(1);        // exit로 빠져나감
        p[0][i] = ch;       // 배열 인덱스 [0][i]에 입력 문자 삽입
        p[0][i + 1] = '\0'; // 문자열 끝에 '\0' 추가
    }

    // 둘째 문자열에 대해서도 동일한 작업
    printf("Enter second string.\n");
    for (i = 0; (ch = getchar()) != '\n'; i++) {
        p[1] = (char*)realloc(p[1], sizeof(char) * (i + 1));
        if (p[1] == NULL)
            exit(1);
        p[1][i] = ch;
        p[1][i + 1] = '\0';
    }

    temp = p[0];            // temp를 사용해서 p[0]과 p[1]을 swap
    p[0] = p[1];
    p[1] = temp;

    printf("first string became %s, second string became %s.\n", p[0], p[1]);

    free(p[0]);             // p[0]을 free시킴
    free(p[1]);             // p[1]을 free시킴
    free(p);                // p을 free시킴

    return 0;
}
