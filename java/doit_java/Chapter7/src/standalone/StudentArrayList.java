/*
나 혼자 코딩!
ArrayList 활용하기
211쪽의 <나 혼자 코딩>에서 만든 Student 클래스를 이용하여 StudentArrayList 클래스를
만들고 ArrayList<Student> 자료형의 ArrayList를 선언합니다. ArrayList에 학생 3명을
추가하고 그 정보를 출력하세요. 출력 결과는 다음과 같습니다.
 */
package standalone;
import java.util.ArrayList;

public class StudentArrayList {
    public static void main(String[] args) {

        ArrayList<Student> school = new ArrayList<Student>();
        school.add(new Student(1001, "임채영"));
        school.add(new Student(1002, "정흥규"));
        school.add(new Student(1003, "서환길"));
        school.add(new Student(1004, "안재훈"));
        school.add(new Student(1005, "김태일"));
        school.add(new Student(1006, "문영수"));

        for (Student student : school) {
            student.showStudentInfo();
        }
    }
}
