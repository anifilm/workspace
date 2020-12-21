// 배열을 초기화할 때 주의 사항
#include <iostream>

using namespace std;

int main() {

/* new로 배열을 동적 할당받을 때 다음과 같이 생성자를 통해 직접 '초기값'을 지정할 수 없다. */
//  int* pArray = new int[10](20);  // 구문 오류, 배열의 초기화는 불가
//  int* pArray = new int(20)[10];  // 구문 오류,

/* 하지만 다음과 같이 초기값을 지정할 수 있다. */
    int* pArray = new int[4] {1, 2, 3, 4};      // 1, 2, 3, 4로 초기화된 정수 배열 생성

/* 동적 배열은 명시적으로 길이를 설정해 선언해야 한다. */
    int  fixedArray1[] = {1, 2, 3};             // 정적 배열은 길이를 생략 할 수 있다.
    char fixedArray2[] = {"Hello, wordl!"};     // 정적 배열은 길이를 생략 할 수 있다.

//  int* dynamicArray1 = new int[] {1, 2, 3};   // 동적 배열은 배열의 길이를 생략할 수 없다. (허용하지 않음)
    int* dynamicArray2 = new int[3] {1, 2, 3};  // 동적 배열은 배열의 길이를 반드시 명시해야만 한다.

/* 주의사항: 동적 배열에는 C 스타일 문자열을 사용할 수 없다. */
//  char* array = new char[14] {"Hello, world!"};

    return 0;
}

/*

동적 배열의 사이즈 구하기

int* p = new int[5];
int size = _msize(p) / sizeof(*p);

*/
