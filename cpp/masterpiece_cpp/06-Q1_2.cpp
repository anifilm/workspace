/*
Q1
add() 함수를 호출하는 main() 함수는 다음과 같다.
  (main() 함수 생략...)

  (1) add() 함수를 중복 작성하고 프로그램을 완성하라.
  (2) 디폴트 매개 변수를 가진 하나의 add() 함수를 작성하고 프로그램을 완성하라.
*/
#include <iostream>

using namespace std;

/* (2) 디폴트 매개 변수를 가진 하나의 add() 함수를 작성하고 프로그램을 완성하라. */
int add(int arr1[], int size, int arr2[] = NULL) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result += arr1[i];
    }
    if (arr2 == NULL) return result;
    for (int i = 0; i < size; i++) {
        result += arr2[i];
    }
    return result;
}

int main() {

    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c = add(a, 5);  //배열 a의 정수를 모두 더한 값 반환
    int d = add(a, 5, b);   // 배열 a와 b의 정수를 모두 더한 값 반환
    cout << c << endl;  // 15 출력
    cout << d << endl;  // 55 출력

    return 0;
}
