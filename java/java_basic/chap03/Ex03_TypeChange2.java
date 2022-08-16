class Ex03_TypeChange2 {
    public static void main(String[] args) {
        int num1 = 2147483647;
        int num2 = 2147483648;  // 오류
        long num3 = 2147483648; // 오류
        long num4 = 2147483648L;

        float num5 = 1.0;  // 오류
        float num6 = 1.0f;

        double num7 = 30;  // int -> double 자동 형변환
    }
}
