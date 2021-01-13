/*
Q7
하루의 할 일을 표현하는 Day 클래스는 다음과 같다. 한 달의 할 일을 표현하는 MonthSchedule 클래스를 작성하라.
  (Day 클래스 생략...)

MonthSchedule 클래스에는 Day 객체 배열과 적절한 필드, 메서드를 작성하고 실행 예시처럼 입력, 보기, 끝내기 등의 3개의 기능을 작성하라.
  (실행 결과 생략...)

 */
package chap04.excercise;
import java.util.Scanner;

class Day {
    private String work;  // 하루의 할 일을 나타내는 문자열

    public void set(String work) { this.work = work; }
    public String get() { return work; }
    public void show() {
        if (work == null) System.out.println("없습니다.");
        else System.out.println(work + "입니다.");
    }
}

public class Q7_MonthSchedule {
    private Scanner scanner;
    private Day[] days;

    public Q7_MonthSchedule(int day) {
        scanner = new Scanner(System.in);
        days = new Day[day];
        for (int i = 0; i < day; i++)
            days[i] = new Day();
    }
    public void input() {
        System.out.print("날짜(1~30)? ");
        int day = scanner.nextInt();
        System.out.print("할일(빈칸없이 입력)? ");
        String work = scanner.next();
        days[day] = new Day();
        days[day].set(work);
    }
    public void view() {
        System.out.print("날짜(1~30)? ");
        int day = scanner.nextInt();
        System.out.print(day + "일의 할 일은 ");
        days[day].show();
    }
    public void finish() {
        System.out.print("프로그램을 종료합니다.");
        scanner.close();
    }
    public void run() {
        System.out.println("이번달 스케쥴 관리 프로그램");
        while (true) {
            System.out.print("할일(입력:1, 보기:2, 끝내기:3) >> ");
            int sel = scanner.nextInt();
            switch (sel) {
                case 1:
                    input();
                    break;
                case 2:
                    view();
                    break;
                case 3:
                    finish();
                    return;
                default:
                    System.out.println("잘못 선택하였습니다. 다시 선택하여 주십시오.");
            }
        }
    }

    public static void main(String[] args) {
        Q7_MonthSchedule april = new Q7_MonthSchedule(30);  // 4월달의 할 일
        april.run();
    }
}
