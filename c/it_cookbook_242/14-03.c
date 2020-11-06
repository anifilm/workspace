#include <stdio.h>
#include <stdlib.h>

int main() {

    char buff[100];
    FILE* src = fopen("14-03_from.txt", "rt");
    FILE* dest = fopen("14-03_to.txt", "wt");

    if (src == NULL || dest == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while (fgets(buff, sizeof(buff), src) != NULL)
        fputs(buff, dest);

    if (feof(src))
        printf("Copy complete!\n");
    else
        printf("Error while copying.\n");

    fclose(src);
    fclose(dest);
    return 0;
}
