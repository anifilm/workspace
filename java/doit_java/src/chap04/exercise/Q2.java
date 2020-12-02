/*
Q2
구구단을 짝수 단만 출력하도록 프로그램을 만들어 보세요.
(힌트 continue문을 사용합니다.)
 */
package chap04.exercise;

public class Q2 {
    public static void main(String args[]) {

        int dan;
        int times;

        for (dan = 2; dan <= 9; dan++) {
            if (dan % 2 != 0) continue;
            for (times = 1; times <= 9; times++)
                System.out.println(dan + " X " + times + " = " + dan * times);
            System.out.println();
        }
    }
}
