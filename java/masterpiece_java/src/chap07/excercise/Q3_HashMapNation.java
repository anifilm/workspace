/*
Q3
"그만"이 입력될 때까지 나라 이름과 인구를 입력받아 저장하고, 다시 나라 이름을 입력받아 인구를 출력하는 프로그램을 작성하라.
다음 해시맵을 이용하라.
  HashMap<String, Integer> nations = new HashMap<String, Integer>();

  (실행 결과 생략...)

 */
package chap07.excercise;
import java.util.*;

public class Q3_HashMapNation {
    public static void main(String[] args) {
        HashMap<String, Integer> nations = new HashMap<>();

        System.out.println("나라 이름과 인구를 입력하세요.(예: Korea 5000)");
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.print("나라 이름, 인구 >> ");
            String n = scanner.next();
            if (n.equals("그만") || n.equals("exit")) break;
            Integer p = scanner.nextInt();
            nations.put(n, p);
        }

        while (true) {
            System.out.print("인구 검색 >> ");
            String n = scanner.nextLine();
            if (n.equals("그만") || n.equals("exit")) break;
            Integer p = nations.get(n);
            if (p == null)
                System.out.println(n + " 나라는 없습니다.");
            else
                System.out.println(n + "의 인구는 " + p);
        }

        scanner.close();
    }
}
