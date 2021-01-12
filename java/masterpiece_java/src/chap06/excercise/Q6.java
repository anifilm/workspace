/*
Q6
경과시간을 맞추는 게임을 작성하라. 다음 예시를 참고하면, <Enter> 키를 입력하면 현재 초 시간을 보여주고 여기서 10초에 더 근접하도록
다음 <Enter> 키를 입력하면 현재 초 시간을 보여주고 여기서 10초에 더 근접하도록 다음 <Enter> 키를 입력한 사람이 이기는 게임이다.
  (실행 결과 생략...)

 */
package chap06.excercise;
import java.util.Calendar;
import java.util.Scanner;

class Person {
    Calendar now = Calendar.getInstance();
    Scanner scanner = new Scanner(System.in);
    private String name, buffer;
    private int sec1, sec2;

    public Person(String name) {
        this.name = name;
    }
    public String getName() { return name; }
    public int enter() {
        buffer = scanner.nextLine();
        now = Calendar.getInstance();
        int second = now.get(Calendar.SECOND);
        System.out.println("\t현재 초 시간 = " + second);
        return second;
    }
    public int game() {
        System.out.print(name + " 시작 <Enter>키 >> ");
        sec1 = enter();
        System.out.print("10초 예상 후 <Enter>키 >> ");
        sec2 = enter();
        if (sec1 < sec2)
            return sec2 - sec1;
        else
            return (60-sec1) + sec2;
    }
}

public class Q6 {
    public static void main(String[] args) {
        Person person1 = new Person("임채영");
        Person person2 = new Person("정흥규");

        System.out.println("10초에 가까운 사람이 이기는 게임 입니다.");
        int result1 = person1.game();
        int result2 = person2.game();

        System.out.print(person1.getName() + "의 결과 " + result1 + ", " + person2.getName() + "의 결과 " + result2);
        if (Math.abs(result1-10) < Math.abs(result2-10))
            System.out.println(", 승자는 " + person1.getName());
        else
            System.out.println(", 승자는 " + person2.getName());
    }
}
