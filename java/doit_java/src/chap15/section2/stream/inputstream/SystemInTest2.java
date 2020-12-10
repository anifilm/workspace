// 문자 여러 개를 입력받기
package chap15.section2.stream.inputstream;
import java.io.IOException;

public class SystemInTest2 {
    public static void main(String[] args) throws IOException {
        System.out.println("알파벳 여러 개를 쓰고 [Enter]를 누르세요.");

        int i;
        try {
            // while문에서 read() 메서드로 한 바이트를 반복해 읽음
            while((i = System.in.read()) != '\n') {
                System.out.print((char)i);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
