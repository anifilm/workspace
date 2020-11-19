package classpart;

public class StudentTest2 {

    public static void main(String args[]) {

        Student student1 = new Student();     // 첫번재 학생 생성
        student1.studentName = "임채영";

        Student student2 = new Student();     // 두번재 학생 생성
        student2.studentName = "정흥규";

        System.out.println(student1);       // 참조 변수값 출력
        System.out.println(student2);
    }
}