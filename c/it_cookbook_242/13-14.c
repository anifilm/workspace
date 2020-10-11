#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char color;
    unsigned red: 8;
    unsigned green: 8;
    unsigned blue: 8;
} rgbType;

rgbType lookup(char ch) {
    int i;
    static rgbType lookup_table[] = {
        {'r', 255, 0, 0}, {'g', 0, 255, 0}, {'b', 0, 0, 255},
        {'y', 255, 255, 0}, {'p', 255, 0, 255}, {'c', 0, 255, 255}
    };

    for (i = 0; i < 6; i++) {
        if (lookup_table[i].color == ch)
            return lookup_table[i];      // rgbType 구조체를 리턴
    }
    printf("No such color in lookup_table.\n");
    exit(1);
}

int main() {

    rgbType rgb;
    char ch;

    while (1) {
        printf("Enter the color to search. Enter 'q' to exit.\n");
        printf("r(ed), g(reen), b(lue), y(ellow), p(urple), c(yan)\n");
        scanf("%c", &ch);
        if (ch == 'q')
            break;
        else
            rgb = lookup(ch);

        printf("red: %d, green: %d, blue: %d\n\n", rgb.red, rgb.green, rgb.blue);
        while((ch = getchar()) != '\n');    // 엔터키를 버퍼에서 지움
    }

    return 0;
}
