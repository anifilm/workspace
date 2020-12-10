// 과목 클래스 구현
package chap16.school;
import java.util.ArrayList;
import chap16.utils.Define;    // 프로그램 전반에서 사용하는 상수 클래스

public class Subject {
    private String subjectName; // 과목 이름
    private int subjectId;      // 과목 고유 번호
    private int gradeType;      // 학점 평가 정책

    // 이 과목을 수강 신청한 학생 리스트. register() 메서드를 호출하면 이 리스트에 추가됨
    private ArrayList<Student> studentList = new ArrayList<Student>();

    public Subject(String subjectName, int subjectId) {
        this.subjectName = subjectName;
        this.subjectId = subjectId;
        this.gradeType = Define.AB_TYPE;    // 학점 평가 정책은 기본으로 A, B 방식을 사용함
    }

    public String getSubjectName() {
        return subjectName;
    }

    public void setSubjectName(String subjectName) {
        this.subjectName = subjectName;
    }

    public int getSubjectId() {
        return subjectId;
    }

    public void setSubjectId(int subjectId) {
        this.subjectId = subjectId;
    }

    public int getGradeType() {
        return gradeType;
    }

    public void setGradeType(int gradeType) {
        this.gradeType = gradeType;
    }

    public ArrayList<Student> getStudentList() {
        return studentList;
    }

    public void setStudentList(ArrayList<Student> studentList) {
        this.studentList = studentList;
    }
    // 수강 신청 메서드
    public void register(Student student) {
        studentList.add(student);
    }
}
