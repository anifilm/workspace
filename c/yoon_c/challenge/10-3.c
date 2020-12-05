/* 도전! 프로그래밍 1
도전 3
두 개의 정수를 입력 받아서 최대 공약수(GCD)를 구하는 프로그램을 작성해 보자.

[실행의 예]
두 개의 정수를 입력: 6 9
두 수의 최대 공약수: 3

[도전3의 해결을 위한 GUIDE]
정수 num1과 num2의 최대 공약수는 num1이나 num2보다 클 수 없다. 그리고 num1과 num2의
최대 공약수로 num1 또는 num2를 나누면 나머지가 0이 된다. 이 두 가지 특성을 이용하면
최대 공약수를 쉽게 구할 수 있다. 참고로 여유가 된다면 인터넷에서 '유클리드 호제법'
이라는 것을 조사해보자 그리고 이를 기반으로 문제의 해결을 한번 더 시도하기 바란다.
*/
#include <stdio.h>

int GCD(int n1, int n2) {
    int i, result, n3 = n2;
    if (n1 > n2) n3 = n1;
    for (i = 1; i < n3; i++) {
        if (n1 % i == 0 && n2 % i == 0)
            result = i;
    }
    return result;
}

// 유클리드 호제법 (재귀적 구현) -> test value (1071, 1029)
int EuclidGCD(int n1, int n2) {
    /*
    int result;
    result = n1 % n2;
    if (result == 0)
        return n2;
    else
        return EuclidGCD(n2, result);
    */
    if (n2 == 0) return n1;
    return EuclidGCD(n2, n1 % n2);
}

// 유클리드 호제법 (삼항 연산자를 통한 재귀적 구현)
int EuclidGCD2(int n1, int n2) {
    return n2 ? EuclidGCD2(n2, n1 % n2) : n1;
}

// 유클리드 호제법 (while문을 사용한 구현)
int EuclidGCD3(int n1, int n2) {
    int result;
    while(n2) {
        result = n1 % n2;
        n1 = n2;
        n2 = result;
    }
    return n1;
}

int main() {

    int num1, num2;

    printf("두 개의 정수를 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("두 수의 최대 공약수 (일반 함수 구현): %d\n", GCD(num1, num2));
    printf("두 수의 최대 공약수 (유클리드 호제법1): %d\n", EuclidGCD(num1, num2));
    printf("두 수의 최대 공약수 (유클리드 호제법2): %d\n", EuclidGCD2(num1, num2));
    printf("두 수의 최대 공약수 (유클리드 호제법3): %d\n", EuclidGCD3(num1, num2));

    return 0;
}
