package alone;

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