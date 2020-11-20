/*
Q4
반복문을 사용하여 다음 모양을 출력하는 프로그램을 만들어 보세요.

          *
        * * *
      * * * * *
    * * * * * * *
 */
package exercise;

public class Q4_Review {
    public static void main(String args[]) {

        int i, j;

        for (i = 1; i <= 4; i++) {
            // 공백 문자를 출력한다. (공백 출력 개수 3, 2, 1, 0개 순으로 줄어든다)
            for (j = 0; j < 4 - i; j++)
                System.out.print("  ");
            // '*' 문자를 출력한다. (문자는 1, 3, 5, 7개 순으로 출력하면 된다)
            for (j = 1; j < i * 2; j++)
                System.out.print(" *");
            System.out.println();
        }
    }
}