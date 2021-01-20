#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLinkedList.h"
#include "Employee.h"

Employee* WhosNightDuty(List* plist, const char* name, int day) {
    int i, num;
    Employee* ret;

    num = LCount(plist);

    //  이름으로 찾기
    LFirst(plist, &ret);

    if (strcmp(ret->name, name) != 0) {
        for (i = 0; i < num - 1; i++) {
            LNext(plist, &ret);

            if (strcmp(ret->name, name) == 0)
                break;
        }
        if (i >= num - 1)  // 해당하는 이름이 존재하지 않으면
            return NULL;
    }

    // 그 뒤로 며칠 뒤
    for (i = 0; i < day; i++)
        LNext(plist, &ret);

    return ret;
}

void ShowEmployeeInfo(Employee* emp) {
    printf("Employee name: %s\n", emp->name);
    printf("Employee number: %d\n", emp->id);
}

int main() {

    int i;
    Employee* pemp;

    // 원형 연결 리스트의 생성 및 초기화
    List list;
    ListInit(&list);

    // 4개의 데이터를 저장
    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->id = 1111;
    strcpy(pemp->name, "Terry");
    LInsert(&list, pemp);

    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->id = 1112;
    strcpy(pemp->name, "John");
    LInsert(&list, pemp);

    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->id = 1113;
    strcpy(pemp->name, "Mike");
    LInsert(&list, pemp);

    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->id = 1114;
    strcpy(pemp->name, "Linn");
    LInsert(&list, pemp);

    // Terry 뒤로 3일 뒤 당직자는?
    pemp = WhosNightDuty(&list, "Terry", 3);
    ShowEmployeeInfo(pemp);

    // Linn 뒤로 15일 뒤 당직자는?
    pemp = WhosNightDuty(&list, "Linn", 15);
    ShowEmployeeInfo(pemp);

    // 할당된 메모리의 전체 해제
    if (LFirst(&list, &pemp)) {
        free(pemp);

        for (i = 0; 9 < LCount(&list) - 1; i++) {
            if (LNext(&list, &pemp))
                free(pemp);
        }
    }

    return 0;
}
