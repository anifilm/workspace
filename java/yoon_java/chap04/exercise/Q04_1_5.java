/* 문제 04-1 [연산자의 활용과 연산의 특성 파악]
문제 5
변수 n1, n2, n3가 다음과 같을 때 n1 > n2 > n3 이면 true, 아니면 false를 출력하는 프로그램을 작성해 보자.
  n1 = {(25 + 5) + (36 / 4) - 72} x 5
  n2 = {(25 x 5) + (36 - 4) + 71} / 4
  n3 = (128 / 4) x 2
 */
class Q04_1_5 {
    public static void main(String[] args) {
        int n1 = ((25 + 5) + (36 / 4) - 72) * 5;
        int n2 = ((25 * 5) + (36 - 4) + 71) / 4;
        int n3 = (128 / 4) * 2;
        boolean result;

        result = (n1 > n2) && (n2 > n3);
        System.out.println("n1 > n2 > n3 : " + result);
    }
}
