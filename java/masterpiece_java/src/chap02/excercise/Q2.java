/*
Q2
Scanner 클래스를 이용하여 2자리의 정수(10~99사이)를 입력받고, 십의 자리와 1의 자리가 같은지 판별하여 출력하는 프로그램을 작성하라.
  (실행 결과 생략...)

 */
package chap02.excercise;
import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("2자리수 정수 입력(10~99) >> ");
        int num = scanner.nextInt();

        if ((num / 10) == (num % 10))  // 십의 자리와 일의 자리를 비교
            System.out.println("Yes! 10의 자리와 1의 자리가 같습니다.");
        else
            System.out.println("No! 10의 자리와 1의 자리가 다릅니다.");

        scanner.close();
    }
}
