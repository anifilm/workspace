#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "ABC언어";
    wchar_t uni_str[] = L"ABC언어";

    printf("str: %s\n", str);
    wprintf(L"uni_str: %s\n", uni_str);

    printf("strlen(str) is %d\n", strlen(str));
    printf("wcslen(uni_str) is %d\n", wcslen(uni_str));

    printf("sizeof(str) is %d\n", sizeof(str));
    printf("sizeof(uni_str) is %d\n", sizeof(uni_str));

    return 0;
}
