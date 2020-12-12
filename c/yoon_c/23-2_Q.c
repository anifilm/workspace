/* 문제 23-1 [구조체 변수의 연산]
다음 구조체의 두 변수를 대상으로 저장된 값을 서로 바꿔주는 함수를 정의하고 이를 호출
하는 예제를 작성해 보자.
  typedef struct point {
      int xpos;
      int ypos;
  } Point;

예를 들어서 다음과 같이 두 개의 구조체 변수가 선언된 상태에서,
  Point pos1 = {2, 4};
  Point pos2 = {5, 7};

이 두 구조체 변수를 대상으로, 혹은 두 구조체 변수의 주소 값을 대상으로 SwapPoint라는
이름의 함수를 호출하면 pos1의 xpos, ypos에는 각각 5와 7이, 그리고 pos2의 xpos, ypos
에는 각각 2와 4가 저장되어야 한다.
*/
#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point* pos1, Point* pos2) {
    Point temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
}

int main() {

    Point pos1 = {5, 6};
    Point pos2 = {2, 9};

    printf("before swap: [%d, %d] [%d, %d]\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

    SwapPoint(&pos1, &pos2);
    printf("after swap: [%d, %d] [%d, %d]\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

    return 0;
}
