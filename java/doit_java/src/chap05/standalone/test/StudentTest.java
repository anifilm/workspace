/*
나혼자 코딩!
접근 제어자 연습하기
앞에서 만든 Student와 StudentTest 클래스를 사용하여 접근 제어자를 테스트해 봅시다.
Chapter5 프로젝트 폴더 아래에 test 패키지를 만들고 그것으로 StudentTest 클래스를 옮깁
니다. 그러면 StudentTest 클래스에 오류가 발생합니다. Studnet 클래스 멤버 변수에 접근
제어자를 변경하여 오류를 수정하세요.
 */
package chap05.standalone.test;
import chap05.standalone.Student;

public class StudentTest {
	public static void main(String[] args) {

		Student studentLim = new Student();
		studentLim.setStudentName("임채영");

		System.out.println(studentLim.getStudentName());
	}
}
