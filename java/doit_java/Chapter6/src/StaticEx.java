class Student1 {
    private static int serialNum = 1000;
    public int studentId;
    public String studentName;
    public int grade;
    public String address;

    public Student1() {
        serialNum++;
        studentId = serialNum;
    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }

    public static int getSerialNum() {
        return serialNum;
    }

    public static void setSerialNum(int serialNum) {
        Student1.serialNum = serialNum;
    }
}

class StudentTest {
    public static void main(String[] args) {

        Student1 studentLim = new Student1();
        studentLim.setStudentName("임채영");
        System.out.println(Student1.getSerialNum());
        System.out.println(studentLim.studentName + " 학번: " + studentLim.studentId);

        Student1 studentJung = new Student1();
        studentJung.setStudentName("정흥규");
        System.out.println(Student1.getSerialNum());
        System.out.println(studentJung.studentName + " 학번: " + studentJung.studentId);
    }
}
