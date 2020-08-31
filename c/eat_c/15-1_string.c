// 문자열의 시작
#include <stdio.h>

int main() {

    char sentence_1[4] = {'P', 's', 'i', '\0'};
    char sentence_2[4] = {'P', 's', 'i', 0};
    // char sentence_3[4] = {'P', 's', 'i', (char)NULL};
    char sentence_4[4] = {"Psi"};

    printf("sentence_1: %s\n", sentence_1);   // %s 를 통해서 문자열을 출력한다.
    printf("sentence_2: %s\n", sentence_2);
    // printf("sentence_3: %s\n", sentence_3);
    printf("sentence_4: %s\n", sentence_4);

    return 0;
}
