#include <stdio.h>

void comment(char);

int main() {

    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    comment(grade);

    return 0;
}

void comment(char ch) {
    switch (ch) {
    case 'A':
        printf("Excellent.\n");
    case 'B':
        printf("Good.\n");
        break;
    case 'c':
    case 'C':
        printf("Not bad.\n");
        break;
    case 'd':
    case 'D':
        printf("Need effort.\n");
        break;
    case 'f':
    case 'F':
        printf("You can do better than this.\n");
        break;
    default:
        printf("No such grade.\n");
        break;
    }
    return;
}
