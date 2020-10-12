#include <stdio.h>
#include <stdlib.h>

int main() {

    int ch;
    FILE *src = fopen("14_01_from.txt", "rt");
    FILE *dest = fopen("14_01_to.txt", "wt");

    if (src == NULL || dest == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    if (feof(src))
        printf("Copy complete!\n");
    else
        printf("Error while copying.\n");

    fclose(src);
    fclose(dest);
    return 0;
}
