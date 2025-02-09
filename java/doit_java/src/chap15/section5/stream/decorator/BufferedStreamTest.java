// 버퍼링 기능으로 파일 복사하기
package chap15.section5.stream.decorator;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class BufferedStreamTest {
	public static void main(String[] args) {

		long millisecond = 0;
		try (FileInputStream fis = new FileInputStream("src/chap15/a.zip");
			 FileOutputStream fos = new FileOutputStream("src/chap15/copy.zip");
			 BufferedInputStream bis = new BufferedInputStream(fis);
			 BufferedOutputStream bos = new BufferedOutputStream(fos)) {

			millisecond = System.currentTimeMillis();
			int i;
			while ((i = bis.read()) != -1) {
				bos.write(i);
			}
			millisecond = System.currentTimeMillis() - millisecond;

		} catch (IOException e) {
			e.printStackTrace();
		}
		System.out.println("파일 복사하는 데 " + millisecond + " milliseconds 소요 되었습니다.");
	}
}
