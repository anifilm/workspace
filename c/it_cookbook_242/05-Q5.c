/* 05
점 p의 정수형 좌표 값 x, y를 입력받아 그 점이 속한 4분면(quadrant)을 출력하는 프로그램을 작성하라.
단, 좌표축 경계선에 위치한 점은 입력하지 않기로 한다.
  > Enter the x, y coordinates of the point:
  > 4 -5 ([Enter])
  > It's in the 4th quadrant.
*/
#include <stdio.h>

int main() {

    int x, y;

    printf("Enter the x, y coordinates of the point: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("It's in the 1st quadrant.\n");
    else if (x < 0 && y > 0)
        printf("It's in the 2nd quadrant.\n");
    else if (x < 0 && y < 0)
        printf("It's in the 3rd quadrant.\n");
    else
        printf("It's in the 4th quadrant.\n");

    return 0;
}
