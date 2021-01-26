// 논리 연산자 사용 시 주의할 점: Short-Circuit Evaluation (Lazy Evaluation)
class SCE {
    public static void main(String[] args) {
        int num1 = 0;
        int num2 = 0;
        boolean result;

        result = ((num1 += 10) < 0) && ((num2 += 10) > 0);  // false && ((num2 += 10) > 0), 오른편 연산을 진행하지 않음
        System.out.println("result = " + result);
        System.out.println("num1 = " + num1);
        System.out.println("num2 = " + num2);
        System.out.println();

        result = ((num1 += 10) > 0) || ((num2 += 10) > 0);  // true || ((num2 += 10) > 0), 오른편 연산을 진행하지 않음
        System.out.println("result = " + result);
        System.out.println("num1 = " + num1);
        System.out.println("num2 = " + num2);
    }
}
