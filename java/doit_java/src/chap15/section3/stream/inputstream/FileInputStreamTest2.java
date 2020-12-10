// 파일 끝까지 읽기
package chap15.section3.stream.inputstream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class FileInputStreamTest2 {
    public static void main(String[] args) {

        try (FileInputStream fis = new FileInputStream("src/chap15/input.txt")) {
            int i;
            // i값이 -1이 아닌 동안 read() 메서드로 한 바이트를 반복해 읽음
            while ((i = fis.read()) != -1) {
                System.out.println((char)i);
            }
            System.out.println("end");

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

