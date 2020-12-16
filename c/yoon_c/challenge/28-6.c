/* 도전! 프로그래밍 4
도전 6
전화번호 관리 프로그램을 작성해 보자. 이 프로그램이 기본적으로 지녀야 햐는 기능은
다음과 같다.
 - 입력         이름과 전화번호의 입력
 - 삭제         이름을 입력하여 해당 이름의 정보 삭제
 - 검색         이름을 입력하여 해당 이름의 정보 출력
 - 전체 출력    저장된 모든 이름과 전화번호 정보를 출력

다음 실행의 예에서 보이는 바와 유사하게 동작하는 전화번호 관리 프로그램을 구현하기
바란다.

[실행의 예]
***** MENU *****
1. Insert
2. Delete
3. Search
4. Print All
5. Exit
Choose the item: 1
[INSERT]
Input Name: Yoon
Input Phone Number: 010-1234-5678
                    Data Inserted!

***** MENU *****
1. Insert
2. Delete
3. Search
4. Print All
5. Exit
Choose the item: 1
[INSERT]
Input Name: Hong
Input Phone Number: 010-5544-4321
                    Data Inserted!

***** MENU *****
1. Insert
2. Delete
3. Search
4. Print All
5. Exit
Choose the item: 4
[PRINT ALL DATA]
Name: Yoon      Phone: 010-1234-5678
Name: Hong      Phone: 010-5544-4321
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
void InsertUserInfo(struct phonebook*);
void DeleteUserInfo(struct phonebook*);
void SearchUserInfo(struct phonebook*);
void PrintAllData(struct phonebook*);
static int idx;

int main() {

    struct phonebook userInfo[MAX_USER];
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
                InsertUserInfo(userInfo);
                break;
            case 2:
                puts("[DELETE]");
                DeleteUserInfo(userInfo);
                break;
            case 3:
                puts("[SEARCH]");
                SearchUserInfo(userInfo);
                break;
            case 4:
                puts("[PRINT ALL DATA]");
                PrintAllData(userInfo);
                break;
            default:
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

void InsertUserInfo(struct phonebook* userInfo) {
    printf("Input Name: ");
    gets(userInfo[idx].name);
    printf("Input Phone Number: ");
    gets(userInfo[idx].phoneNum);
    idx++;
    puts("\t\t    Data Inserted!");
    putchar('\n');
}

void DeleteUserInfo(struct phonebook* userInfo) {
    char name[NAME_LEN];
    int i, find_flag = 0, d_idx;
    printf("Input Name: ");
    gets(name);
    for (i = 0; i < idx; i++) {
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
        for (i = d_idx; i < idx + 1; i++) {
            strcpy(userInfo[i].name, userInfo[i+1].name);
            strcpy(userInfo[i].phoneNum, userInfo[i+1].phoneNum);
        }
        idx--;
    }
    putchar('\n');
}

void SearchUserInfo(struct phonebook* userInfo) {
    char name[NAME_LEN];
    int i, find_flag = 0;
    printf("Input Name: ");
    gets(name);
    for (i = 0; i < idx; i++) {
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

void PrintAllData(struct phonebook* userInfo) {
    int i;
    if (0 < idx) {
        for (i = 0; i < idx; i++)
            printf("Name: %s\tPhone Number: %s\n", userInfo[i].name, userInfo[i].phoneNum);
    }
    else {
        puts("출력할 정보가 없습니다.");
    }
    putchar('\n');
}
