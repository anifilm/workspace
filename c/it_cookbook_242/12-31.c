#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

int main() {

    char *wish_list[MAX];
    char temp[100];
    int i = 0, j;

    while (1) {
        printf("Enter your wishes.\n");
        gets(temp);
        if (strcmp(temp, "quit") == 0)
            break;
        wish_list[i] = (char *)malloc(sizeof(char) * (strlen(temp) + 1));
        if (wish_list[i] == NULL) {
            fprintf(stderr, "No more memory.\n");
            exit(1);
        }
        strcpy(wish_list[i], temp);
        i++;
    }
    printf("\n");
    for (j = 0; j < i; j++)
        puts(wish_list[j]);

    for (j = 0; j < i; j++) {
        free(wish_list[j]);
        wish_list[j] = NULL;
    }

    return 0;
}
