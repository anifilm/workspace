/* 문제 05-4 [while문과 do ~ while문의 활용]
문제 3
1000 이하 자연수 중에서 2의 배수이자 7의 배수인 수를 출력하고, 그 수들의 합을 구해서 출력하는 프로그램을 while문을
이용해서 작성해 보자.
 */
class Q05_4_3 {
    public static void main(String[] args) {
        int n = 1, sum = 0;

        while (n < 1000) {
            if ((n % 2) == 0 && (n % 7) == 0) {
                System.out.print(n + " ");
                sum += n;
            }
            n++;
        }
        System.out.println();
        System.out.println("1000이하의 자연수 중에서 2의 배수이자 7의 배수인 수의 합은 " + sum);
    }
}
