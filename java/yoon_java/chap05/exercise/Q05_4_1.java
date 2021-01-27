/* 문제 05-4 [while문과 do ~ while문의 활용]
문제 1
1부터 99까지의 합을 구하는 프로그램을 작성하되 while문을 이용해서 작성해 보자.
 */
class Q05_4_1 {
    public static void main(String[] args) {
        int n = 1, sum = 0;

        while (n < 100) {
            sum += n;
            n++;
        }
        System.out.println("1부터 99까지의 합은 " + sum);
    }
}
