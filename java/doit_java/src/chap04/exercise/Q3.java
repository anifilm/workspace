/*
Q3
구구단을 단보다 곱하는 수가 작거나 같은 경우까지만 출력하도록 프로그램을 만들어 보세요.
(힌트 break문을 사용합니다.)
 */
package chap04.exercise;

public class Q3 {
    public static void main(String args[]) {

        int dan;
        int times;

        for (dan = 2; dan <= 9; dan++) {
            for (times = 1; times <= 9; times++) {
                if (times > dan)
                    break;
                System.out.println(dan + " X " + times + " = " + dan * times);
            }
            System.out.println();
        }
    }
}
