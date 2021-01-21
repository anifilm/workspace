/* 16
아래 프로그램은 7장의 tic-tac-toe 프로그램을 구현한 예다. 일단 소스코드를 이해한 후에 computer_move 함수, check 함수,
기타 필요한 함수를 수정하되 세 가지 전략을 부여하라. 첫째, 랜덤 함수를 사용하여 위치를 결정하라. 둘째, 사람이 놓은 돌이
일직선이 되는 것을 예방 할 수 있는 위치에 놓아보라. 셋째, 컴퓨터 자신이 놓은 돌이 일직선이 될 수 있는 위치에 놓아보라.
더 나은 전략이 있으면 그 전략을 구현해서 컴퓨터가 사람을 이길 수 있는 방법을 모색해보라.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_board(char b[][3]) {  // initialize with a blank character
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            b[i][j] = ' ';
}

void draw_board(char b[][3]) {
    int i;
    for (i = 0; i < 3; i++) {
        printf("|---|---|---|\n");
        printf("| %c | %c | %c |\n", b[i][0], b[i][1], b[i][2]);
    }
    printf("|---|---|---|\n\n");
}

void welcome_message() {
    printf("Welcome to my tic-tac-toe game.\n");
    printf("The coordinates are, \n");
    printf("|---|---|---|\n");
    printf("|0 0|0 1|0 2|\n");
    printf("|---|---|---|\n");
    printf("|1 0|1 1|1 2|\n");
    printf("|---|---|---|\n");
    printf("|2 0|2 1|2 2|\n");
    printf("|---|---|---|\n\n");
}

int who_first() {   // returns 1 for human, 0 for computer
    char ch;
    printf("play first? (Y/N)\n");
    scanf("%c", &ch);
    if (ch == 'Y' || ch == 'y')
        return 1;
    else
        return 0;
}

void human_move(char b[][3]) {  // exits program if input is invalid
    int i, j;
    printf("It's YOUR turn.\n");
    printf("Enter coordinates. for instance, 1 0\n");
    while (1) {
        scanf("%d %d", &i, &j);
        if (i < 0 || i > 2 || j < 0 || j > 2) {
            // 영역 밖을 입력 했을 때
            printf("Invalid coordinates.\n");
            printf("Retry enter coordinates.\n");
        } else if (b[i][j] != ' ') {
            // 이미 돌이 놓여있는 경우
            printf("Invalid coordinates.\n");
            printf("Retry enter coordinates.\n");
        } else {
            b[i][j] = '0';
            printf("You moved as follows. ");
            printf("%d %d\n", i, j);
            break;
        }
    }
}

void computer_move(char b[][3]) {   // puts 'X' at the first blank of array
    srand(time(NULL));
    int i, j;
    printf("Computer moved as follows. ");
    while (1) {
        // 컴퓨터 돌 위치 결정시 랜덤함수 사용
        i = rand() % 3;
        j = rand() % 3;
        if (b[i][j] == ' ') {
            // 해당 위치가 비어있다면 돌을 놓는다
            printf("%d %d\n", i, j);
            b[i][j] = 'X';
            break;
        }
    }
    return;
}

int check(char b[][3], char ch) {
    int i, j, matched = 0, count = 0;
    for (i = 0; i < 3; i++)     // horizonral line check
        if (b[i][0] == ch && b[i][1] == ch && b[i][2] == ch)
            matched = 1;
    for (j = 0; j < 3; j++)     // vertical line check
        if (b[0][j] == ch && b[1][j] == ch && b[2][j] == ch)
            matched = 1;
    if (b[1][1] == ch)          // diagonal line check
        if ((b[0][0] == ch && b[2][2] == ch) || (b[0][2] == ch && b[2][0] == ch))
            matched = 1;

    if (matched) {
        if (ch == 'X')
            return 0;   // computer won
        else
            return 1;   // human won
    }

    for (i = 0; i <3; i++)
        for (j = 0; j < 3; j++)
            if (b[i][j] == ' ')
                count++;
    if (count == 0)
        return 2;       // board full (It'a a draw)
    return 3;           // continue game
}

int main() {

    int turn, game_over = 0, state;
    char board[3][3];

    welcome_message();
    init_board(board);

    turn = who_first();
    while (!game_over) {
        if (turn == 1) {
            human_move(board);
            state = check(board, '0');
        } else {
            computer_move(board);
            state = check(board, 'X');
        }
        draw_board(board);

        if (state == 0) {
            printf("Computer won.\n\n");
            game_over = 1;
        } else if (state == 1) {
            printf("You won.\n\n");
            game_over = 1;
        } else if (state == 2) {
            printf("It's a draw.\n\n");
            game_over = 1;
        }
        turn = (turn + 1) % 2;  // toogles the turn
    }

    return 0;
}
