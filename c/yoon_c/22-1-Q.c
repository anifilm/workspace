/* 문제 22-1 [구조체의 정의]
문자열 형태의 '종업원 이름'과 문자열 형태의 '주민등록번호' 그리고 정수 형태의 '급여정보'
를 저장할 수 있는 employee라는 이름의 구조체를 정의해 보자. 그리고 나서 employee 구조체
변수를 하나 선언한 다음, 프로그램 사용자가 입력하는 정보로 이 변수를 채우자. 그리고
마지막으로 구조체 변수에 채워진 데이터를 출력해 보자.
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

    struct employee emp;

    printf("종업원 이름 입력: ");  scanf("%s", emp.name);
    printf("주민등록번호 입력: ");  scanf("%s", emp.socialNum);
    printf("급여정보 입력: ");  scanf("%d", &emp.salary);

    printf("종업원 이름: %s, ", emp.name);
    printf("주민등록번호: %s, ", emp.socialNum);
    printf("급여정보: %d\n", emp.salary);

    return 0;
}
