/* 문제 05-6 [continue문과 break문의 활용]
문제 2
자연수 1부터 시작해서 모든 홀수를 더해 나간다. 그리고 그 합이 언제(몇번 더했을 때) 1000을 넘어서는지,
그리고 1000을 넘어선 값은 얼마가 되는지 계산하여 출력하는 프로그램을 작성해 보자.
 */
class Q05_6_2 {
    public static void main(String[] args) {
        int num, sum = 0;

        for (num = 1; ; num++) {
            if (num % 2 != 0)
                sum += num;

            if (sum > 1000) {
                System.out.println(num + " 더할 때 1000을 넘는다.");
                System.out.println("초과된 값: " + sum);
                break;
            }
        }
    }
}
