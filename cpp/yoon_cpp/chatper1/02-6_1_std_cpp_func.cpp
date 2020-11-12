// C++에서 C언어의 표준함수 호출하기
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main() {

    char str1[] = "Result";
    char str2[30];

    strcpy(str2, str1);
    printf("%s: %f\n", str1, sin(0.14));
    printf("%s: %f\n", str2, abs(-1.25));

    return 0;
}
