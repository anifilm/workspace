/*
3. 1부터 100까지 3의 배수의 합을 구하는 프로그램을 작성하라.

 */
package chap03.section2.checktime;

public class CH3 {
    public static void main(String[]args) {
        int sum = 0;

        for (int i = 1; i <= 100; i++) {
            if (i % 3 == 0)
                sum += i;
        }
        System.out.println("1부터 100까지 3의 배수의 합은 " + sum + "입니다.");
    }
}
