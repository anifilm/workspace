// Scanner 테스트하기
package chap15.section2.stream.others;
import java.util.Scanner;

public class ScannerTest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 문자열을 읽는 nextLine() 메서드로 이름과 직업을 입력받음
        System.out.println("이름: ");
        String name = scanner.nextLine();
        System.out.println("직업: ");
        String job = scanner.nextLine();
        // int형을 읽는 nextInt() 메서드로 사번을 입력받음
        System.out.println("사번: ");
        int num = scanner.nextInt();

        System.out.println(name);
        System.out.println(job);
        System.out.println(num);
    }
}

/*

Scanner 클래스에서 제공하는 메서드는 다음과 같습니다.

      메서드                    설명
boolean nextBoolean()    boolean 자료를 읽습니다.
   byte nextByte()      한 바이트 자료를 읽습니다.
  short nextShort()      short 자료형을 읽습니다.
    int nextInt()          int 자료형을 읽습니다.
   long nextLong()        long 자료형을 읽습니다.
  float nextFloat()      float 자료형을 읽습니다.
 double nextDouble()    double 자료형을 읽습니다.
 String nextLine()      String 문자열을 읽습니다.

 */
