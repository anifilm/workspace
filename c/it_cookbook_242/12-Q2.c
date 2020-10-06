// 02 gets로 문장을 입력받아 정적 배열에 저장한 후 첫번째는 puts로, 두번째는 printf("%s")로,
// 세번째는 fprintf(%s)로, 네번째는 printf("%c")로 출력하는 프로그램을 작성하라.
#include <stdio.h>
#include <string.h>

int main() {

    char string[100];
    int i;

    printf("Enter input string.\n");
    gets(string);

    printf("\nfirst -> puts: ");
    puts(string);

    printf("second -> printf(\"\%%s\"): ");
    printf("%s\n", string);

    printf("third -> fprintf(\"\%%s\"): ");
    fprintf(stdout, "%s\n", string);

    printf("forth -> printf(\"\%%c\"): ");
    for (i = 0; i < (int)strlen(string); i++)
        printf("%c", string[i]);
    printf("\n");

    return 0;
}
