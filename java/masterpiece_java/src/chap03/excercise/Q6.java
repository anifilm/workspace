/*
Q6
배열과 반복문을 이용하여 프로그램을 작성해보자. 키보드에서 정수로 된 돈의 액수를 입력받아 오만 원권, 만 원권, 천 원권, 500워짜리 동전,
100원짜리 동전, 50원짜리 동전, 10원짜리 동전, 1원짜리 동전이 각 몇개로 변환되는지 예시와 같이 출력하라. 이때 반드시 다음 배열을 이용
하고 반복문으로 작서하라.
  int[] unit = {50000, 10000, 1000, 500, 100, 50, 10, 1};  // 환산할 돈의 종류
  (실행 결과 생략...)

 */
package chap03.excercise;
import java.util.Scanner;

public class Q6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] unit = {50000, 10000, 1000, 500, 100, 50, 10, 1};
        String[][] unit_call = {
                {"오만원권", "매"},
                {"만원권", "매"},
                {"천원권", "매"},
                {"오백원", "개"},
                {"백원", "개"},
                {"오십원", "개"},
                {"십원", "개"},
                {"일원", "개"}
        };

        System.out.print("금액을 입력하시오 >> ");
        int money = scanner.nextInt();
        int calc_money;

        for (int i = 0; i < unit.length; i++) {
            calc_money = money / unit[i];
            if (calc_money > 0) System.out.println(unit_call[i][0] + " " + calc_money + unit_call[i][1]);
            money -= unit[i] * calc_money;
        }

        scanner.close();
    }
}
