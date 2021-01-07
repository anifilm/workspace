/*
Q12
사칙 연산을 입력받아 계산하는 프로그램을 작성하고자 한다. 연산자는 +, -, *, / 의 네 가지로 하고 피 연산자는 모두 실수로 한다. 피연산자와
연산자는 실행 사례와 같이 빈 칸으로 분리하여 입력한다. 0으로 나누기 시 "0으로 나눌 수 없습니다."를 출력하고 종료한다.
  (실행 결과 생략...)

  (1) 연산 식을 구분할 때 if-else 문을 이용하여 프로그램을 작성하라.
  (2) 연산 식을 구분할 때 switch 문을 이용하여 프로그램을 작성하라.

 */
package chap02.excercise;

import java.util.Scanner;

public class Q12_1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("연산 >> ");
        int num1 = scanner.nextInt();
        String op = scanner.next();
        int num2 = scanner.nextInt();
        int result;

        if (op.equals("+")) {
            result = num1 + num2;
            System.out.println(num1 + op + num2 + "의 계산 결과는 " + result);
        }
        else if (op.equals("-")) {
            result = num1 - num2;
            System.out.println(num1 + op + num2 + "의 계산 결과는 " + result);
        }
        else if (op.equals("*")) {
            result = num1 * num2;
            System.out.println(num1 + op + num2 + "의 계산 결과는 " + result);
        }
        else if (op.equals("/")) {
            if (num2 != 0) {
                result = num1 / num2;
                System.out.println(num1 + op + num2 + "의 계산 결과는 " + result);
            }
            else
                System.out.println("0으로 나눌 수 없습니다.");
        }
        else
            System.out.println("지원되지 않는 연산입니다.");

        scanner.close();
    }
}
