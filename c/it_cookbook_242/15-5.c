#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[20];
    char id[20];
};

int compare_int(const void* a, const void* b) {
    return (*(int *)a - *(int*)b);
}

int compare_string(const void* a, const void* b) {
    return (strcmp(((struct student*)a)->name, ((struct student*)b)->name));
}

int main() {

    int* np;
    struct student* sp;
    int i, num;
    const int max = 3;
    char name[20], id[20];

    np = (int*)malloc(sizeof(int) * max);
    for (i = 0; i < max; i++) {
        printf("Enter integers.\n");
        scanf("%d", &num);
        np[i] = num;
    }
    qsort(np, max, sizeof(int), compare_int);
    printf("\nOn sorting the numbers we get.\n");
    for (i = 0; i < max; i++)
        printf("%d ", np[i]);
    printf("\n\n");

    sp = (struct student*)malloc(sizeof(struct student) * max);
    for (i = 0; i < max; i++) {
        printf("Enter name and age.\n");
        scanf("%s %s", name, id);
        strcpy(sp[i].name, name);
        strcpy(sp[i].id, id);
        while (getchar() != '\n');
    }

    qsort(sp, max, sizeof(struct student), compare_string);
    printf("\nOn sorting the strings, we get.\n");
    for (i = 0; i < max; i++) {
        printf("%s %s", sp[i].name, sp[i].id);
        printf("\n");
    }

    return 0;
}
