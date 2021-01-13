/*
Q9
철수와 컴퓨터의 가위바위보 게임을 만들어 보자. 가위, 바위, 보는 각각 1, 2, 3 키이다. 철수가 키를 입력하면, 동시에 프로그램도 Math.Random()
을 이용하여 1, 2, 3 중에 한 수를 발생시키고 이것을 컴퓨터가 낸 것으로 한다. 그런 다음 철수와 컴퓨터 중 누가 이겼는지 판별하여 승자를 출력하라.
  (실행 결과 생략...)

 */
package chap06.excercise;
import java.util.Scanner;

class Player {
    private String name;
    private Scanner scanner = new Scanner(System.in);

    public Player(String name) {
        this.name = name;
    }
    public String getName() { return name; }
    public int turn() {
        System.out.print(name + " [가위(1), 바위(2), 보(3), 끝내기(4)] >> ");
        return scanner.nextInt();
    }
}

class Computer extends Player {
    public Computer(String name) {
        super(name);
    }
    public int turn() {
        return (int)(1 + Math.random() * 3); // 1부터 3까지의 수
    }
}

public class Q9 {
    private final String[] GBB = {"가위", "바위", "보"};
    private Player[] players = new Player[2];

    public Q9() {
        players[0] = new Player("채영");
        players[1] = new Computer("컴퓨터");
    }
    public void run() {
        int userSelect, computerSelect;
        while (true) {
            userSelect = players[0].turn();  // 채영 차례
            if (userSelect == 4) {
                System.out.println("프로그램을 종료합니다.");
                break;  // 게임 끝내기
            }
            computerSelect = players[1].turn();  // 컴퓨터 차례
            if (userSelect < 1 || userSelect > 3)
                System.out.println("잘못 입력하였습니다.");
            else {
                System.out.print(players[0].getName() + "(" + GBB[userSelect-1] + ") : " );
                System.out.println(players[1].getName() + "(" + GBB[computerSelect-1] + ")");

                int diff = userSelect - computerSelect;
                switch (diff) {
                    case 0:  // 같은 것을 낸 경우
                        System.out.println("비겼습니다.");
                        break;
                    case -1:  // 사용자가 가위, 컴퓨터가 바위 또는 사요자가 바위, 컴퓨터가 보
                    case 2:   // 사용자가 보, 컴퓨터가 가위
                        System.out.println(players[1].getName() + "가 이겼습니다.");
                        break;
                    case 1:   // 사용자가 바위, 컴퓨터가 가위 또는 사용자가 보, 컴퓨터가 바위
                    case -2:  // 사용자가 가위, 컴퓨터가 보
                        System.out.println(players[0].getName() + "이 이겼습니다.");
                }
            }
        }
    }

    public static void main(String[] args) {
        Q9 game = new Q9();
        game.run();
    }
}
