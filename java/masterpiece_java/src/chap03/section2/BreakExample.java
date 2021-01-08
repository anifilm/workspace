// break 문을 이용하여 while 문 벗어나기
package chap03.section2;

import java.util.Scanner;

public class BreakExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("exit을 입력하면 종료합니다.");
        while (true) {
            System.out.print(">> ");
            String text = scanner.nextLine();  // 한 라인 읽기
            if (text.equals("exit"))  // "exit"이 입력되면 반복 종료
                break;  // while 문을 벗어남
        }
        System.out.println("종료합니다.");

        scanner.close();
    }
}
