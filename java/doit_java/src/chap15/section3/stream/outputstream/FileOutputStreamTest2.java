// 파일에 바이트 배열로 출력하기
package chap15.section3.stream.outputstream;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileOutputStreamTest2 {
	public static void main(String[] args) throws IOException {
		FileOutputStream fos = new FileOutputStream("src/chap15/output2.txt", true);

		try (fos) { // 자바 9부터 제공하는 향상된 try-with-resources문
			byte[] bs = new byte[26];
			byte data = 65;	// 'A'의 아스키 값
			// A부터 Z까지 배열에 넣기
			for (int i = 0; i < bs.length; i++) {
				bs[i] = data;
				data++;
			}
			fos.write(bs);	// 배열을 한꺼번에 출력

		} catch (IOException e) {
			e.printStackTrace();
		}
		System.out.println("출력이 완료되었습니다.");
	}
}
