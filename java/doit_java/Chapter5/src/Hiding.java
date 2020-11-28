class Student {
    int studentId;
    private String studnetName;
    int grede;
    String address;

    public String getStudnetName() {
        return studnetName;
    }

    public void setStudnetName(String studnetName) {
        this.studnetName = studnetName;
    }
}

class StudentTest {
    public static void main(String[] args) {

        Student studentLim = new Student();
        studentLim.setStudnetName("임채영");

        System.out.println(studentLim.getStudnetName());
    }
}
