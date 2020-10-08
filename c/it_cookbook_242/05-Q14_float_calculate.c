// 14 계산기 프로그램을 수정하여 프로그램이 시작하면 부동 소수 연산인지 정수 연산인지 물어본 후에
// 결과를 출력하는 프로그램을 작성하라.
// 힌트 부동 소수 버전의 float_calualte와 정수 버전의 int_calculate라는 두 새의 함수를 작성하고
// 어떤 계산을 원하는지에 따라 서로 다른 함수를 호출해야 한다.
// > Enter 1 for floating point calculation, 2 for integer calculation.
// > 2 ([Enter])
// > Enter an expression. For EXAMPLE, 2 + 5
// > 23 % 4 ([Enter])
// > 23 % 4 = 3
#include <stdio.h>

void float_calculate(double op1, char op, double op2) {
    switch (op) {
        case '+':
            printf("%.3f + %.3f = %.3f\n", op1, op2, op1 + op2);
            break;
        case '-':
            printf("%.3f - %.3f = %.3f\n", op1, op2, op1 - op2);
            break;
        case '*':
            printf("%.3f * %.3f = %.3f\n", op1, op2, op1 * op2);
            break;
        case '/':
            printf("%.3f / %.3f = %.3f\n", op1, op2, op1 / op2);
            break;
        default:
            printf("Not an allowable operator.\n");
            break;
    }
}

void int_calculate(int op1, char op, int op2) {
    switch (op) {
    case '+':
        printf("%d + %d = %d\n", op1, op2, op1 + op2);
        break;
    case '-':
        printf("%d - %d = %d\n", op1, op2, op1 - op2);
        break;
    case '*':
        printf("%d * %d = %d\n", op1, op2, op1 * op2);
        break;
    case '/':
        printf("%d / %d = %d\n", op1, op2, op1 / op2);
        break;
    case '%':
        printf("%d %% %d = %d\n", op1, op2, op1 % op2);
        break;
    default:
        printf("Not an allowable operator.\n");
        break;
    }
}

int main() {

    int my_calc_type, i_operand1, i_operand2;;
    char my_operator;
    double f_operand1, f_operand2;

    printf("Enter 1 for floating point calculation, 2 for integer calculation.\n");
    scanf("%d", &my_calc_type);

    if (my_calc_type == 1) {
        printf("Enter an expression. For EXAMPLE, 2.20 + 3.30\n");
        scanf("%lf %c %lf", &f_operand1, &my_operator, &f_operand2);
        float_calculate(f_operand1, my_operator, f_operand2);
    } else {
        printf("Enter an expression. For EXAMPLE, 2 + 3\n");
        scanf("%d %c %d", &i_operand1, &my_operator, &i_operand2);
        int_calculate(i_operand1, my_operator, i_operand2);
    }

    return 0;
}
