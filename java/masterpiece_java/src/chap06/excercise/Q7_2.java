/*
Q7
Scanner를 이용하여 한 라인을 읽고, 공백으로 분리된 어절이 몇 개 들어 있는지 "그만"을 입력할 때까지 반복하는 프로그램을 작성하라.
  (실행 결과 생략...)
  (1) StringTokenizer 클래스를 이용하여 작성하라.
  (2) String 클래스의 split() 메서드를 이용하여 작성하라.

 */
package chap06.excercise;
import java.util.Scanner;

public class Q7_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.print(">> ");
            String str = scanner.nextLine();
            if (str.equals("그만")) break;
            String[] words = str.split(" ");
            System.out.println("어절 개수는 " + words.length);
        }

        scanner.close();
    }
}
