/*
Q4
Scanner 클래스로 정수 3개를 입력받고 3개의 숫자 중 중간 크기의 수를 출력하라. 평균값을 구하는 것이 아님에 주의하라.
  (실행 결과 생략...)

 */
package chap02.excercise;

import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("정수 3개 입력 >> ");
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        int num3 = scanner.nextInt();

        int mid = 0;
        if ((num1 > num2) && (num1 < num3)) mid = num1;
        if ((num2 > num1) && (num2 < num3)) mid = num2;
        if ((num3 > num1) && (num3 < num2)) mid = num3;

        System.out.println("중간 값은 " + mid);

        scanner.close();
    }
}
