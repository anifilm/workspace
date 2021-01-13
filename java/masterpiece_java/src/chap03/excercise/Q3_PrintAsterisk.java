/*
Q3
Scanner를 이용하여 정수를 입력받고 다음과 같이 * 을 출력하는 프로그램을 작성하라. 다음은 5을 입력받았을 경우이다.
  정수를 입력하시요 >> 5
  *****
  ****
  ***
  **
  *

 */
package chap03.excercise;
import java.util.Scanner;

public class Q3_PrintAsterisk {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("정수를 입력하시오 >> ");
        int n = scanner.nextInt();
        if (n <= 0) {
            System.out.println("0보다 큰수를 입력하세요.");
            scanner.close();
            return;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-i; j++)
                System.out.print("*");
            System.out.println();
        }

        scanner.close();
    }
}
