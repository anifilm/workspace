#include <stdio.h>
#include <stdlib.h>

int main() {

    int ch;
    FILE *src1 = fopen("14-Q3_first.txt", "rt");
    FILE *src2 = fopen("14-Q3_second.txt", "rt");
    FILE *dest = fopen("14-Q3_merge.txt", "wt");

    if (src1 == NULL || src2 == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while ((ch = fgetc(src1)) != EOF)
        fputc(ch, dest);
    fputc('\n', dest);
    while ((ch = fgetc(src2)) != EOF)
        fputc(ch, dest);

    if (feof(src1) && feof(src2))
        printf("Merge complete!\n");
    else
        printf("Error while merging.\n");

    fclose(src1);
    fclose(src2);
    fclose(dest);

    return 0;
}
