/* 문제 14-2 [const 선언에 대한 추가적인 이해]
문제 1
아래에 정의된 함수를 보자. 인자로 전달되는 정보를 참조하여 int형 배열 요소 전체를
출력하는 함수이다.
  함수 생략...

위 함수의 매개변수 선언에서 매개변수 arr을 대상으로 const 선언을 한 이유가 무엇이
겠는가? 이 함수의 정의한 사람의 의로를 이야기해 보자.
*/
#include <stdio.h>

void ShowAllData(const int* arr, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};

    ShowAllData(arr, sizeof(arr) / sizeof(int));

    return 0;
}

/*

매개변수로 전달된 배열 arr의 값을 변경할 수 없도록 const 선언

*/
