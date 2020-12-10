// 한글 문자를 바이트 단위로 읽어오니 문자가 깨진다
package chap15.section4.stream.reader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class FileInputStreamTest2 {
    public static void main(String[] args) {

        try (FileInputStream fis = new FileInputStream("src/chap15/reader.txt")) {
            int i;
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

