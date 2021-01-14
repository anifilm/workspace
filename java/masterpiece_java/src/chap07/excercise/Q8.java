/*
Q8
고객의 이름과 포인트 점수를 관리하는 프로그램을 해시맵을 이용하여 작성하라. 프로그램은 고객의 이름과 포인트를 함께 저장 관리하는데,
포인터는 추가될 때마다 누적하여 저장된다.
  (실행 결과 생략...)

 */
package chap07.excercise;
import java.util.*;

class Customer {
    private String title;
    private Scanner scanner;
    private HashMap<String, Integer> pointMap;

    public Customer(String title) {
        scanner = new Scanner(System.in);
        pointMap = new HashMap<>();
        this.title = title;
    }
    public void printAll() {
        Set<String> keys = pointMap.keySet();
        Iterator<String> it = keys.iterator();
        while(it.hasNext()) {
            String name = it.next();
            int point = pointMap.get(name);
            System.out.print("(" + name + ", " + point + ") ");
        }
        System.out.println();
    }
    public void run() {
        System.out.println("*** " + title + " 관리 프로그램 입니다 ***");
        while (true) {
            System.out.print("이름과 포인트 입력 >> ");
            String name = scanner.next();
            if (name.equals("그만")) {
                System.out.println("프로그램을 종료합니다.");
                scanner.close();
                break;
            }
            int point = scanner.nextInt();
            pointMap.put(name, point);
            printAll();
        }
    }
}

public class Q8 {
    public static void main(String[] args) {
        Customer cpoint = new Customer("포인트 관리");
        cpoint.run();
    }
}
