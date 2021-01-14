/*
Q7
이름과 학점(4.5만점)을 5개 입력받아 해시맵에 저장하고, 장학생 선발 기준을 입력받아 장학생 명단을 출력하라.
  (실행 결과 생략...)

 */
package chap07.excercise;
import java.util.*;

class Scholarship {
    private String title;
    private Scanner scanner;
    private HashMap<String, Double> scoreMap;

    public Scholarship(String title) {
        scanner = new Scanner(System.in);
        scoreMap = new HashMap<>();
        this.title = title;
    }
    public void read() {
        System.out.println(title + " 관리 시스템 입니다.");
        for (int i = 0; i < 5; i++) {
            System.out.print("이름과 학점 >> ");
            String name = scanner.next();
            double score = scanner.nextDouble();
            scoreMap.put(name, score);
        }
    }
    public void select() {
        System.out.print("장학생 선발 학점 기준 입력 >> ");
        double cutline = scanner.nextDouble();

        System.out.print("장학생 명단: ");
        Set<String> nameSet = scoreMap.keySet();
        Iterator<String> it = nameSet.iterator();
        while (it.hasNext()) {
            String name = it.next();
            double score = scoreMap.get(name);
            if (score > cutline)
                System.out.print(name + " ");
        }
        System.out.println();
        scanner.close();
    }
}

public class Q7 {
    public static void main(String[] args) {
        Scholarship sship = new Scholarship("미래 장학금");
        sship.read();
        sship.select();
    }
}
