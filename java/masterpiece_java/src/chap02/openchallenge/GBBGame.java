/*
Open Challenge - 가위바위보 게임
두 사람이 하는 가위바위보 게임을 만들어보자. 두 사람의 이름은 '철수'와 '영희'이다. 먼저 "철수 >> "를 출력하고 "가위", "바위", "보" 중
하나를 문자열로 입력받는다. 그리고 "영희 >> "를 출력하고 마찬가리로 입력받는다. 입력받은 문자열을 비교하여 누가 이겼는지 판별하여 승자를
출력한다.

 */
package chap02.openchallenge;
import java.util.Scanner;

public class GBBGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);  // 키보드 입력을 위한 Scanner 객체 생성

        System.out.println("가위바위보 게임입니다. 가위, 바위, 보 중에서 입력하세요");

        System.out.print("철수 >> ");
        String a = scanner.next();  // 철수의 가위, 바위, 보, 문자열을 입력받는다.
        System.out.print("영희 >> ");
        String b = scanner.next();  // 영희의 가위, 바위, 보, 문자열을 입력받는다.

        if (a.equals("가위")) {  // 철수가 가위인 경우
            if (b.equals("가위"))
                System.out.println("비겼습니다.");
            else if (b.equals("바위"))
                System.out.println("영희가 이겼습니다.");
            else
                System.out.println("철수가 이겼습니다.");
        }
        else if (a.equals("바위")) {  // 철수가 바위인 경우
            if (b.equals("가위"))
                System.out.println("철수가 이겼습니다.");
            else if (b.equals("바위"))
                System.out.println("비겼습니다.");
            else
                System.out.println("영희가 이겼습니다.");
        }
        else {  // 철수가 보인 경우
            if (b.equals("가위"))
                System.out.println("영희가 이겼습니다.");
            else if (b.equals("바위"))
                System.out.println("철수가 이겼습니다.");
            else
                System.out.println("비겼습니다.");
        }

        scanner.close();
    }
}
