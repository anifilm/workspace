// Q5 성적 처리 프로그램을 파일 입출력 형태로 변경하기
// 프로그램이 사용하던 데이터를 파일에 저장하는 기능이 없다면 사용자가 입력했던 데이터가
// 프로그램을 종료할 때 모두 사라지게 됩니다. 그래서 프로그램이 다시 실행되었을 때는 기존
// 데이터가 하나도 없기 때문에 사용할 데이터를 다시 입력해야 하는 불편함이 있습니다.
// 18장에서 만든 '성적 처리 프로그램'에 파일 입출력 코드를 추가하여 프로그램을 종료했다가
// 다시 실행해도 이전에 입력한 성적 데이터가 그대로 유지될 수 있도록 코드를 구현해 보세요.
// 힌트 성적 데이터를 파일에 저장할 때는 텍스트 형식으로 해도 되고 바이너리 형식으로 해도 됩니다.
#include <stdio.h>
#include <malloc.h>

typedef struct grade {
    unsigned short score1, score2, score3;      // 국어, 영어, 수학 점수
    unsigned short sum, avg;                    // 총점, 평균, 등수
    char name[14];                              // 이름
    struct grade *p_next;
} Students;

void AddStudent(Students **pp_start, Students **pp_end, unsigned short *ap_count) {
    // 학생에 대한 성적 정보 입력
    // 새 노드를 할당
    Students *p_node = (Students *)malloc(sizeof(Students)), *p_temp_node, *p_prev_node;

    printf("%d 번째 학생 이름: ", *ap_count + 1);
    scanf("%s", p_node->name);

    do {
        printf("국어 점수: ");
        scanf("%d", &p_node->score1);
        if (p_node->score1 > 100) printf("다시 입력하세요.\n");
    } while (p_node->score1 > 100);

    do {
        printf("영어 점수: ");
        scanf("%d", &p_node->score2);
        if (p_node->score2 > 100) printf("다시 입력하세요.\n");
    } while (p_node->score2 > 100);

    do {
        printf("수학 점수: ");
        scanf("%d", &p_node->score3);
        if (p_node->score3 > 100) printf("다시 입력하세요.\n");
    } while (p_node->score3 > 100);

    putchar('\n');

    // 총점 평균 계산
    p_node->sum = p_node->score1 + p_node->score2 + p_node->score3;
    p_node->avg = p_node->sum / 3;

    p_temp_node = *pp_start;
    p_prev_node = NULL;

    // 등수로 재정렬
    while (p_temp_node != NULL && p_node->sum < p_temp_node->sum) {
        p_prev_node = p_temp_node;
        p_temp_node = p_temp_node->p_next;
    }

    if (*pp_start == NULL) {
        *pp_start = p_node;
        *pp_end = *pp_start;
        (*pp_end)->p_next = NULL;
    } else if (p_temp_node == *pp_start) {
        p_node->p_next = *pp_start;
        *pp_start = p_node;
    } else if (p_temp_node == NULL) {
        (*pp_end)->p_next = p_node;
        *pp_end = (*pp_end)->p_next;
        (*pp_end)->p_next = NULL;
    } else {
        p_node->p_next = p_prev_node->p_next;
        p_prev_node->p_next = p_node;
    }

    (*ap_count)++;
}

void ShowStudentGrade(Students **pp_start) {
    // 정보 출력 (등수 순서로)
    printf("--------------------------------\n");
    printf(" 이름   국어 영어 수학  총점  평균 등수\n");
    printf("--------------------------------\n");

    Students *p_node = *pp_start;
    char rank = 1;

    while (p_node != NULL) {
        printf("%s  %3d %3d %3d  %4d %3d %2d등\n",
        p_node->name, p_node->score1, p_node->score2, p_node->score3,
        p_node->sum, p_node->avg, rank);

        p_node = p_node->p_next;
        rank++;
    }
}

void DeleteAllGrade(Students *p_start) {
    Students *p_node;

    while (p_start != NULL) {
        p_node = p_start;
        p_start = p_start->p_next;
        free(p_node);
    }
}

void LoadFile(Students **p_start, Students **p_end, unsigned short *p_count) {
    FILE *p_file = fopen("19-Q5_data.dat", "rb");
    if (p_file != NULL) {
        fread(p_count, sizeof(unsigned short), 1, p_file);

        for (unsigned short i = 0; i < *p_count; i++) {
            if (*p_start != NULL) {
                (*p_end)->p_next = (Students *)malloc(sizeof(Students));
                *p_end = (*p_end)->p_next;
            } else {
                *p_start = (Students *)malloc(sizeof(Students));
                *p_end = *p_start;
            }
            fread(*p_end, sizeof(Students), 1, p_file);
        }
        (*p_end)->p_next = NULL;

        fclose(p_file);
    }
}

void SaveFile(Students *p_start, unsigned short count) {
    FILE *p_file = fopen("19-Q5_data.dat", "wb");
    if (p_file != NULL) {
        fwrite(&count, sizeof(unsigned short), 1, p_file);
        while (p_start != NULL) {
            fwrite(p_start, sizeof(Students), 1, p_file);
            p_start = p_start->p_next;
        }
        fclose(p_file);
    }
}

int main() {

    Students *p_start = NULL, *p_end = NULL;
    unsigned short count = 0, menu;  // count는 성적을 등록한 학생수

    // 바이너리(Binary) 파일에 저장된 학생의 성적 정보를 읽어옴
    LoadFile(&p_start, &p_end, &count);

    while (1) {     // 무한루프, 사용자가 2을 누르면 break문으로 종료
        // 메뉴를 화면에 출력
        printf("\n  [ Menu ]\n");
        printf("===============\n");
        printf("1. 성적 입력\n");
        printf("2. 성적 확인\n");
        printf("3. 종료\n");
        printf("===============\n");
        printf("선택 (1 ~ 3): ");
        scanf("%hd", &menu);         // 사용자에게 번호를 입력 받음

        putchar('\n');

        if (menu == 1) {            // 1번, 성적 입력 선택
            AddStudent(&p_start, &p_end, &count);
        } else if (menu == 2) {     // 2번, 성적 확인 선택
            ShowStudentGrade(&p_start);
        } else if (menu == 3) {     // 3번 반복문을 빠져나가 종료
            break;
        } else {
            // 번호가 유효하지 않은 경우에 오류 메시지를 출력
            printf("1 ~ 3 번호만 선택할 수 있습니다.\n");
        }
    }

    // 연결 리스트의 모든 노드를 삭제하기 전에 바이너리 파일에 저장
    SaveFile(p_start, count);

    DeleteAllGrade(p_start);

    return 0;
}
