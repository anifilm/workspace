#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main() {

    char in_file[MAX];
    int ch, i;
    long length;
    FILE* fp;

    fprintf(stdout, "Enter input file name.\n");
    scanf("%s", in_file);
    fp = fopen(in_file, "rb");
    if (fp == NULL) {
        fprintf(stderr, "Error opening file.\n");
        exit(1);
    }

    fseek(fp, 0L, SEEK_END);
    length = ftell(fp);

    fseek(fp, -1L, SEEK_CUR);
    for (i = 0; i < length; i++) {
        ch = fgetc(fp);
        putchar(ch);
        fseek(fp, -2L, SEEK_CUR);
    }
    printf("\n");

    fclose(fp);
    return 0;
}
