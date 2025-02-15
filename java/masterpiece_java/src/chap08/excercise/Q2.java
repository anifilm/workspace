/*
Q2
앞서 저장한 phone.txt 파일을 읽어 화면에 출력하라.
  (실행 결과 생략...)

 */
package chap08.excercise;
import java.io.*;

public class Q2 {
    public static void main(String[] args) {
        FileReader fin = null;
        File file = new File("src/chap08/phone.txt");
        try {
            fin = new FileReader(file);
            System.out.println(file.getPath() + "를 출력합니다.");
            int ch;
            while ((ch = fin.read()) != -1) {
                System.out.print((char)ch);
            }
            fin.close();
        }
        catch (IOException e) {
            System.out.println("입출력 오류");
        }
    }
}
