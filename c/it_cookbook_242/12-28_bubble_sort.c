#include <stdio.h>
#include <string.h>
#define FRIENDS 3
#define MAX 10

void swap(char *p, char *q) {
    char temp[MAX];
    strcpy(temp, p);
    strcpy(p, q);
    strcpy(q, temp);
}

void bubbple_sort(char arr[FRIENDS][MAX]) {
    int pass, current, sorted = 0;
    for (pass = 1; (pass < FRIENDS) && (!sorted); pass++) {
        sorted = 1;
        for (current = 0; current < (FRIENDS - pass); current++) {
            if (strcmp(arr[current], arr[current + 1]) > 0)
                swap(arr[current], arr[current + 1]);
        }
    }
}

void print_array(char arr[FRIENDS][MAX]) {
    int i;
    printf("\n");
    for (i = 0; i < FRIENDS; i++)
        puts(arr[i]);
}

int main() {

    char name[MAX];
    char list[FRIENDS][MAX];
    int i;

    for (i = 0; i < FRIENDS; i++) {
        printf("Enter your friend's name.\n");
        gets(name);
        strcpy(list[i], name);
    }
    bubbple_sort(list);
    print_array(list);

    return 0;
}
