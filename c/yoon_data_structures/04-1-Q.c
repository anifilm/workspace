/* 문제 04-1 [연결 리스트 관련 코드에 익숙해지기]
예제 LinkedRead.c에 익숙해지는 가장 빠르고도 흥미로운 길은 예제를 조금 수정해 보는 것이다. 따라서 예제를 조금
수정해 볼 기회를 제공하고자 한다. 예제 수정을 위한 주제는 다음과 같다.

 - 새 노드를 연결 리스트의 꼬리가 아닌 머리에 추가한다.

예제에서는 노드를 머리가 아닌 꼬리에 추가하였다. 따라서 3→2→7→8의 순으로 연결되어 있는 리스트에 5를 추가로 삽입
하면 3→2→7→8→5의 순으로 저장이 된다. 그런데 이번에는 다음 순으로 저장이 되도록 예제를 변경해 보고자 한다.

  5→8→7→2→3

즉 연결 리스트의 머리에 노드가 추가되도록 예제를 변경하는 것이다. 이 문제가 쉬워 보이더라도 그림을 그려서 머리에
노드가 추가되는 과정을 완전히 정리한 다음에 코드로 옮기기 바란다. 그리고 이를 습관화하기 바란다.
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

    // 데이터를 입력받는 과정
    while (1) {
        printf("정수 입력: ");
        scanf("%d", &readData);
        if (readData < 1) break;

        // 노드의 추가과정
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }
    printf("\n");

    // 입력 받은 데이터의 출력 과정
    printf("입력 받은 데이터의 전체 출력\n");
    if (head == NULL) {
        printf("저장된 정수가 존재하지 않습니다.\n");
    }
    else {
        cur = head;
        printf("%d ", cur->data);    // 첫 번째 데이터 출력

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

        printf("%d을(를) 삭제합니다.\n", head->data);
        free(delNode);  // 첫 번째 노드 삭제

        while (delNextNode != NULL) {  // 두 번째 이후 노드 삭제
            delNode = delNextNode;
            delNextNode = delNextNode->next;

            printf("%d을(를) 삭제합니다.\n", delNode->data);
            free(delNode);
        }
    }

    return 0;
}
