// if 문 활용
package chap02.section6;

import java.util.Scanner;

public class SuccessOrFail {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("점수를 입력하시오: ");
        int score = scanner.nextInt();
        if (score >= 80)
            System.out.println("축하합니다! 합격입니다.");

        scanner.close();
    }
}
