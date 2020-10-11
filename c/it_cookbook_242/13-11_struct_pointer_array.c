#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

struct word {
    char name[20];      // 단어명
    char *meaning;      // 단어뜻
};

int main() {

    struct word *arr[MAX];
    char temp[200];
    int i = 0, j;

    while (1) {
        printf("Enter a word.\n");
        gets(temp);
        if (strcmp(temp, "quit") == 0) break;
        arr[i] = (struct word *)malloc(sizeof(struct word));
        if (arr[i] == NULL)
            exit(1);
        strcpy(arr[i]->name, temp);
        printf("Enter meaning of the word.\n");
        gets(temp);
        arr[i]->meaning = (char *)malloc(sizeof(char) * (strlen(temp) + 1));
        if (arr[i]->meaning == NULL)
            exit(1);
        strcpy(arr[i]->meaning, temp);
        i++;
        printf("\n");
    }

    printf("\nThe dictionary has \n");
    for (j = 0; j < i; j++) {
        puts(arr[j]->name);
        puts(arr[j]->meaning);
    }

    for (j = 0; j < i; j++) {
        free(arr[j]->meaning);
        arr[j]->meaning = NULL;
    }

    for (j = 0; j < i; j++) {
        free(arr[j]);
        arr[j] = NULL;
    }

    return 0;
}
