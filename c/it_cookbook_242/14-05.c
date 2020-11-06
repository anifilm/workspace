#include <stdio.h>
#include <stdlib.h>
#define MAX 3

typedef struct {
    int id;
    char name[20];
} studentType;

int main() {

    int i, count;
    studentType arr[MAX];

    FILE* src;
    src = fopen("14-04_student.bin", "rb");
    if (src == NULL) {
        fprintf(stderr, "Error opening output file.\n");
        exit(1);
    }

    i = 0;
    while (fread((void*)&arr[i], sizeof(studentType), 1, src))
        i++;

    if (feof(src))
        printf("Reading complete!\n");
    else
        printf("Error while reading.\n");

    count = i;
    for (i = 0; i < count; i++)
        printf("id: %d, name: %s\n", arr[i].id, arr[i].name);

    fclose(src);
    return 0;
}
