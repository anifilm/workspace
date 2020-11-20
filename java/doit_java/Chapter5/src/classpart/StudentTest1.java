// 인스턴스 여러 개 생성하기
package classpart;

public class StudentTest1 {
    public static void main(String args[]) {

        Student student1 = new Student();   // 첫번재 학생 생성
        student1.studentName = "임채영";
        System.out.println(student1.studentName);

        Student student2 = new Student();   // 두번재 학생 생성
        student2.studentName = "정흥규";
        System.out.println(student2.studentName);
    }
}