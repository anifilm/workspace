#include <stdio.h>
#include <math.h>        // pow, sqrt 함수가 선언된 헤더 파일

struct Point2D {         // 구조체 정의
    int x;
    int y;
};

int main() {

    struct Point2D p1;    // 포인트1
    struct Point2D p2;    // 포인트2

    // 포인트1의 위치
    p1.x = 30;
    p1.y = 20;

    // 포인트2의 위치
    p2.x = 60;
    p2.y = 50;

    int a = p2.x - p1.x;    // 선 a의 길이
    int b = p2.y - p1.y;    // 선 b의 길이

    // a² + b² = c² (피타고라스의 정리)
    // c = √ a² + b²
    double c = sqrt(pow(a, 2) + pow(b, 2));     // c = √ a² + b² 의 값을 구함

    printf("%f\n", c);

    return 0;
}
