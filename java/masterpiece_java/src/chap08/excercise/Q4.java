/*
Q4
system.ini 파일에 라인 번호를 붙여 출력하라.
  (실행 결과 생략...)

 */
package chap08.excercise;
import java.io.*;
import java.util.*;

public class Q4 {
    public static void main(String[] args) {
        File file = new File("src/chap08/system.ini");
        try {
            Scanner scanner = new Scanner(new FileReader(file));
            System.out.println(file.getPath() + "파일을 읽어 출력합니다.");
            int n = 1;
            while (scanner.hasNext()) {
                String line = scanner.nextLine();
                System.out.printf("%2d: %s\n", n, line);
                n++;
            }
            scanner.close();
        }
        catch (IOException e) {
            System.out.println("입출력 오류");
        }
    }
}
