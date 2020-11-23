import java.util.ArrayList;

class Student {
    int studentID;
    String studentName;
    ArrayList<Subject> subjectList;

    public Student(int studentID, String studentName) {
        this.studentID = studentID;
        this.studentName = studentName;
        subjectList = new ArrayList<Subject>(); // ArrayList 생성
    }

    public void addSubject(String name, int score) {
        Subject subject = new Subject();        // Subject 생성
        subject.setName(name);                  // 과목 이름 추가
        subject.setScorePoint(score);           // 점수 추가
        subjectList.add(subject);               // 배열에 저장
    }

    public void showStudentInfo() {
        int total = 0;
        for (Subject s : subjectList) {
            total += s.getScorePoint();
            System.out.println("학생 " + studentName + "의 " + s.getName() + " 과목 성적은 " + s.getScorePoint() + " 입니다.");
        }
        System.out.println("학생 " + studentName + "의 총점은 " + total + " 입니다.");
    }
}

class Subject {
    private String name;        // 과목 이름
    private int scorePoint;     // 과목 점수

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getScorePoint() {
        return scorePoint;
    }

    public void setScorePoint(int scorePoint) {
        this.scorePoint = scorePoint;
    }
}

class StudentTest {
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