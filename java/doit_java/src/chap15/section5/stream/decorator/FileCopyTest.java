// 파일 복사하기
package chap15.section5.stream.decorator;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileCopyTest {
	public static void main(String[] args) {

		long millisecond = 0;
		try (FileInputStream fis = new FileInputStream("src/chap15/a.zip");
			 FileOutputStream fos = new FileOutputStream("src/chap15/copy.zip")) {
			// 파일 복사를 시작하기 전 시간
			millisecond = System.currentTimeMillis();
			int i;
			while ((i = fis.read()) != -1) {
				fos.write(i);
			}
			// 파일을 복사하는데 걸리는 시간 계산
			millisecond = System.currentTimeMillis() - millisecond;

		} catch(IOException e) {
			e.printStackTrace();
		}
		System.out.println("파일 복사하는 데 " + millisecond + " milliseconds 소요 되었습니다.");
	}
}
