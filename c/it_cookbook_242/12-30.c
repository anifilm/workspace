#include <stdio.h>
#include <string.h>
#define MAX 10

int main() {

    char wish_list[MAX][100];
    char temp[100];
    int i = 0, j;

    while (1) {
        printf("Enter your wishes.\n");
        gets(temp);
        if (strcmp(temp, "quit") == 0)
            break;
        strcpy(wish_list[i], temp);
        i++;
    }
    printf("\n");
    for (j = 0; j < i; j++)
        puts(wish_list[j]);

    return 0;
}
