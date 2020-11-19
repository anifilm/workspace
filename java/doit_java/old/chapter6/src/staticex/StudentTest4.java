package staticex;

public class StudentTest4 {

    public static void main(String[] args) {

        Student4 studentLim = new Student4();
        studentLim.setStudentName("임채영");
        System.out.println(Student4.getSerialNum());        // serialNum 값을 가져오기 위해 get() 메서드를 클래스 이름으로 직접 호출
        System.out.println(studentLim.studentName + " 학번: " + studentLim.studentID);

        Student4 studentJung = new Student4();
        studentJung.setStudentName("정흥규");
        System.out.println(Student4.getSerialNum());        // serialNum 값을 가져오기 위해 get() 메서드를 클래스 이름으로 직접 호출
        System.out.println(studentJung.studentName + " 학번: " + studentJung.studentID);
    }
}