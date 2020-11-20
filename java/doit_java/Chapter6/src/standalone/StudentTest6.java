package standalone;

public class StudentTest6 {
    public static void main(String[] args) {

        Student3 studentLim = new Student3();
        studentLim.setStudentName("임채영");
        studentLim.setCardNum();    // 임채영 카드 발급
    //  System.out.println(studentLim.getSerialNum());
    //  System.out.println(studentLim.getCardNum());
        System.out.print(studentLim.studentName);
        System.out.print(" 학번: " + studentLim.studentID);
        System.out.println(" 카드번호: " + studentLim.getCardNum());

        Student3 studentJung = new Student3();
        studentJung.setStudentName("정흥규");
        studentJung.setCardNum();   // 정흥규 카드 발급
    //  System.out.println(studentJung.getSerialNum());
    //  System.out.println(studentJung.getCardNum());
        System.out.print(studentJung.studentName);
        System.out.print(" 학번: " + studentJung.studentID);
        System.out.println(" 카드번호: " + studentJung.getCardNum());
    }
}