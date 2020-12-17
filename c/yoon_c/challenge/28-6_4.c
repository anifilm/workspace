/* 도전! 프로그래밍 4
도전 6

수정 내용
연결 리스트로 구조 변경
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN   20
#define PHONE_LEN  15
#define MAX        20

typedef struct phonebook {
    char name[NAME_LEN];
    char phoneNum[PHONE_LEN];
    struct phonebook* link;
} Node;

Node* p = NULL;
Node* prev = NULL;
Node* head = NULL;
Node* next = NULL;

char buffer[MAX];

void ShowMenu();
void InsertUserInfo();
void DeleteUserInfo();
void SearchUserInfo();
void PrintAllData();
void ClearData();

int main() {

    int sel_item;

    while (1) {
        ShowMenu();
        printf("Choose the item: ");
        while (1) {
            if (scanf("%d", &sel_item) == 0) {
                printf("Choose the item again: ");
                rewind(stdin);
            } else {
                rewind(stdin);
                break;
            }
        }

        switch (sel_item) {
            case 1:
                puts("[INSERT]");
                InsertUserInfo();
                break;
            case 2:
                puts("[DELETE]");
                DeleteUserInfo();
                break;
            case 3:
                puts("[SEARCH]");
                SearchUserInfo();
                break;
            case 4:
                puts("[PRINT ALL DATA]");
                PrintAllData();
                break;
            default:
                ClearData();
                puts("\n프로그램을 종료합니다.");
                return 0;
        }
    }
    return 0;
}


void ShowMenu() {
    puts("***** MENU *****");
    puts("1. Insert");
    puts("2. Delete");
    puts("3. Search");
    puts("4. Print All");
    puts("5. Exit");
}

void InsertUserInfo() {
    p = (Node*)malloc(sizeof(Node));
    p->link = NULL;
    printf("Input Name: ");
    gets(buffer);
    strcpy(p->name, buffer);
    printf("Input Phone Number: ");
    gets(buffer);
    strcpy(p->phoneNum, buffer);
    if (head == NULL)
        head = p;
    else
        prev->link = p;
    prev = p;
    puts("\t\t    Data Inserted!");
    putchar('\n');
}

void DeleteUserInfo() {
    printf("Input Name: ");
    gets(buffer);
    p = head;
    while (1) {
        if (p == NULL) {
            puts("사용자 정보를 찾을 수 없습니다.");
            break;
        }
        if (strcmp(buffer, p->name) != 0) {
            p = p->link;
        }
        else {
            // 삭제할 대상 찾기
            puts("Delete userInfo");
            printf("Name: %s\tPhone Number: %s\n", p->name, p->phoneNum);
            // TODO: 노드 삭제 기능 추가
            break;
        }
    }
    // if (0 == find_flag)
    //     puts("사용자 정보를 찾을 수 없습니다.");
    // else {
    //     // 사용자를 찾았으므로 삭제
    //     for (i = d_idx; i < *n; i++) {
    //         strcpy(userInfo[i].name, userInfo[i+1].name);
    //         strcpy(userInfo[i].phoneNum, userInfo[i+1].phoneNum);
    //     }
    //     (*n)--;
    // }
    putchar('\n');
}

void SearchUserInfo() {
    printf("Input Name: ");
    gets(buffer);
    p = head;
    while (1) {
        if (p == NULL) {
            puts("사용자 정보를 찾을 수 없습니다.");
            break;
        }
        if (strcmp(buffer, p->name) != 0) {
            p = p->link;
        }
        else {
            // 사용자 찾기
            printf("Name: %s\tPhone Number: %s\n", p->name, p->phoneNum);
            break;
        }
    }
    putchar('\n');
}

void PrintAllData() {
    p = head;
    if (head == NULL) {
        puts("출력할 정보가 없습니다.");
    }
    while (1) {
        if (p == NULL)
            break;
        printf("Name: %s\tPhone Number: %s\n", p->name, p->phoneNum);
        p = p->link;

    }
    putchar('\n');
}

void ClearData() {
    p = head;
    while (1) {
        if (p == NULL) {
            head = NULL;
            break;
        }
        next = p->link;
        free(p);
        p = next;
    }
}
