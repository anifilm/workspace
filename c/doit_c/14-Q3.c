// 사용자에 세 개의 정수 값을 입력 받아서 평균 값을 출력하는 프로그램을 작성하세요.
// 입력은 scanf 함수를 사용하고 입력 실수에 대한 예외 처리는 안 해도 됩니다.
#include <stdio.h>

int main() {

    char name[10];
    float weight;
    float height;
    char blood_type;
    int heart_rate;

    printf("사용자 정보 입력: ");
    scanf("%s %f %f %c %d", &name, &weight, &height, &blood_type, &heart_rate);

    printf("이름: %s, 몸무게: %.1fkg, 키: %.1fcm, 혈액형: %c형, 심수: %d회", name, weight, height, blood_type, heart_rate);

    return 0;
}