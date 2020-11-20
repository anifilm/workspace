package standalone;

public class StudentArray {

    public static void main(String[] args) {

        Student[] school = new Student[6];

        school[0] = new Student(1001, "임채영");
        school[1] = new Student(1002, "정흥규");
        school[2] = new Student(1003, "서환길");
        school[3] = new Student(1004, "안재훈");
        school[4] = new Student(1005, "김태일");
        school[5] = new Student(1006, "문영수");

        for (int i = 0; i < school.length; i++) {
            school[i].showStudentInfo();
        }
    }
}
