/* 문제 04-1 [연산자의 활용과 연산의 특성 파악]
문제 4
다음 계산 결과를 출력하는 프로그램을 작성하되, 덧셈 연산의 횟수를 최소화하여 작성해 보자.
  3 + 6    3 + 6 + 9    3 + 6 + 9 + 12
 */
class Q04_1_4 {
    public static void main(String[] args) {
        int result = 3 + 6;
        System.out.println("3 + 6 = " + result);
        result += 9;
        System.out.println("3 + 6 + 9 = " + result);
        result += 12;
        System.out.println("3 + 6 + 9 + 12 = " + result);
    }
}
