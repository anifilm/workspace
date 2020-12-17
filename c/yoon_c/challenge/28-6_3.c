/* 도전! 프로그래밍 4
도전 6

수정 내용
구조체 배열을 동적 할당하도록 수정
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN   20
#define PHONE_LEN  15
#define MAX_USER   100

struct phonebook {
    char name[NAME_LEN];
    char phoneNum[PHONE_LEN];
};

void ShowMenu();
void InsertUserInfo(struct phonebook*, int* n);
void DeleteUserInfo(struct phonebook*, int* n);
void SearchUserInfo(struct phonebook*, int n);
void PrintAllData(struct phonebook*, int n);

int main() {

    struct phonebook* userInfo;
    userInfo = (struct phonebook*)malloc(sizeof(struct phonebook) * MAX_USER);
    int idx = 0;
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
                InsertUserInfo(userInfo, &idx);
                break;
            case 2:
                puts("[DELETE]");
                DeleteUserInfo(userInfo, &idx);
                break;
            case 3:
                puts("[SEARCH]");
                SearchUserInfo(userInfo, idx);
                break;
            case 4:
                puts("[PRINT ALL DATA]");
                PrintAllData(userInfo, idx);
                break;
            default:
                free(userInfo);
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

void InsertUserInfo(struct phonebook* userInfo, int* n) {
    printf("Input Name: ");
    gets(userInfo[*n].name);
    printf("Input Phone Number: ");
    gets(userInfo[*n].phoneNum);
    (*n)++;
    puts("\t\t    Data Inserted!");
    putchar('\n');
}

void DeleteUserInfo(struct phonebook* userInfo, int* n) {
    char name[NAME_LEN];
    int i, find_flag = 0, d_idx;
    printf("Input Name: ");
    gets(name);
    for (i = 0; i < *n; i++) {
        // 삭제할 대상 찾기
        if (strcmp(name, userInfo[i].name) == 0) {
            find_flag = 1;
            puts("Delete userInfo");
            printf("Name: %s\tPhone Number: %s\n", userInfo[i].name, userInfo[i].phoneNum);
            d_idx = i;
        }
    }
    if (0 == find_flag)
        puts("사용자 정보를 찾을 수 없습니다.");
    else {
        // 사용자를 찾았으므로 삭제
        for (i = d_idx; i < *n; i++) {
            strcpy(userInfo[i].name, userInfo[i+1].name);
            strcpy(userInfo[i].phoneNum, userInfo[i+1].phoneNum);
        }
        (*n)--;
    }
    putchar('\n');
}

void SearchUserInfo(struct phonebook* userInfo, int n) {
    char name[NAME_LEN];
    int i, find_flag = 0;
    printf("Input Name: ");
    gets(name);
    for (i = 0; i < n; i++) {
        // 사용자 찾기
        if (strcmp(name, userInfo[i].name) == 0) {
            find_flag = 1;
            printf("Name: %s\tPhone Number: %s\n", userInfo[i].name, userInfo[i].phoneNum);
        }
    }
    if (0 == find_flag)
        puts("사용자 정보를 찾을 수 없습니다.");
    putchar('\n');
}

void PrintAllData(struct phonebook* userInfo, int n) {
    int i;
    if (0 < n) {
        for (i = 0; i < n; i++)
            printf("Name: %s\tPhone Number: %s\n", userInfo[i].name, userInfo[i].phoneNum);
    }
    else {
        puts("출력할 정보가 없습니다.");
    }
    putchar('\n');
}
