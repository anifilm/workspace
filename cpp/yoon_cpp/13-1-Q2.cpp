/* 문제 13-1 [함수 템플릿의 정의]
문제 2
다음은 int형 배열에 저장된 값을 모두 더해서 그 결과를 반환하는 기능의 함수이다.
  (함수 생략...)

이 함수를 템플릿으로 정의하여, 다양한 자료형의 배열을 대상으로 합을 계산하는 예제를 작성해 보자.
*/
#include <iostream>

using namespace std;

template <typename T>
T SumArray(T arr[], int len) {
    T sum = 0;
    for (int i = 0; i < len; i++)
        sum += arr[i];
    return sum;
}

int main() {

    int arr1[] = {1, 2, 3, 4, 5, 6};
    double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};

    printf("%d\n", SumArray(arr1, 6));
    printf("%lf\n", SumArray(arr2, 6));

    return 0;
}
