/*
Q3
system.ini 파일을 읽어 소문자를 모두 대문자로 바꾸어 출력하라.

 */
package chap08.excercise;
import java.io.*;

public class Q3_UpperCharacter {
    public static void main(String[] args) {
        FileReader fin = null;
        File file = new File("src/chap08/system.ini");
        try {
            fin = new FileReader(file);
            System.out.println(file.getPath() + "를 출력합니다.");
            int ch;
            while ((ch = fin.read()) != -1) {
                ch = Character.toUpperCase(ch);  // 대문자로 변경
                System.out.print((char)ch);
            }
            fin.close();
        }
        catch (IOException e) {
            System.out.println("입출력 오류");
        }
    }
}
