/*
Q12
문제 10의 갬블링 게임을 n명이 하도록 수정하라. 실행 예시와 같이 게임에 참여하는 선수의 수를 입력받고 각 선수의 이름을 입력받도록 수정하라.

 */
package chap06.excercise;
import java.util.Scanner;

public class Q12 {
    private int[] intArray;
    private Person2[] persons;
    private String buf;
    private Scanner scanner;

    public Q12() {
        scanner = new Scanner(System.in);
        intArray = new int[3];
        System.out.print("겜블링 게임에 참여할 선수 숫자 >> ");
        int n = scanner.nextInt();
        persons = new Person2[n];
        for (int i = 0; i < n; i++) {
            System.out.print((i+1) + "번째 선수 이름 >> ");
            persons[i] = new Person2();
        }
        scanner.nextLine();  // 버퍼 비우기
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
            if (turn(i % persons.length)) break;
            i++;
        }
        scanner.close();
    }

    public static void main(String[] args) {
        Q12 game = new Q12();
        game.run();
    }
}
