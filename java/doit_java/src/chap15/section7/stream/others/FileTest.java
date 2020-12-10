// File 클래스 테스트하기
package chap15.section7.stream.others;
import java.io.File;
import java.io.IOException;

public class FileTest {
	public static void main(String[] args) throws IOException {

		File file = new File("D:\\easyspub\\JAVA_LAB\\Chapter15\\newFile.txt");
		file.createNewFile();	// 파일 생성

		// 파일의 속성을 살펴보는 메서드를 호출하여 출력
		System.out.println(file.isFile());
		System.out.println(file.isDirectory());
		System.out.println(file.getName());
		System.out.println(file.getAbsolutePath());
		System.out.println(file.getPath());
		System.out.println(file.canRead());
		System.out.println(file.canWrite());

		file.delete();	// 파일 삭제
	}
}
