/* 07
scanf 문이 제대로 실행될 경우 읽어들인 변수의 개수를 돌려준다. 예를 들어, scanf("%c %d %lf", &sex, &age, &weight);
가 제대로 실행되면 3을 돌려준다. 이 scanf가 제대로 실행되면 각각의 변수 값을 출력하고 그렇지 않을 경우 오류 메시지를
출력하는 프로그램을 if 문을 써서 작성하라.
  > Enter sex, age, and weight.
  > F 24 Soowon ([Enter])
  > Error in input format.
*/
#include <stdio.h>

int main() {

    char sex;
    int age, count;
    double weight;

    printf("Enter sex, age, and weight.\n");
    count = scanf("%c %d %lf", &sex, &age, &weight);    // 정상 입력시 3을 리턴함

    if (count == 3)
        printf("sex : %c, age: %d, weight: %.2lf", sex, age, weight);
    else
        printf("Error in input format.");

    return 0;
}
