/*
Q11
StringBuffer 클래스를 활용하여 명령처럼 문자열을 수정하라. 아래 실행 예시에서 love!LOVE는 love를 찾아 LOVE로 수정하라는 명령이다.
첫 번재 만난 문자열만 수정한다.

 */
package chap06.excercise;
import java.util.Scanner;

public class Q11_WordReplace {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print(">> ");
        String text = scanner.nextLine();  // 한 라인을 문자열로 읽는다.
        StringBuffer sb = new StringBuffer(text);

        while (true) {
            System.out.print("명령: ");
            String cmd = scanner.nextLine();  // 한 라인을 문자열로 읽는다.
            if (cmd.equals("그만")) {
                System.out.println("프로그램을 종료합니다.");
                break;
            }
            String[] tokens = cmd.split("!");
            if (tokens.length != 2) {
                System.out.println("잘못된 명령입니다!");
            }
            else {
                if (tokens[0].length() == 0 || tokens[1].length() == 0) {
                    System.out.println("잘못된 명령입니다.!");
                    continue;
                }

                int index = sb.indexOf(tokens[0]);
                if (index == -1) {  // not found!
                    System.out.println("찾을 수 없습니다.");
                    continue;
                }
                sb.replace(index, index+tokens[0].length(), tokens[1]);
                System.out.println(sb.toString());
            }
        }

        scanner.close();
    }
}
