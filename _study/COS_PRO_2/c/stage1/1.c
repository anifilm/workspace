#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_len) {
    int* answer;
    answer = (int*)malloc(sizeof(int)*6);
    for (int i = 0; i < shirt_size_len; i++) {
        char* tmp = shirt_size[i];
        if (strcmp(tmp, "XS") == 0) {
            answer[0]++;
            continue;
        }
        else if (strcmp(tmp, "S") == 0) {
            answer[1]++;
            continue;
        }
        else if (strcmp(tmp, "M") == 0) {
            answer[2]++;
            continue;
        }
        else if (strcmp(tmp, "L") == 0) {
            answer[3]++;
            continue;
        }
        else if (strcmp(tmp, "XL") == 0) {
            answer[4]++;
            continue;
        }
        else if (strcmp(tmp, "XXL") == 0) {
            answer[5]++;
            continue;
        }
    }
    return answer;
}

int main() {
    char* shirt_size[] = {"XS", "S", "L", "L", "XL", "S"};
    int shirt_size_len = 6;
    int* ret = solution(shirt_size, shirt_size_len);

    printf("solution 함수의 반환 값은 {");
    for(int i = 0; i < 6; i++){
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}
