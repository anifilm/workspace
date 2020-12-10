// 리포트 클래스 구현하기
package chap16.school.report;
import java.lang.reflect.Array;
import java.util.ArrayList;

import chap16.grade.BasicEvaluation;
import chap16.grade.GradeEvaluation;
import chap16.grade.MajorEvaluation;
import chap16.school.School;
import chap16.school.Score;
import chap16.school.Student;
import chap16.school.Subject;
import chap16.utils.Define;

public class GenerateGradeReport {
    School school = School.getInstance();
    public static final String TITLE = " 수강생 학점 \t\t\n";
    public static final String HEADER = " 이름 |  학번   | 필수과목 | 점수 \n";
    public static final String LINE = "----------------------------------\n";
    private StringBuffer buffer = new StringBuffer();

    public String getReport() {
        ArrayList<Subject> subjectList = school.getSubjectList();

        for (Subject subject : subjectList) {
            makeHeader(subject);
            makeBody(subject);
            makeFooter();
        }
        return buffer.toString();   // String으로 반환
    }

    public void makeHeader(Subject subject) {
        buffer.append(GenerateGradeReport.LINE);
        buffer.append("\t\t" + subject.getSubjectName());
        buffer.append(GenerateGradeReport.TITLE);
        buffer.append(GenerateGradeReport.HEADER);
        buffer.append(GenerateGradeReport.LINE);
    }

    public void makeBody(Subject subject) {
        ArrayList<Student> studentList = subject.getStudentList();

        for (int i = 0; i < studentList.size(); i++) {
            Student student = studentList.get(i);
            buffer.append(student.getStudentName());
            buffer.append(" | ");
            buffer.append(student.getStudentId());
            buffer.append(" | ");
            buffer.append(student.getMajorSubject().getSubjectName() + "\t");
            buffer.append(" | ");
            // 학생별 수강 과목 학점 계산
            getScoreGrade(student, subject.getSubjectId());

            buffer.append("\n");
            buffer.append(LINE);
        }
    }

    public void getScoreGrade(Student student, int subjectId) {
        ArrayList<Score> scoreList = student.getScoreList();
        int majorId = student.getMajorSubject().getSubjectId();
        // 학점 평가 클래스
        GradeEvaluation[] gradeEvaluations = {new BasicEvaluation(), new MajorEvaluation()};

        for (int i = 0; i < scoreList.size(); i++) {
            Score score = scoreList.get(i);
            // 학점 산출할 과목
            if (score.getSubject().getSubjectId() == subjectId) {
                String grade;
                // 필수 과목인 경우
                if (score.getSubject().getSubjectId() == majorId)
                    grade = gradeEvaluations[Define.SAB_TYPE].getGrade(score.getPoint());
                // 일반 과목인 경우
                else
                    grade = gradeEvaluations[Define.AB_TYPE].getGrade(score.getPoint());

                buffer.append(score.getPoint());
                buffer.append(": ");
                buffer.append(grade);
                buffer.append(" | ");
            }
        }
    }

    public void makeFooter() {
        buffer.append("\n");
    }
}
