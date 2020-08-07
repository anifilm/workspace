#include <stdio.h>
#include <float.h>      // 실수 자료형의 양수 최소값, 최대값이 정의된 헤더 파일

int main()
{
    float num1 = FLT_MIN;    // float의 양수 최소값
    float num2 = FLT_MAX;    // float의 양수 최대값

    // float의 양수 최소값을 100000000.0으로 나누면 아주 작은 수가 되면서 언더플로우 발생
    num1 = num1 / 100000000.0f;
    // float의 양수 최대값에 1000.0을 곱하면 저장할 수 있는 범위를 넘어서므로 오버플로우 발생
    num2 = num2 * 1000.0f;

    printf("float(min) num1: %e\n", num1);    // 0.000000e+00 (실수의 언더플로우는 0)
    printf("flaot(max) num2: %e\n", num2);    // inf          (실수의 오버플로우는 무한대가 된다)

    return 0;
}
