// 직렬화 테스트하기
package chap15.section6.stream.serialization;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

/*
class Person implements Externalizable {
	String name;
	String job;

	public Person() {}

	public Person(String name, String job) {
		this.name = name;
		this.job = job;
	}

	public String toString() {
		return name + ", " + job;
	}

	@Override
	public void writeExternal(ObjectOutput out) throws IOException {
		out.writeUTF(name);
		out.writeUTF(job);
	}

	@Override
	public void readExternal(ObjectInput in) throws IOException, ClassNotFoundException {
		name = in.readUTF();
		job = in.readUTF();
	}
} */

class Person implements Serializable {	// 직렬화 하겠다는 의도를 표시
	private static final long serialVersionUID = -1503252402544036183L;	// 버전 관리를 위한 정보
	String name;
	String job;

	public Person() {}

	public Person(String name, String job) {
		this.name = name;
		this.job = job;
	}

	public String toString() {
		return name + ", " + job;
	}
}

public class SerializationTest {
	public static void main(String[] args) throws ClassNotFoundException {

		Person personAhn = new Person("안재용", "대표이사");
		Person personKim = new Person("김철수", "상무이사");

		try (FileOutputStream fos = new FileOutputStream("src/chap15/serial.out");
			 ObjectOutputStream oos = new ObjectOutputStream(fos)) {
			// personAhn과 personKim의 값을 파일에 씀 (직렬화)
			oos.writeObject(personAhn);
			oos.writeObject(personKim);

		} catch(IOException e) {
			e.printStackTrace();
		}

		try (FileInputStream fis = new FileInputStream("src/chap15/serial.out");
			 ObjectInputStream ois = new ObjectInputStream(fis)) {
			// personAhn과 personKim의 값을 파일에서 읽어 들임 (역직렬화)
			Person p1 = (Person)ois.readObject();
			Person p2 = (Person)ois.readObject();

			System.out.println(p1);
			System.out.println(p2);

		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
