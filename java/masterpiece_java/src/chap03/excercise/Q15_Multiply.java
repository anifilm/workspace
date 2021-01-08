/*
Q15
다음은 2개의 정수를 입력 받아 곱을 구하는 Multiply 클래스이다.
  (클래스 소스 생략...)

다음과 같이 실행할 때 프로그램은 10과 5를 곱해 50을 잘 출력한다.
  곱하고자 하는 두 수 입력 >> 10 5
  10 x 5 = 50

하지만, 다음과 같이 실수를 입력하였을 때, 예외가 발생한다.
  (예외 발생 내용 생략...)

다음과 같이 실수가 입력되면 정수를 다시 입력하도록 하여 예외 없이 정상적으로 처리되도록 예외 처리 코드를 삽입하여 Multiply 클래스를
수정하라.
  (실행 결과 생략...)

 */
package chap03.excercise;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Q15_Multiply {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = 0, m = 0;

        while (true) {
            System.out.print("곱하고자 하는 두 수 입력 >> ");
            try {
                n = scanner.nextInt();  // 정수 입력
                m = scanner.nextInt();  // 정수 입력
                System.out.println(n + " x " + m + " = " + n*m);
                break;
            }
            catch (InputMismatchException e) {
                System.out.println("정수가 아닙니다. 다시 입력하세요!");
                scanner.nextLine();  // 현재 입력 스트림에 남아 있는 토큰을 지운다.
                continue;  // 다음 루프
            }
        }

        scanner.close();
    }
}
