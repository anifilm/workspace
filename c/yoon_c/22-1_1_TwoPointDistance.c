// 구조체 변수의 선언과 접근
#include <stdio.h>
#include <math.h>

struct point {  // 구조체 point의 정의
    int xpos;
    int ypos;
};

int main() {

    struct point pos1, pos2;
    double distance;

    printf("point1 pos: ");
    scanf("%d %d", &pos1.xpos, &pos1.ypos);

    printf("point2 pos: ");
    scanf("%d %d", &pos2.xpos, &pos2.ypos);

    // 두 점간의 거리 계산 공식
    distance = sqrt(pow((pos1.xpos - pos2.xpos), 2) + pow((pos1.ypos - pos2.ypos), 2));

    printf("두 점의 거리는 %lf 입니다.\n", distance);

    return 0;
}

/*

math.h에 선언되어 있는 함수

double sqrt(double x);          // 제곱근 x의 값을 반환 (루트 x)
double pow(double x, double y); // x ^ y 의 값을 반환 (^제곱)

int abs(int x);     // x의 절대값을 반환
long labs(long x);
double fabs(double x);

*/
