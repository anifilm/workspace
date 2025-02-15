/*
Q1
Scanner 클래스를 이용하여 원화는 입력받아 달러로 바꾸어 다음 예시와 같이 출력하는 프로그램을 작성하라. $1 = 1100원으로 가정하고 계산하라.
  (실행 결과 생략...)

 */
package chap02.excercise;
import java.util.Scanner;

public class Q1_Won2Dollar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        final double rate = 1100.0;
        System.out.print("원화를 입력하세요(단위 원) >> ");
        int won = scanner.nextInt();
        double dollar = won / rate;
        System.out.println(won + "원은 $" + dollar + "입니다.");

        scanner.close();
    }
}
