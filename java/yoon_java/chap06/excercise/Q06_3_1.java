/* 문제 06-3 [재귀 메서드의 정의]
문제 1
인자로 정수 n을 전달받아서 2의 n승을 계산하여 반환하는 메서드를 재귀의 형태로 정의하고, 이를 호출하는 main 메서드를
정의해 보자.
 */
class Q06_3_1 {
    public static void main(String[] args) {
        System.out.println("2의 5승의 값: " + powOfTwo(5));
        System.out.println("2의 7승의 값: " + powOfTwo(7));
    }

    public static int powOfTwo(int n) {
        if (n == 0)
            return 1;
        return 2 * powOfTwo(n - 1);
    }
}
