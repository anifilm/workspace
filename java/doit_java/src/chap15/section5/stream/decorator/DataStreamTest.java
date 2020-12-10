// DataInputStream / DataOutputStream 테스트하기
package chap15.section5.stream.decorator;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class DataStreamTest {
	public static void main(String[] args) {

		try (FileOutputStream fos = new FileOutputStream("src/chap15/data.txt");
			 DataOutputStream dos = new DataOutputStream(fos)) {
			// 각 자료형에 맞게 자료를 사용
			dos.writeByte(100);
			dos.writeChar('A');
			dos.writeInt(10);
			dos.writeFloat(3.14f);
			dos.writeUTF("Test");

		} catch (IOException e) {
			e.printStackTrace();
		}

		try (FileInputStream fis = new FileInputStream("src/chap15/data.txt");
			 DataInputStream dis = new DataInputStream(fis)) {
			// 자료형에 맞게 자료를 읽어 출력함. 파일에 쓴 순서와 같은 순서, 같은 메서드로 읽어야 함
			System.out.println(dis.readByte());
			System.out.println(dis.readChar());
			System.out.println(dis.readInt());
			System.out.println(dis.readFloat());
			System.out.println(dis.readUTF());

		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
