/*
Q16
컴퓨터와 독자 사이의 가위 바위 보 게임을 만들어 보자. 예시는 다음 그림과 같다. 독자부터 먼저 시작한다. 독자가 가위 바위 보 중 하나를 입력
하고 <Enter> 키를 치면, 프로그램은 가위 바위 보 중에서 랜덤하게 하나를 선택하고 컴퓨터가 낸 것으로 한다. 독자가 입력한 값과 랜덤하게 선택
한 값을 비교하여 누가 이겼는지 판단한다. 독자가 가위 바위 보 대신 "그만"을 입력하면 게임이 끝난다.
  (실행 결과 생략...)

 */
package chap03.excercise;
import java.util.Scanner;

public class Q16 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] GBB = {"가위", "바위", "보"};
        String input;

        System.out.println("컴퓨터와 가위 바위 보 게임을 합니다.");
        while (true) {
            int n = (int)(Math.random() * 3);
            System.out.println(n);
            System.out.print("가위 바위 보 >> ");
            input = scanner.next();
            if (input.equals("그만")) {
                System.out.println("게임을 종료합니다.");
                break;
            }
            System.out.print("사용자: " + input + ", 컴퓨터: " + GBB[n] + ", ");
            if (input.equals("가위")) {  // 사용자가 가위인 경우
                if (GBB[n].equals("가위"))
                    System.out.println("비겼습니다.");
                else if (GBB[n].equals("바위"))
                    System.out.println("컴퓨터가 이겼습니다.");
                else
                    System.out.println("사용자가 이겼습니다.");
            }
            else if (input.equals("바위")) {  // 사용자가 바위인 경우
                if (GBB[n].equals("가위"))
                    System.out.println("사용자가 이겼습니다.");
                else if (GBB[n].equals("바위"))
                    System.out.println("비겼습니다.");
                else
                    System.out.println("컴퓨터가 이겼습니다.");
            }
            else {  // 사용자가 보인 경우
                if (GBB[n].equals("가위"))
                    System.out.println("컴퓨터가 이겼습니다.");
                else if (GBB[n].equals("바위"))
                    System.out.println("사용자가 이겼습니다.");
                else
                    System.out.println("비겼습니다.");
            }
        }

        scanner.close();
    }
}
