// switch 문으로 학점 매기기
package chap02.section6;

import java.util.Scanner;

public class GradingSwitch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        char grade;
        System.out.print("점수를 입력하세요(0~100): ");
        int score = scanner.nextInt();  // 점수 읽기
        switch (score / 10) {
            case 10: // score = 100
            case 9:  // score는 90 이상 100 미만
                grade = 'A';
                break;
            case 8:  // score가 80 이상 90 미만
                grade = 'B';
                break;
            case 7:  // score가 70 이상 80 미만
                grade = 'C';
                break;
            case 6:  // score가 60 이상 70 미만
                grade = 'D';
                break;
            default:  // score가 60 미만
                grade = 'F';
        }
        System.out.println("학점은 " + grade + "입니다.");

        scanner.close();
    }
}
