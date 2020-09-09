// 사용자에게 숫자를 입력 받아 합산해 출력하기
#include <stdio.h>
#include <malloc.h>         // malloc, free 함수를 사용하기 위해 추가

typedef struct node {
    int number;             // 정수값을 저장할 변수
    struct node *p_next;    // 다음 노드를 가리킬 포인터
} NODE;

// 기존 연결 리스트에 노드가 없는 경우 이 함수로 전달된 p_head와 p_tail 값을 수정해야 하므로
// AddNumber를 호출할 때 p_head, p_tail 포인터 변수의 주소값을 넘겨줍니다.
// 따라서 1차원 포인터의 주소값을 받아서 사용해야 하므로 두 개의 2차원 포인터를 사용합니다.
void AddNumber(NODE **pp_head, NODE **pp_tail, int data) {

    if (*pp_head != NULL) {
        (*pp_tail)->p_next = (NODE *)malloc(sizeof(NODE));      // 새 노드를 할당
        *pp_tail = (*pp_tail)->p_next;      // p_tail(*pp_tail)에 새 노드의 주소값을 저장
    } else {
        // p_head 값이 NULL이면 첫 노드가 추가됨, p_head 값에 직접 대입함
        *pp_head = (NODE *)malloc(sizeof(NODE));                // 새 노드를 할당
        *pp_tail = *pp_head;                // 새 노드의 주소값을 p_tail(*pp_tail)에 저장
    }

    (*pp_tail)->number = data;              // 새 노드의 number에 data 값을 대입
    (*pp_tail)->p_next = NULL;              // 다음 노드가 없음을 명시함
}

int main() {

    // 노드의 시작과 끝을 기억할 포인터 정의
    NODE *p_head = NULL, *p_tail = NULL, *p;
    int sum = 0, temp;

    while (1) {     // 무한 루프, 중간에 9999를 입력하면 종료
        printf("숫자를 입력하세요 (9999를 누르면 종료): ");
        scanf("%d", &temp);
        if (temp == 9999) break;        // 9999를 누르면 입력을 중단함
        // 노드의 시작과 끝을 기억하는 포인터의 주소값과 입력된 숫자를 전달
        AddNumber(&p_head, &p_tail, temp);
    }

    p = p_head;
    while (p != NULL) {
        if (p != p_head) printf("+ ");       // 숫자와 숫자 사이에 + 를 출력
        printf("%d ", p->number);          // 입력한 숫자를 출력
        sum = sum + p->number;              // 입력한 숫자들을 합산
        p = p->p_next;                      // 다음 노드로 이동
    }
    printf("= %d\n", sum);                 // 합산값을 출력

    while (p_head != NULL) {                // p_head 값이 NULL이 될 때까지 반복
        p = p_head;                         // 현재 노드를 삭제하기 위해 p 변수에 노드 주소값을 저장
        p_head = p_head->p_next;            // 시작 위치를 다음 노드로 옮김
        free(p);                            // 기억했던 주소를 사용하여 노드를 삭제
    }
    p_tail = p_head;     // 반복문을 나오면 p_head 값은 NULL, p_tail 값도 NULL 로 변경

    return 0;
}
