#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE* fp;
    char ch, str[100];
    int i = 0, j, count;

    fp = fopen("14-06_apple.txt", "rt");
    while ((ch = fgetc(fp)) != EOF) {
        str[i] = ch;
        printf("%X ", ch);
        i++;
    }
    printf("\n");
    fclose(fp);

    fp = fopen("14-06_apple.txt", "rb");
    for (j = 0; j <= i; j++) {
        count = fread((void*)&str[j], sizeof(char), 1, fp);
        if (count < 1) {
            fprintf(stderr, "Error writing a character.\n");
            exit(1);
        }
        printf("%X ", str[j]);
    }
    printf("\n");

    fclose(fp);
    return 0;
}
