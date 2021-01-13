/*
Q5
Scanner를 이용하여 삼각형의 변의 길이를 나타내는 정수를 3개 입력받고 이 3개의 수로 삼각형을 만들 수 있는지 판별하라. 삼각형의 되려면
두 변의 합이 다른 한변의 합보다 커야 한다.
  (실행 결과 생략...)

 */
package chap02.excercise;
import java.util.Scanner;

public class Q5_Triagle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("정수 3개를 입력하시오 >> ");
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        int num3 = scanner.nextInt();

        // 두변의 합이 다른 한변보다 작은 경우
        if ((num1 + num2) < num3 || (num1 + num3) < num2 || (num2 + num3) < num1)
            System.out.println("삼각형이 되지 않습니다.");
        else
            System.out.println("삼각형이 됩니다.");

        scanner.close();
    }
}
