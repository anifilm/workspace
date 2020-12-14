/* 문제 23-2 [다양한 형태의 구조체 정의]
좌 상단의 x, y 좌표가 [0, 0], 우 하단의 x, y 좌표가 [100, 100]인 좌표 평면상의
직사각형 정보를 표현하기 위한 구조체 Rectangle을 정의하되, 다음 구조체를 기반으로
정의해 보자.
  typedef struct point {
      int xpos;
      int ypos;
  } Point;

그리고 Ractangle 구조체 변수를 인자로 전달받아서 해당 직사각형의 넓이를 계산해서
출력하는 함수와 직사각형을 이루는 네 점의 좌표 정보를 출력하는 함수를 각각 정의해 보자.
단, 좌표 평면상에서 직사각형을 표현하기 위해서 필요한 점의 갯수는 4개가 아닌 2개이니,
직사각형을 의미하는 Ractangle 변수 내에는 두 점의 정보만 존재해야 한다.
*/
#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

typedef struct rectangle {
    Point l_upper;  // 좌 상단
    Point r_lower;  // 우 하단
} Rectangle;

void ShowRectangleArea(Rectangle* rptr) {
    int result = (rptr->r_lower.xpos - rptr->l_upper.xpos) * (rptr->r_lower.ypos - rptr->l_upper.ypos);
    printf("넓이: %d\n", result);

}

void ShowRectangleInfo(Rectangle* rptr) {
    printf("좌 상단: [%d, %d]\n", rptr->l_upper.xpos, rptr->l_upper.ypos);
    printf("우 하단: [%d, %d]\n", rptr->r_lower.xpos, rptr->r_lower.ypos);
}


int main() {

    Rectangle rec = {{0, 0}, {100, 100}};

    ShowRectangleArea(&rec);
    ShowRectangleInfo(&rec);

    Rectangle rec2 = {{1, 1}, {4, 4}};
    Rectangle rec3 = {{0, 0}, {7, 5}};

    ShowRectangleArea(&rec2);
    ShowRectangleInfo(&rec2);

    ShowRectangleArea(&rec3);
    ShowRectangleInfo(&rec3);

    return 0;
}
