// 03 이미 계산된 값을 재활용하는 알고리즘을 동적 프로그래밍(Dynamic Programming)이라
// 부른다. Fibonacci 수열을 재귀 호출로 구현할 경우에 이미 계산한 값을 또 다시 계산하면
// 실행 시간이 길어진다. 따라서 피보나치 값을 저장하는 배열 value[] 외에 이미 계산이 되어
// 있는지를 나타내는 별도의 배열 found[]를 생각해 볼 수 있다. 일단 found 배열의 모든 값을
// 0(false)으로 초기한 다음 value[i]가 1이면 이미 계산된 value[i]를 리턴할 수 있다.
// 그렇지 않으면 재귀 호출에 의해 value[i]를 채우는 동시에 found[i] 값을 1로 만들어야
// 한다. 다음 밑줄 친 부분을 채워 이 프로그램을 완성하라.
// > Enter a number:
// > 8 ([Enter])
// > 8th Fibonacci number is 21
#include <stdio.h>

int fibo(int val[], int fnd[], int n) {
    int temp;
    if (n < 3)          // 이미 알려져 있으면,
        return 1;       // 곧바로 값을 리턴
    else {              // 그렇지 않으면,
        temp = (fibo(val, fnd, n - 1) + fibo(val, fnd, n - 2));
                        // 재귀 호출로 직전 두 항을 더해 temp에 대입
        val[n] = temp;  // temp 값을 val 배열에 대입
        fnd[n] = 1;     // fnd 배열의 값을 바꿈
        return temp;    // temp를 리턴
    }
}

int main() {

    int i, num, value[100], found[100];
    printf("Enter a number: ");
    scanf("%d", &num);       // 입력 숫자를 num에 저장
    for (i = 0; i < 100; i++) found[i] = 0; // found 배열을 초기화
    value[0] = value[1] = 1; // value 배열의 처음 두 항을 초기화
    found[0] = found[1] = 1; // found 배열의 처음 두 항을 초기화
    printf("%dth Fibonacci number is %d\n", num, fibo(value, found, num)) ;

    return 0;
}
