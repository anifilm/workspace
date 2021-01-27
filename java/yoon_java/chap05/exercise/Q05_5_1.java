/* 문제 05-5 [for문의 활용]
문제 1
1부터 10까지의 곱의 결과를 출력하는 프로그램을 for문을 이용해서 작성해 보자.
 */
class Q05_5_1 {
    public static void main(String[] args) {
        int result = 1;
        for (int i = 1; i <= 10; i++)
            result *= i;
        System.out.println("1부터 10까지 곱한 결과는 " + result);
    }
}
