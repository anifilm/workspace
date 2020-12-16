#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define S_SIZE 50

//구조체로 새로운 타입 정의,책의 타입 정의
typedef struct BOOK {
    int seq;
    int year;	//년도 변수 선언
    int lent;
    char title[50];	//책 제목 변수 선언
    struct BOOK *link;
}BOOK;


int main(void) {
    BOOK* list = NULL;		//책을 가르키는 포인터 정의
    BOOK* prev = NULL;
    BOOK* p, *next;
    char buffer[S_SIZE];	//입력받을 책 제목 변수 선언
    int year;
    int cnt = 0; //순서를 세기 위한 변수 선언

    system("chcp 949");

    printf("연결형 리스트를 이용한 도서관리 프로그램\n\n");

    //종료가 선택될때까지 반복될 반복문 선언
    while (1) {
        int number = 0;
        //선택지를 화면에 출력
        printf("=====================\n");
        printf("0. 신규 등록\n");
        printf("1. 도서 대출\n");
        printf("2. 도서 반납\n");
        printf("3. 목록 출력\n");
        printf("4. 종료\n");
        printf("=====================\n");
        scanf("%d", &number);
        while (getchar() != '\n');

        //선택한 숫자에 따라 실행 지정
        if (number == 0) {				//신규등록일때
            //등록 할 책의 제목을 입력받고 동적메모리 할당 후 책 제목 복사
            printf("등록할 책의 제목을 입력하시오: ");
            gets(buffer);
            p = (BOOK*)malloc(sizeof(BOOK));	//동적 메모리 할당
            strcpy(p->title, buffer);

            //책의 출판 연도를 입력받아 복사
            printf("책의 출판 연도를 입력하시오: ");
            gets(buffer);
            year = atoi(buffer);	//buffer의 문자열을 정수로 변환
            p->year = year;			//책의 연도에 저장
            p->lent = 0;			//대출여부 초기화
            p->seq = cnt; //입력받는 순서 저장

            //기존의 연결리스트에 새로운 책 추가
            if (list == NULL)	//만약 리스트가 비어있으면 새로운 책을 첫번째 책으로 만듬
                list = p;
            else                //그외에는 이전 책에 이어 붙임
                prev->link = p;
            p->link = NULL;		//새로운 책의 링크 필드를 NULL로 초기화
            prev = p;
            printf("%s를 성공적으로 등록하였습니다.\n\n", p->title);
            cnt += 1;			//입력 순서 증가

            continue;
        }
        else if (number == 1) {		//만약 number의 값이 1로 입력 받았을 때
            p = list;
            if (p == NULL) {    //도서 등록 여부를 우선 판단
                printf("등록된 도서가 존재하지 않습니다.\n");
                printf("도서를 먼저 등록하여 주십시오.\n");
                continue;
            }
            printf("대여할 책의 제목을 입력하시오: ");
            gets(buffer);
            while (p != NULL) {			//연결리스트 안에 책 순회
                if (strcmp(p->title, buffer) == 0) {	//순회도중 저장된 책의 이름과 입력받은 책의 이름이 일치하고
                    if (p->lent == 0) {		//대출여부를 파악해 대출이 되지 않았으면
                        printf("%s 를 대출에 성공하였습니다.\n\n", p->title);	//대출성공여부를 화면에 표시하고
                        p->lent = 1;		//대출 여부를 1로 만든다.
                        break;
                    }
                    else if (p->lent == 1)	//만약 대출이 된 상태라면
                        printf("%s 가 이미 대출중입니다.\n\n", p->title);	//대출 여부를 화면에 표시하고
                    break;													//반복을 중단한다.
                }
                else {
                    p = p->link;
                    if (p == NULL) {	//만약 순회가 끝났는데 일치하는 값이 없으면
                        printf("%s 가 존재하지 않습니다.\n\n", buffer);	//책이 존재하지않음을 화면에 표시
                        break;
                    }
                }
            }
            continue;
        }
        else if (number == 2) {				//만약 number의 값이 2로 입력을 받았으면
            printf("반납할 책의 제목을 입력하시오: ");
            gets(buffer);
            p = list;
            while (p != NULL) {				//연결리스트 안에 책 순회
                if (strcmp(p->title, buffer) == 0) {	//만약 저장된 책의 제목과 입력받은 책의 제목이 일치한다고
                    if (p->lent != 1) {		//대출여부가 1이 아닐때
                        printf("%s 는 대출중인 책이 아닙니다.\n\n", buffer);	//대출중이 아니라고 화면에 표현
                        break;													//후 반복 중단
                    }
                    else if (p->lent == 1) {									//대출여부가 1일때
                        printf("%s 반납에 성공하였습니다.\n\n", buffer);		//반납에 성공함을 화면에 표현 후
                        p->lent = 0;											//대출여부를 파악하는 값 을 0으로 변경
                        break;
                    }
                }
                else {
                    p = p->link;
                    if (p == NULL) {	//만약 순회가 끝났는데 일치하는 값이 없으면
                        printf("%s 가 존재하지 않습니다.\n\n", buffer);	//책이 존재하지않음을 화면에 표시
                        break;
                    }
                }
            }
            continue;
        }
        else if (number == 3) {						//만약 number의 값이 3으로 입력을 받았으면
            p = list;
            while (p != NULL) {						//연결리스트 안에 책 순회
                printf("순서 %d, 출판연도 %d, 대출여부 %d, 제목 %s\n", p->seq, p->year, p->lent, p->title); //첫번째 저장된 책을 화면에 표시
                p = p->link;				//다음 저장된 책으로 이동

            }
            printf("\n");
            continue;
        }
        else if (number == 4) {				//만약 number의 값을 4로 입력을 받았으면
            p = list;						//동적 할당을 반납
            while (p != NULL) {
                next = p->link;
                free(p);					//동적 메모리 반납
                p = next;
            }
            printf("메모리를 모두 반납하였습니다.");		//메모리 반납하였음을 화면에 표시 후
            break;											//프로그램 종료
        }
        else {											//만약 숫자를 0,1,2,3,4, 이외의 것을 입력하였으면
            printf("잘못 입력하였습니다.\n\n");			//잘못입력하였으면 화면에 출력
            continue;

        }
    }
    return 0;
}
