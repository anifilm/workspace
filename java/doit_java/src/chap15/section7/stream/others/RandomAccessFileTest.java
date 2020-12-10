// RandomAccessFile 테스트하기
package chap15.section7.stream.others;
import java.io.IOException;
import java.io.RandomAccessFile;

public class RandomAccessFileTest {
	public static void main(String[] args) throws IOException {

		RandomAccessFile rf = new RandomAccessFile("src/chap15/random.txt", "rw");
		rf.writeInt(100);
		System.out.println("파일 포인터 위치: " + rf.getFilePointer());
		rf.writeDouble(3.14);
		System.out.println("파일 포인터 위치: " + rf.getFilePointer());
		rf.writeUTF("안녕하세요");
		System.out.println("파일 포인터 위치: " + rf.getFilePointer());

		// 파일 포인터 위치를 맨 처음으로 옮기고 위치를 출력함
		rf.seek(0);
		System.out.println("파일 포인터 위치: " + rf.getFilePointer());

		int i = rf.readInt();
		double d = rf.readDouble();
		String str = rf.readUTF();

		// 읽기가 끝난 후 파일 포인터 위치를 출력함
		System.out.println("파일 포인터 위치: " + rf.getFilePointer());

		System.out.println(i);
		System.out.println(d);
		System.out.println(str);
	}
}
