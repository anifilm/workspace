// 030 멤버 메서드를 이용하여 신체 지수 구하기
public class S030_BioCalendar {
    // 상수, 상수값은 변경할 수 없다.
    public static final int PHYSICAL = 23;  // 상수 (개발자 정의)

    // 멤버 메서드 선언 (non static)
    public double getBioRhythm(long days, int index, int max) {
        return max * Math.sin((days % index) * 2 * Math.PI / index);
    }

    public static void main(String[] args) {

        S030_BioCalendar bio = new S030_BioCalendar();  // 객체를 생성
        int days = 1200;
        // 멤버 메서드 호출
        double phyval = bio.getBioRhythm(days, PHYSICAL, 100);

        System.out.printf("나의 신체 지수 %1$.2f 입니다.\n", phyval);
    }
}
