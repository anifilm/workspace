// 02 점 p(x1, y1)와 점 q(x2, y2)의 좌표를 입력받아 두 점 사이의 거리를 출력하는 프로그램을 작성
// 하라. 단, x1, y1, x2, y2는 double로 선언해야 한다.
// 힌트 두 점 사이의 거리는 (x2 - x1)의 제곱에 (y2 - y1)의 제곱을 더한 후에 루트를 씌워 제곱근을
// 구해야 한다. 제곱근을 구하는 함수인 sqrt(square root) 함수를 불러다 쓰려면 #include <math.h>라는
// 지시어를 추가해야 한다. 이 함수는 double sqrt(double n); 로 선언되어 있으므로 distance = sqrt(n);
// 라고 하면 n의 제곱근이 distance에 대입된다.
#include <stdio.h>
#include <math.h>

int main() {

    double x1, x2, y1, y2, distance;

    printf("Enter the coordinates of point p: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of point q: ");
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0));
    printf("Distance between the points is %lf\n", distance);

    return 0;
}
