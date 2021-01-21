/* 03
스택 프레임 자체도 하나의 커다란 구조체 변수다. 스택 프레임의 구성 요소를 중심으로 이 변수의 타입을 추상적으로
정의하라. 단, 지역변수나 매개 변수는 각각 하나이며 모든 요소의 타입은 int라고 가정한다.
*/
#define MAX 10

struct stack {
    int top;
    int data[MAX];
};
typedef struct stack stackType;
