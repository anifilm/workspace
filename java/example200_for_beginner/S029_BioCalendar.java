// 029 static 메서드로 신체 지수 구하기
public class S029_BioCalendar {
    // 상수, 상수값은 변경할 수 없다.
    public static final int PHYSICAL = 23;  // 상수 (개발자 정의)

    // static 메서드 선언
    public static double getBioRhythm(long days, int index, int max) {
        return max * Math.sin((days % index) * 2 * Math.PI / index);
    }

    public static void main(String[] args) {

        int days = 1200;
        // 메서드 호출
        double phyval = getBioRhythm(days, PHYSICAL, 100);

        System.out.printf("나의 신체 지수 %1$.2f 입니다.\n", phyval);
    }
}
