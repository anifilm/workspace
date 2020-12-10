// 테스트 클래스
package chap16.test;

import chap16.school.School;
import chap16.school.Score;
import chap16.school.Student;
import chap16.school.Subject;
import chap16.school.report.GenerateGradeReport;
import chap16.utils.Define;

import java.sql.Struct;

public class TestMain {
    School goodSchool = School.getInstance();
    Subject korean;
    Subject math;

    GenerateGradeReport gradeReport = new GenerateGradeReport();

    public static void main(String[] args) {
        TestMain test = new TestMain();

        test.createSubject();
        test.createStudent();

        String report = test.gradeReport.getReport();   // 성적 결과 생성
        System.out.println(report);
    }
    // 테스트 과목 생성
    public void createSubject() {
        korean = new Subject("국어", Define.KOREAN);
        math = new Subject("수학", Define.MATH);

        goodSchool.addSubject(korean);
        goodSchool.addSubject(math);
    }

    public void createStudent() {
        // 테스트 학생 생성
        Student student1 = new Student(181213, "임채영", korean);
        Student student2 = new Student(181518, "정흥규", math);
        Student student3 = new Student(171230, "서환길", korean);
        Student student4 = new Student(171255, "안재훈", korean);
        Student student5 = new Student(171590, "김태일", math);
        // goolSchool에 학생 추가
        goodSchool.addStudent(student1);
        goodSchool.addStudent(student2);
        goodSchool.addStudent(student3);
        goodSchool.addStudent(student4);
        goodSchool.addStudent(student5);
        // 국어 과목을 수강하는 학생 등록
        korean.register(student1);
        korean.register(student2);
        korean.register(student3);
        korean.register(student4);
        korean.register(student5);
        // 수학 과목을 수강하는 학생 등록
        math.register(student1);
        math.register(student2);
        math.register(student3);
        math.register(student4);
        math.register(student5);
        // 각 학생의 과목 점수 추가
        addScoreForStudent(student1, korean, 95);
        addScoreForStudent(student1, math, 56);

        addScoreForStudent(student2, korean, 95);
        addScoreForStudent(student2, math, 95);

        addScoreForStudent(student3, korean, 100);
        addScoreForStudent(student3, math, 88);

        addScoreForStudent(student4, korean, 89);
        addScoreForStudent(student4, math, 95);

        addScoreForStudent(student5, korean, 85);
        addScoreForStudent(student5, math, 56);
    }

    public void addScoreForStudent(Student student, Subject subject, int point) {
        Score score = new Score(student.getStudentId(), subject, point);
        student.addSubjectScore(score);
    }
}
