/* 문제 04-2 [더미 노드를 적용했을 때의 코드 변화 확인하기]
더미 노드의 유무에 따른 코드의 변화를 직접 경험하는 것은 코드의 이해력을 높이는데 도움이 된다. 그래서 LinkedRead.c에서
생성하는 연결 리스트에 더미 노드를 추가하고, 그에 따른 코드의 변화를 직접 확인하기로 하겠다. 이 예제는 리스트의 끝에다가
노드를 추가하는 방식으로 head와 tail이 모두 필요하다. 따라서 다음의 형태로 구성을 해야 한다.
  (그림 -4-19: 예제 LinkedRead.c의 더미 노드 구성 생략...)

더미 노드를 추가한다고 해서 더 복잡해지는 건 아니니 걱정하지 말자 맥을 정확히 짚으면 보다 간결해지는 코드를 보면서 흥이
날 테니 말이다.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node* next;
} Node;

int main() {

    Node* head = NULL;
    Node* tail = NULL;
    Node* cur = NULL;

    Node* newNode = NULL;
    int readData;

    head = (Node*)malloc(sizeof(Node));  // 더미 노드 추가
    tail = head;

    // 데이터를 입력받는 과정
    while (1) {
        printf("정수 입력: ");
        scanf("%d", &readData);
        if (readData < 1) break;

        // 노드의 추가과정
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        /*
        if (head == NULL)
            head = dummy;
        else
            tail->next = newNode;
        */
        tail->next = newNode;
        tail = newNode;
    }
    printf("\n");

    // 입력 받은 데이터의 출력 과정
    printf("입력 받은 데이터의 전체 출력\n");
    if (head == NULL) {
        printf("저장된 정수가 존재하지 않습니다.\n");
    }
    else {
        cur = head;
    //  printf("%d ", cur->data);    // 첫 번째 데이터 출력

        while (cur->next != NULL) {  // 두 번째 이후의 데이터 출력
            cur = cur->next;
            printf("%d ", cur->data);
        }
    }
    printf("\n\n");

    // 메모리 해제 과정
    if (head == NULL) {
        return 0;  // 해제할 노드가 존재하지 않는다.
    }
    else {
        Node* delNode = head;
        Node* delNextNode = head->next;

    //  printf("%d을(를) 삭제합니다.\n", head->data);
    //  free(delNode);  // 첫 번째 노드 삭제

        while (delNextNode != NULL) {  // 두 번째 이후 노드 삭제
            delNode = delNextNode;
            delNextNode = delNextNode->next;

            printf("%d을(를) 삭제합니다.\n", delNode->data);
            free(delNode);
        }
    }

    return 0;
}
