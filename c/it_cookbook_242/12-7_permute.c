#include <stdio.h>
#include <string.h>

void swap(char*, char*);
void permute(char*, int, int);

int main() {

    char str[] = "abc";
    permute(str, 0, strlen(str) - 1);

    return 0;
}

void swap(char* x, char* y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char* s, int left, int right) {
    int i;
    if (left == right)
        printf("%s\n", s);
    else {
        for (i = left; i <= right; i++) {
            swap(s + left, s + i);
            permute(s, left + 1, right);
            swap(s + left, s + i);
        }
    }
}
