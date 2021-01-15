/*
Q3
system.ini 파일을 읽어 소문자를 모두 대문자로 바꾸어 출력하라.

 */
package chap08.excercise;
import java.io.*;
import java.util.*;

public class Q3_UpperCharacterUsingScanner {
    public static void main(String[] args) {
        File file = new File("src/chap08/system.ini");
        try {
            Scanner scanner = new Scanner(new FileReader(file));
            System.out.println(file.getPath() + "를 출력합니다.");
            while (scanner.hasNext()) {
                String line = scanner.nextLine();
                line = line.toUpperCase();  // 대문자로 변경
                System.out.println(line);
            }
            scanner.close();
        }
        catch (IOException e) {
            System.out.println("입출력 오류");
        }
    }
}
