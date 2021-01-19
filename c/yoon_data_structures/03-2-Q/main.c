#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main() {

    // ArrayList의 생성 및 초기화
    List list;
    NameCard* pcard;
    ListInit(&list);

    // 1. 4명의 전화번호 정보를 저장
    pcard = MakeNameCard("임채영", "010-8731-2354");
    LInsert(&list, pcard);

    pcard = MakeNameCard("정흥규", "010-4004-4862");
    LInsert(&list, pcard);

    pcard = MakeNameCard("서환길", "010-5555-4455");
    LInsert(&list, pcard);

    pcard = MakeNameCard("안재훈", "010-1234-5678");
    LInsert(&list, pcard);

    // 저장된 데이터의 전체 출력
    printf("현재 데이터의 수: %d\n", LCount(&list));

    if (LFirst(&list, &pcard)) {  // 첫 번째 데이터 조회
        ShowNameCardInfo(pcard);

        while (LNext(&list, &pcard))  // 두번째 이후 데이터 조회
            ShowNameCardInfo(pcard);
    }
    printf("\n");

    // 2. 특정 이름을 대상으로 탐색을 진행하며, 그 사람의 정보를 출력한다.
    if (LFirst(&list, &pcard)) {
        if (!NameCompare(pcard, "서환길")) {
            ShowNameCardInfo(pcard);
        }
        else {
            while (LNext(&list, &pcard)) {
                if (!NameCompare(pcard, "서환길")) {
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }
    }
    printf("\n");

    // 3. 특정 이름을 대상으로 탐색을 진행하며, 그 사람의 전화번호 정보를 변경한다.
    if (LFirst(&list, &pcard)) {
        if (!NameCompare(pcard, "안재훈")) {
            ChangePhoneNum(pcard, "010-9253-0959");
        }
        else {
            while (LNext(&list, &pcard)) {
                if (!NameCompare(pcard, "안재훈")) {
                    ChangePhoneNum(pcard, "010-9253-0959");
                    break;
                }
            }
        }
    }

    // 4. 특정 이름을 대상으로 탐색을 진행하며, 그 사람의 정보를 삭제한다.
    if (LFirst(&list, &pcard)) {
        if (!NameCompare(pcard, "정흥규")) {
            pcard = LRemove(&list);
            free(pcard);
        }
        else {
            while (LNext(&list, &pcard)) {
                if (!NameCompare(pcard, "정흥규")) {
                    pcard = LRemove(&list);
                    free(pcard);
                    break;
                }
            }
        }
    }

    // 5. 삭제 후 남은 데이터 전체 출력
    printf("현재 데이터의 수: %d\n", LCount(&list));

    if (LFirst(&list, &pcard)) {  // 첫 번째 데이터 조회
        ShowNameCardInfo(pcard);

        while (LNext(&list, &pcard))  // 두번째 이후 데이터 조회
            ShowNameCardInfo(pcard);
    }
    printf("\n");

    return 0;
}
