/*
Q6
369게임을 간단히 작성해보자. 1~99까지의 정수를 입력받고 정수에 3, 6, 9 중 하나가 있는 경우는 "박수짝"을 출력하고 두개 있는 경우는
"박수짝짝"을 출력하는 프로그램을 작성하라. 예를 들면, 키보드로 입력된 수가 13인 경우 "박수짝"을, 36인 경우 "박수짝짝"을 출력하면 된다.
  (실행 결과 생략...)

 */
package chap02.excercise;

import java.util.Scanner;

public class Q6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("1~99 사이의 정수를 입력하시오 >> ");
        int num = scanner.nextInt();

        if (num < 10) {
            if ((num % 10) % 3 == 0)
                System.out.println("박수짝");
            else
                System.out.println(num);
        }
        else if ((num / 10) % 3 == 0) {
            if (num % 10 != 0 && (num % 10) % 3 == 0)
                System.out.println("박수짝짝");
            else
                System.out.println("박수짝");
        }
        else {
            if (num % 10 != 0 && (num % 10) % 3 == 0)
                System.out.println("박수짝");
            else
                System.out.println(num);
        }

        scanner.close();
    }
}
