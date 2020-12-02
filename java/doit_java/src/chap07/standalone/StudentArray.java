/*
나 혼자 코딩!
객체 배열 만들어 활용하기
학생 클래스 Student를 만들고 멤버 변수로 studentId, name을 선언합니다. showStudentInfo()
메서드를 만들어 studentId와 name 값을 출력합니다. 그리고 StudentArray 클래스에서
Student 3명의 배열을 만들고 Student를 생성하여 저장한 후 for문을 사용하여 Student 정보를
출력합니다. 출력 결과가 다음과 같도록 Studnet와 StudentArray 클래스를 만들어 보세요.
 */
package chap07.standalone;

public class StudentArray {
    public static void main(String[] args) {

        Student[] school = new Student[6];
        school[0] = new Student(1001, "임채영");
        school[1] = new Student(1002, "정흥규");
        school[2] = new Student(1003, "서환길");
        school[3] = new Student(1004, "안재훈");
        school[4] = new Student(1005, "김태일");
        school[5] = new Student(1006, "문영수");

        for (int i = 0; i < school.length; i++)
            school[i].showStudentInfo();
    }
}
