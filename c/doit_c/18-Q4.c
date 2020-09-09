// Q4 연결 리스트를 사용하여 성적 처리 프로그램 만들기
// 다음과 같이 동작하는 성적 처리 프로그램을 만들어 보세요. 이 프로그램은 연결 리스트의 개념을
// 사용하기 때문에 학생 수에 제한이 없어야 합니다.
// 힌트 1 '1'을 선택했을 때 점수를 다 입력하면 Menu 화면으로 돌아갑니다.
// 힌트 2 '2'를 선택했을 때 출력이 끝나면 Menu 화면으로 돌아갑니다.
// 힌트 3 구조체와 연결 리스트 개념을 사용하세요.
// 힌트 4 정보를 입력할 때는 scanf 함수를 사용하고 정보를 출력할 때는 printf 함수를 사용하면 됩니다.
#include <stdio.h>
#include <malloc.h>

#define MAX_COUNT 5         // 등록 가능한 최대 학생수

typedef struct grade {
    char name[14];                                  // 이름
    unsigned short int score1, score2, score3;      // 국어, 영어, 수학 점수
    unsigned short int sum, avg, grade;             // 총점, 평균, 등수
} Students;

int AddStudent(Students *p_student, int count) {
    // 학생에 대한 성적 정보 입력
    if (count < MAX_COUNT) {    // 입력 가능한 최대 수를 넘었는지 체크
        p_student = p_student + count;   // student 배열의 count 위치로 이동함
        printf("%d 번째 학생 이름: ", count + 1);
        scanf("%s", p_student->name);

        do {
            printf("국어 점수: ");
            scanf("%d", &p_student->score1);
            if (p_student->score1 > 100) printf("다시 입력하세요.\n");
        } while (p_student->score1 > 100);

        do {
            printf("영어 점수: ");
            scanf("%d", &p_student->score2);
            if (p_student->score2 > 100) printf("다시 입력하세요.\n");
        } while (p_student->score2 > 100);

        do {
            printf("수학 점수: ");
            scanf("%d", &p_student->score3);
            if (p_student->score3 > 100) printf("다시 입력하세요.\n");
        } while (p_student->score3 > 100);

        putchar('\n');

        // 총점 평균 계산
        p_student->sum = p_student->score1 + p_student->score2 + p_student->score3;
        p_student->avg = p_student->sum / 3;

        // 등수를 계산
        // TODO 함수 구성
        p_student->grade = 1;

        return 1;   // 성적 추가 성공시 1을 반환

    } else {
        // 입력 가능한 최대 수를 넘었을 때 오류를 출력
        printf("최대 인원을 초과하여 입력을 할 수 없습니다.\n");
        printf("최대 %d명 까지만 관리 가능합니다.\n\n", MAX_COUNT);
    }

    return 0;       // 성적 추가 실패
}

void ShowStudentGrade(Students *p_student, int count) {
    int i;

    // int tmp, grade[count] = {1, 2, 3, };

    // 등수 계산 (평균 큰 순서대로 재정렬)
    // for (i = 0; i < 3; i++) {
    //     for (j = i + 1; j < 3; j++) {
    //         if (p_student->avg < (p_student + 1)->avg) {
    //             tmp = grade[i];
    //             grade[i] = grade[j];
    //             grade[j] = tmp;
    //         }
    //     }
    // }

    if (count > 0) {        // 등록된 학생의 성적 정보가 있으면 그 수만큼 반복하면서 성적 정보를 출력
        // 정보 출력 (등수 순서로)
        printf("--------------------------------\n");
        printf(" 이름   국어 영어 수학  총점  평균 등수\n");
        printf("--------------------------------\n");
        for (i = 0; i < count; i++) {
            printf("%s  %3d %3d %3d  %4d %3d %2d등\n",
            p_student->name, p_student->score1, p_student->score2, p_student->score3, p_student->sum, p_student->avg, p_student->grade);
            p_student++;    // 다음 위치에 있는 학생 정보로 주소를 이동
        }
    } else {                // 등록된 학생의 성적 정보가 없으면 오류를 출력
        printf("\n등록된 학생의 성적 정보가 없습니다.\n");
    }
}

int main() {

    Students student[MAX_COUNT];        // 성적 정보를 저장할 학생 배열
    int count = 0, num;                 // count는 성적을 등록한 학생수

    while (1) {     // 무한루프, 사용자가 2을 누르면 break문으로 종료
        // 메뉴를 화면에 출력
        printf("\n  [ Menu ]\n");
        printf("===============\n");
        printf("1. 성적 입력\n");
        printf("2. 성적 확인\n");
        printf("3. 종료\n");
        printf("===============\n");
        printf("선택 (1 ~ 3): ");
        scanf("%d", &num);      // 사용자에게 번호를 입력 받음

        putchar('\n');

        if (num == 1) {             // 1번, 성적 입력 선택
            if (1 == AddStudent(student, count)) count++;
        } else if (num == 2) {      // 2번, 성적 확인 선택
            ShowStudentGrade(student, count);
        } else if (num == 3) {      // 3번 반복문을 빠져나가 종료
            break;
        } else {
            // 번호가 유효하지 않은 경우에 오류 메시지를 출력
            printf("1 ~ 3 번호만 선택할 수 있습니다.\n");
        }
    }

    return 0;
}
