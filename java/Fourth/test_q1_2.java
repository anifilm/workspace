/*
Q1 operator 값이 +, -, *, / 인 경우에 사칙 연산을 수행하는 프로그램을
if-else 문과 swithch-case 문을 사용해 작성해 보세요.
*/

public class test_q1_2 {

    public static void main(String args[]) {

        int num1 = 10;
        int num2 = 2;
        char operator = '/';

        int sum = 0;

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
        System.out.println( );
    }
}