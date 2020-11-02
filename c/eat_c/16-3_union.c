// 열거형의 도입
#include <stdio.h>

enum {RED, BLUE, WHITE, BLACK};

int main() {

    int palette = RED;

    switch (palette) {
        case RED:
            printf("palette: RED\n");
            break;
        case BLUE:
            printf("palette: BLUE\n");
            break;
        case WHITE:
            printf("palette: WHITE\n");
            break;
        case BLACK:
            printf("palette: BLACK\n");
            break;
    }

    return 0;
}
