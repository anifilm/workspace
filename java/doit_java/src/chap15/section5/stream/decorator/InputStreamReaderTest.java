// InputStreamReader 사용하기
package chap15.section5.stream.decorator;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;

public class InputStreamReaderTest {
	public static void main(String[] args) {
		// 보조 스트림은 InputStreamReader의 매개변수로 기반 스트림인 FileInputStream을 받아 생성함
		try (InputStreamReader isr = new InputStreamReader(new FileInputStream("src/chap15/reader.txt"))) {
			int i;
			// 파일의 끝인 -1이 반환될 때까지 보조 스트림으로 자료를 읽음
			while ((i = isr.read()) != -1) {
				System.out.print((char)i);
			}

		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
