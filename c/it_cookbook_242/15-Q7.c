// 07 배열에 원하는 작업을 가하는 데에도 함수 포인터를 사용할 수 있다. 아래 예에서 for_each
// _element 함수는 루프를 돌면서 배열의 각 요소에 대해 인자로 전달된 함수를 가하는 역할을
// 한다. 이런 종료의 함수를 map(mapping, 사상) 함수라 부른다. 어떤 함수가 전달되든 그 함수
// 를 적용하기 때문에 map 함수는 범용성이 높다고 할 수 있다. 아래 프로그램을 완성하고 실행
// 해 보라.
#include <stdio.h>

// 이 파일 내부에서만 사용할 함수이기 때문에 static으로 선언
static void increment(int *value) {
    (*value)++;  // 참조 호출에 의해 배열 원본 요소를 1만큼 증가시킴
}
static void decrement(int *value) {
    (*value)--;  // 참조 호출에 의해 배열 원본 요소를 1만큼 감소시킴
}

void for_each_element(int v[], int len, void (*fp)(int*)) {
    int i;                      // 이 함수는 단순히 배열 각 요소에 대해
    for (i = 0; i < len; i++)   // 전달된 함수를 가하는 역할을 수행
        fp(&v[i]);              // 전달된 어떤 함수라도 실행하기 때문에 범용
}

int main() {

    int i, vector[] = {1, 2, 3, 4};

    for_each_element(vector, 4, increment);
    for (i = 0; i < 4; i++)
        printf("%d ", vector[i]);
    for_each_element(vector, 4, decrement);
    for (i = 0; i < 4; i++)
        printf("%d ", vector[i]);

    return 0;
}
