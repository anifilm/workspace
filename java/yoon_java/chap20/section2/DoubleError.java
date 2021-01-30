// 오차 없는 실수의 표현을 위한 java.math.BigDecimal 클래스
class DoubleError {
    public static void main(String[] args) {
        double d1 = 1.6;
        double d2 = 0.1;
        System.out.println("덧셈 결과: " + (d1 + d2));
        System.out.println("곱셈 결과: " + (d1 * d2));
    }
}
