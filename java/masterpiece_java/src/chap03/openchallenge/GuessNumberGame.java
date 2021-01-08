/*
Open Challenge - 카드 번호 맞추기 게임 (up & down 게임)
숨겨진 카드의 수를 맞추는 게임을 만들어 보자. 0에서 99까지의 임의의 수를 가진 카드를 한 장 숨기고 이 카드의 수를 맞추는 게임이다.
아래의 화면과 같이 카드 속의 수가 77인 경우를 보자. 수를 맞추는 사람이 55라고 입력하면 "더 높게", 다시 70을 입력하면 "더 높게"라는
식으로 범위를 좁혀가면서 수를 맞춘다. 게임을 반복하기 위해 y/n을 묻고, n인 경우 종료된다.
  (실행 결과 생략...)

 */
package chap03.openchallenge;

import java.util.InputMismatchException;
import java.util.Random;
import java.util.Scanner;

public class GuessNumberGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int low, high;  // 카드에 적힌 수의 범위
        int card;       // 카드에 적힌 번호 값 (숨기는 값, 정답)
        Random r = new Random();  // 난수 발생기 생성

        while (true) {
            int i = 0;  // 사용자의 시행 횟수
            low = 0;    // 카드 값의 최소 범위
            high = 99;  // 카드 값의 최대 범위
            card = r.nextInt(100);  // 0과 99 사이의 정수 난수 (숨기는 값) 생성
            System.out.println("수를 결정하였습니다. 맞추어 보세요.");

            while (true) {
                System.out.println(low + " - " + high);  // 값의 범위 출력
                System.out.print(i+1 + ">>");  // 시행 횟수 출력
                int n = 0;
                try {
                    n = scanner.nextInt();  // 수를 입력받는다.
                }
                catch(InputMismatchException e) {  // 키 입력을 정수로 변환하지 못하는 예외 처리
                    System.out.println("정수만 입력하셔야 합니다!!");
                    scanner.nextLine();  // 나머지 모든 키를 읽어서 버린다.
                    continue; // 다시 시도한다.
                }

                if (n > high || n < low)  // high와 low의 범위를 벗어난 경우
                    System.out.println("범위를 벗어났어요.");
                else {  // 정상적인 범위의 수가 입력된 경우
                    if (n == card) {
                        System.out.println("맞았습니다.");
                        break;  // while 문 종료
                    }
                    else if (n > card) {  // 입력된 값이 정답보다 높은 범위의 수인 경우
                        System.out.println("더 낮게");
                        high = n;
                    }
                    else {  // 입력된 값이 정답보다 낮은 범위의 수인 경우
                        System.out.println("더 높게");
                        low = n;
                    }
                }
                i++;  // 시행 횟수 증가
            }

            System.out.print("다시하시겠습니까(y/n) >> ");
            if (scanner.next().equals("n"))
                break;  // while 문 종료
        }

        scanner.close();
    }
}
