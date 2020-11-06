#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE* fp;
    char str[20] = "apple pie";

    fp = fopen("14-07_rw.txt", "w+b");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    } else {
        fputs(str, fp);
        fflush(fp);

        rewind(fp);
        fgets(str, 4, fp);
        puts(str);

        fclose(fp);
        return 0;
    }

}
