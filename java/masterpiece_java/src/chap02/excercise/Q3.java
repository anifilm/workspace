/*
Q3
Scanner 클래스를 이용하여 정수로 된 돈의 액수를 입력받아 오만 원권, 만 원권, 천 원권, 500원 짜리 동전, 100원 짜리 동전, 50원 짜리 동전,
10원 짜리 동전, 1원 짜리 동전 각 몇 개로 변환되는지 출력하라.
  (실행 결과 생략...)

 */
package chap02.excercise;

import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("금액을 입력하시오 >> ");
        int num = scanner.nextInt();

        // 금액 계산
        int fifty_thousand = num / 50000;
        num -= 50000 * fifty_thousand;
        int ten_thousand = num / 10000;
        num -= 10000 * ten_thousand;
        int one_thousand = num / 1000;
        num -= 1000 * one_thousand;
        int five_hundred = num / 500;
        num -= 500 * five_hundred;
        int one_hundred = num / 100;
        num -= 100 * one_hundred;
        int fifty_won = num / 50;
        num -= 50 * fifty_won;
        int ten_won = num / 10;
        num -= 10 * ten_won;
        // 금액별 출력
        if (fifty_thousand > 0) System.out.println("오만원권 " + fifty_thousand + "매");
        if (ten_thousand > 0) System.out.println("만원권 " + ten_thousand + "매");
        if (one_thousand > 0) System.out.println("천원권 " + one_thousand + "매");
        if (five_hundred > 0) System.out.println("오백원 " + five_hundred + "개");
        if (one_hundred > 0) System.out.println("백원 " + one_hundred + "개");
        if (fifty_won > 0) System.out.println("오십원 " + fifty_won + "개");
        if (ten_won > 0) System.out.println("십원 " + ten_won + "개");
        if (num > 0) System.out.println("일원 " + num + "개");

        scanner.close();
    }
}
