// 027 연산자를 이용하여 바이오리듬 값 구하기
public class S027_BioCalendar {
    // 상수, 상수값은 변경할 수 없다.
    public static final int PHYSICAL = 23;  // 상수 (개발자 정의)

    public static void main(String[] args) {

        int index = PHYSICAL;   // 상수 값을 변수에 대입
        int days = 1200;
        // Math.PI 3.14에서 정의되어 있는 상수
        double vals = (days % index) * 2 * Math.PI / index;

        System.out.println(Math.toDegrees(vals) + " 도");
    }
}
