// 오차 없는 실수의 표현을 위한 java.math.BigDecimal 클래스
import java.math.BigDecimal;

class WowBigDecimal {
    public static void main(String[] args) {
        BigDecimal d1 = new BigDecimal("1.6");
        BigDecimal d2 = new BigDecimal("0.1");
        System.out.println("덧셈 결과: " + d1.add(d2));
        System.out.println("곱셈 결과: " + d1.multiply(d2));
    }
}
