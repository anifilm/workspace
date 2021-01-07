/*
Q11
숫자를 입력받아 3~5는 "봄", 6~8은 "여름", 9~11은 "가을", 12,1,2의 경우 "겨울"을, 그 외 숫자을 입력한 경우 "잘못입력"을 출력하는
프로그램을 작성하라.
  (실행 결과 생략...)

  (1) if-else 문을 이용하여 프로그램을 작성하라.
  (2) switch 문을 이용하여 프로그램을 작성하라.
 */
package chap02.excercise;

import java.util.Scanner;

public class Q11_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("달을 입력하세요 (1~12) >> ");
        int month = scanner.nextInt();
        String season;

        switch (month) {
            case 12: case 1: case 2:
                season = "겨울"; break;
            case 3: case 4: case 5:
                season = "봄"; break;
            case 6: case 7: case 8:
                season = "여름"; break;
            case 9: case 10: case 11:
                season = "가을"; break;
            default:
                season = "잘못입력";
        }
        System.out.println(season);

        scanner.close();
    }
}
