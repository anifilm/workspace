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

public class Q11_1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("달을 입력하세요 (1~12) >> ");
        int month = scanner.nextInt();
        String season;

        if (month == 12 || month >= 1 && month < 3)  // 12, 1, 2
            season = "겨울";
        else if (month >= 3 && month < 6)  // 3~5
            season = "봄";
        else if (month >= 6 && month < 9)  // 6~8
            season = "여름";
        else if (month >= 9 && month < 12) // 9~11
            season = "가을";
        else
            season = "잘못입력";

        System.out.println(season);

        scanner.close();
    }
}
