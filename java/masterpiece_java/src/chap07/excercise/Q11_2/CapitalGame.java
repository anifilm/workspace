package chap07.excercise.Q11_2;
import java.util.*;

public class CapitalGame {
    private HashMap<String, String> store;
    Scanner scanner;

    public CapitalGame() {
        store = new HashMap<>();
        // HashMap store에 9개의 아이템을 입력하여 초기화
        store.put("멕시코", "멕시코시티");
        store.put("스페인", "리스본");
        store.put("프랑스", "파리");
        store.put("영국", "런던");
        store.put("그리스", "아테네");
        store.put("독일", "베를린");
        store.put("일본", "동경");
        store.put("중국", "베이찡");
        store.put("러시아", "모스크바");

        scanner = new Scanner(System.in);
    }
    public void error(String msg) {
        System.out.println(msg);
    }
    private void input() {
        int n = store.size();
        System.out.println("현재 " + n + "개 나라와 수도가 입력되어 있습니다.");
        while (true) {
            System.out.print("나라와 수도 입력 " + (n+1) + " >> ");
            String nation = scanner.next();   // 사용자 입력, 나라
            if (nation.equals("그만")) break;
            String capital = scanner.next();  // 사용자 입력, 수도
            if (store.containsKey(nation)) {  // 사용자가 입력한 나라가 이미 있다면
                System.out.println(nation + "는 이미 있습니다.");
                continue;
            }
            store.put(nation, capital);
            n++;
        }
    }
    private void quiz() {
        // 모든 key(나라)를 알아낸다.
        Set<String> keys = store.keySet();
        Object[] array = (keys.toArray());
        while (true) {
            // 나라 중에서 하나를 선택한다.
            int index = (int)(Math.random() * array.length);  // 랜덤한 위치 결절
            // 문제(나라)와 정답(수도)을 결정한다.
            String question = (String)array[index];
            String answer = store.get(question);
            // 문제를 출력한다.
            System.out.print(question + "의 수도는? ");

            String input = scanner.next();  // 사용자 입력
            if (input.equals("그만")) break;
            if (input.equals(answer))
                System.out.println("정답!");
            else
                System.out.println("아닙니다.");
        }
    }
    private void finish() {
        System.out.println("게임을 종료합니다.");
        scanner.close();
    }
    public void run() {
        System.out.println("*** 수도 맞추기 게임을 시작합니다. ***");
        while (true) {
            System.out.print("입력:1, 퀴즈:2, 종료:3 >> ");
            int menu = scanner.nextInt();
            switch (menu) {
                case 1:
                    input(); break;
                case 2:
                    quiz(); break;
                case 3:
                    finish(); return;
                default:
                    error("잘못된 입력입니다.");
            }
        }
    }

    public static void main(String[] args) {
        CapitalGame game = new CapitalGame();
        game.run();
    }
}
