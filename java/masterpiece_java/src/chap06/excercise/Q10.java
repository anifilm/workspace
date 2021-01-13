/*
Q10
갬블링 게임을 만들어 보자. 두 사람이 게임을 진행한다. 이들의 이름을 키보드로 입력 받으며 각 사람은 Person 클래스로 작성하라. 그러므로
프로그램에는 2개의 Person 객체가 생성되어야 한다. 두 사람은 번갈아 가면서 게임을 진행하는데 각 사람이 자기 차례에서 <Enter> 키를 입력
하면, 3개의 난수가 발생되고 이 숫자가 모두 같으면 승자가 되고 게임이 끝난다. 난수의 범위를 너무 크게 잡으면 3개의 숫자가 일치하게 나올
가능성이 적기 때문에 숫자의 범위는 1~3까지로 한다.
  (실행 결과 생략...)

 */
package chap06.excercise;
import java.util.Scanner;

class Person2 {
    private String name;
    private Scanner scanner;

    public Person2() {
        scanner = new Scanner(System.in);
        name = scanner.next();
    }
    public String getName() { return name; }
}

public class Q10 {
    private int[] intArray;
    private Person2[] persons = new Person2[2];
    private String buf;
    private Scanner scanner;

    public Q10() {
        scanner = new Scanner(System.in);
        intArray = new int[3];
        System.out.print("1번째 선수 이름 >> ");
        persons[0] = new Person2();
        System.out.print("2번째 선수 이름 >> ");
        persons[1] = new Person2();
    }
    public boolean turn(int n) {
        System.out.print(persons[n].getName() + " <Enter>키 >> ");
        buf = scanner.nextLine();
        for (int i = 0; i < 3; i++) {
            intArray[i] = (int)(1 + Math.random() * 3);
            System.out.print("\t" + intArray[i]);
            try {
                Thread.sleep(500);  // 0.5초 대기
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        if (intArray[0] == intArray[1] && intArray[1] == intArray[2]) {
            System.out.println("\t" + persons[n].getName() + "님이 이겼습니다!");
            return true;
        }
        else
            System.out.println("\t아쉽군요!");
        return false;
    }
    public void run() {
        int i = 0;
        while (true) {
            if (turn(i % 2)) break;
            i++;
        }
        scanner.close();
    }

    public static void main(String[] args) {
        Q10 game = new Q10();
        game.run();
    }
}
