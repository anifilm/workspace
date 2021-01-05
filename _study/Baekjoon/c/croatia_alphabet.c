/*
2941번 크로아티아 알파벳

문제
예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.

크로아티아 알파벳	변경
č	c=
ć	c-
dž	dz=
đ	d-
lj	lj
nj	nj
š	s=
ž	z=
예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, š, nj, a, k)로 이루어져 있다. 단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

dž는 무조건 하나의 알파벳으로 쓰이고, d와 ž가 분리된 것으로 보지 않는다. lj와 nj도 마찬가지이다. 위 목록에 없는 알파벳은 한 글자씩 센다.

입력
첫째 줄에 최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다.

단어는 크로아티아 알파벳으로 이루어져 있다. 문제 설명의 표에 나와있는 알파벳은 변경된 형태로 입력된다.

출력
입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

예제 입력 1
ljes=njak
예제 출력 1
6

예제 입력 2
ddz=z=
예제 출력 2
3

예제 입력 3
nljj
예제 출력 3
3

예제 입력 4
c=c=
예제 출력 4
2

*/
#include <stdio.h>
#include <string.h>

int countCroatiaAlphabet(const char* str, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == 'c' && str[i+1] == '=') {
            count++; i++;
        }
        else if (str[i] == 'c' && str[i+1] == '-') {
            count++; i++;
        }
        else if (str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=') {
            count++; i += 2;
        }
        else if (str[i] == 'd' && str[i+1] == '-') {
            count++; i++;
        }
        else if (str[i] == 'l' && str[i+1] == 'j') {
            count++; i++;
        }
        else if (str[i] == 'n' && str[i+1] == 'j') {
            count++; i++;
        }
        else if (str[i] == 's' && str[i+1] == '=') {
            count++; i++;
        }
        else if (str[i] == 'z' && str[i+1] == '=') {
            count++; i++;
        }
        else
            count++;
    }
    return count;
}

int main() {
    char str[101];
    scanf("%s", str);
    int count = countCroatiaAlphabet(str, strlen(str));
    printf("%d", count);
    return 0;
}
