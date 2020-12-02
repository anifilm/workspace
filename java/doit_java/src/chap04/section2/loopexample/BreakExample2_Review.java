/*
1분 복습
1부터 더했을 때 그 합이 500이 넘는 자연수는 얼마인가요? 다음 코드의 빈칸을 채우고 직접
프로그램을 실행해 답을 확인해 보세요.
 */
package chap04.section2.loopexample;

public class BreakExample2_Review {
    public static void main(String args[]) {

        int num;
        int sum = 0;

        for (num = 1; ; num++) {
            sum += num;
            if (sum >= 500)     // sum이 500보다 크거나 같을 때 (종료 조건)
                break;          // 반복문 중단
        }
        System.out.println("num: " + num);
        System.out.println("sum: " + sum);
    }
}
