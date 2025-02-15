/*
Q1
operator 값이 +, -, *, / 인 경우에 사칙 연산을 수행하는 프로그램을
if-else 문과 swithch-case 문을 사용해 작성해 보세요.
 */
package chap04.exercise;

public class Q1_SwitchCase {
    public static void main(String args[]) {

        int num1 = 10;
        int num2 = 2;
        int sum;
        char operator = '/';

        switch (operator) {
            case '+':
                sum = num1 + num2;
                break;
            case '-':
                sum = num1 - num2;
                break;
            case '*':
               sum = num1 * num2;
               break;
            case '/':
                sum = num1 / num2;
                break;
            default:
                System.out.print("연산자 오류 입니다.");
                return;
        }

        System.out.print(num1);
        System.out.print(" " + operator + " ");
        System.out.print(num2 + " = " + sum);
        System.out.println();
    }
}
