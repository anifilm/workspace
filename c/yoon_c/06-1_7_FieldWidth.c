// 필드 폭을 지정하여 정돈된 출력 보이기
#include <stdio.h>

int main() {

    printf("[%-14s] [%16s] [%5s] \n", "Name", "Department", "Grade");
    printf("[%-14s] [%16s] [%5d] \n", "Chaeyoung Lim", "Electronics", 3);
    printf("[%-14s] [%16s] [%5d] \n", "Heunggyu Jung", "Computer Science", 2);
    printf("[%-14s] [%16s] [%5d] \n", "Hawngil Seo", "Education", 4);

    return 0;
}

/*

%-d     왼쪽으로 정렬 (기본갑은 오른쪽 정렬)
%+d     부호를 출력 (양수면 +, 음수면 -를 출력)
%10d    10자리를 만든 후, 오른쪽 정렬로 출력 (-를 붙이면 왼쪽으로 정렬)
%010d   10자리를 만든 후, 공백을 0으로 채운다.

*/
