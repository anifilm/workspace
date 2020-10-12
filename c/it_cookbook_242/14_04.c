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

    FILE *dest = fopen("14_04_student.bin", "wb");
    if (dest == NULL) {
        fprintf(stderr, "Error opening output file.\n");
        exit(1);
    }

    for (i = 0; i < MAX; i++) {
        printf("Enter id and name.\n");
        scanf("%d %[^\n]s", &(arr[i].id), arr[i].name);
    }

    for (i = 0; i < MAX; i++) {
        count = fwrite((void *)&arr[i], sizeof(studentType), 1, dest);
        if (count < 1) {
            fprintf(stderr, "Error while writing a structure.\n");
            exit(1);
        }
    }

    fclose(dest);
    return 0;
}
