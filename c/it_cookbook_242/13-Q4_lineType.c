// 04 컴퓨터 그래픽스에서 2차원 점의 좌표는 화소의 x, y 좌표로 표시할 수 있다. 따라서 점을
// 표시하기 위한 데이터 타입을 다음과 같이 선언할 수 있다.
/*
    typedef struct {
        int x;
        int y;
    } pointType;
*/
// 그런데 선은 시작점(start point)과 끝점(end point)의 좌표, 색상(color), 두께(width),
// 선 종류(kind) 등의 정보로 나타낼 수 있다. 시작점과 끝점의 위치는 pointType의 변수로
// 나타낼 수 있다. 색상은 R,G,B값(각각 8비트라면 0부터 255까지)을 저장한 배열 변수로 나타
// 낼 수 있다. 두께는 0부터 10까지의 정수 변수로 나타낼 수 있다. 선 종류가 실전(solid)인지
// 점선(dotted)인지는 나열형 변수로 나타낼 수 있다. 이 방법을 써서 구조체의 타입을 선언하라.
#include <stdio.h>

typedef struct {
    int x;
    int y;
} pointType;

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
} colorType;

typedef enum {
    solid, dotted
} lineKind;

typedef struct {
    pointType sp;
    pointType ep;
    colorType color;
    int width;
    lineKind kind;
} lineType;

int main() {

    return 0;
}
