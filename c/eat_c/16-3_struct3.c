// 구조체 변수의 정의 방법
#include <stdio.h>

struct obj {
    char name[20];
    int x, y;
} Ball;

void copy_str(char* dest, const char* src);
void print_obj_status(struct obj OBJ);

int main() {

    Ball.x = 3;
    Ball.y = 4;
    copy_str(Ball.name, "RED BALL");

    print_obj_status(Ball);

    return 0;
}

void print_obj_status(struct obj OBJ) {
    printf("Location of %s\n", OBJ.name);
    printf("(%d, %d)\n", OBJ.x, OBJ.y);
}

void copy_str(char* dest, const char* src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
