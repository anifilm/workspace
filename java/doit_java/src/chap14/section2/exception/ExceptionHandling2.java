// try-catch-finally문
package chap14.section2.exception;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class ExceptionHandling2 {
	public static void main(String[] args) {

		FileInputStream fis = null;

		try {
			fis = new FileInputStream("a.txt");
			if (fis != null) {
				try {
					fis.close();	// try 블록에서 파일 리소스를 닫는 close() 메서드 호출
				} catch (IOException e) {
					e.printStackTrace();
				}
			}
		} catch (FileNotFoundException e) {
			System.out.println(e);
		}
	}
}
