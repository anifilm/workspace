// 07 컴퓨터에 long long 타입의 크기를 초과하는 정수를 저장할 수는 없다. 이에 대한 대안이 숫자를
// 자릿수별로 나누어 배열에 넣는 것이다. 예를 들어, 567이라면 arr[0] = 5; arr[1] = 6; arr[2] = 7;
// 로 저장할 수 있다. 그런데 암호화 과정에서 엄청나게 큰 수에 대한 모듈로 연산이 필요할 때가 많다.
// 이 연산이 특이한 점은 덧셈과 곱셈에 대해 분배 법칙이 성립한다는 것이다.
// 즉, (a + b) % m = (a % m) + (a % m), (a * b) % m = (a % m) * (b % m) 이다. 예를 들어,
// 968 % 7 = 900 % 7 + 60 % 7 + 8 % 7이라 할 수 있다. 여기서 900 % 7 = ((7 + 2) * 100) % 7
// = (2 * 100) % 7 = ((9 % 7) * 100) % 7 이다. 따라서 968 % 7은 다음과 같이 루프를 돌면서
// 계산할 수 있다.
// remainder = 9 % 7 = 2
// remainder = (2 * 10 + 6) % 7 = 5
// remainder = (5 * 10 + 8) % 7 = 2 (Answer)
// main을 참고로 다음 함수를 채워 이 프로그램을 완성하라.
// > Enter a big positive integer.
// > 12345123451234512345 ([Enter])
// > Enter a modulus number.
// > 7 ([Enter])
// > The result of modulo operation is 1
#include <stdio.h>
#include <stdlib.h>

int modulo(int a[], const int m, const int size);

int main() {

    int i, mod, arr[1000];
    char ch;

    printf("Enter a big positive integer.\n");
    i = 0;
    while ((ch = getchar()) != '\n') {
        arr[i] = atoi(&ch);     // must include <stdlib.h>
        i++;                    // number of array elements
    }
    printf("Enter a modulus number.\n");
    scanf("%d", &mod);
    printf("The result of modulo operation is %d\n", modulo(arr, mod, i));

    return 0;
}

int modulo(int a[], const int m, const int size) {
    int i, remainder;
    remainder = a[0] % m;
    for (i = 1; i < size; i++)
        remainder = (remainder * 10 + a[i]) % m;
    return remainder;
}
