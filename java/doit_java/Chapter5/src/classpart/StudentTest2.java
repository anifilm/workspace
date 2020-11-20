// 참조 값 출력하기
package classpart;

public class StudentTest2 {
    public static void main(String args[]) {

        Student student1 = new Student();   // 첫번재 학생 생성
        student1.studentName = "임채영";

        Student student2 = new Student();   // 두번째 학생 생성
        student2.studentName = "정흥규";

        System.out.println(student1);       // 참조 변수값 출력
        System.out.println(student2);
    }
}

/*

힙 메모리에 생성된 인스턴스의 메모리 주소는 참조 변수에 저장됩니다.
출력 내용을 확인해 보면 '클래스 이름@주소 값'입니다. 여기에 나오는 주소 값은 다른말로
해시코드(hash code) 값이라고도 합니다.

 */