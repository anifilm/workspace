// 학생 성적 출력하기
package arraylist;

public class StudentTest {
    public static void main(String[] args) {
        
        Student studentLim = new Student(1001, "임채영");
        studentLim.addSubject("국어", 100);
        studentLim.addSubject("수학", 50);

        Student studentJung = new Student(1002, "정흥규");
        studentJung.addSubject("국어", 70);
        studentJung.addSubject("수학", 85);
        studentJung.addSubject("영어", 100);

        studentLim.showStudentInfo();
        System.out.println("\n========================================");
        studentJung.showStudentInfo();
    }
}