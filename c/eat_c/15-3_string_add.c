#include <stdio.h>

char stradd(char *dest, char *src);

int main() {

    char str1[100] = "Hello, my name is ";
    char str2[] = "Lim";

	printf("합치기 이전: %s\n", str1);

    stradd(str1, str2);

    printf("합치기 이후: %s\n", str1);

	return 0;
}

char stradd(char *dest, char *src) {
    while (*dest) {
        dest++;
    }

	while (*src) {
        *dest = *src;
        src++;
        dest++;
	}

    *dest = '\0';

	return 1;
}
