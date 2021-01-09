/*
1. 2중 중첩을 사용하여 오른쪽과 같이 출력되도록 for, while, do-while 문으로 각각 프로그램을 작성하라.
  (1) for
  (2) while
  (3) do-while

 */
package chap03.section2.checktime;

public class CH1_3_do_while {
    public static void main(String[]args) {
        int i = 0;
        do {
            int j = 0;
            do {
                System.out.print("*");
                j++;
            } while (j < 5-i);
            System.out.println();
            i++;
        } while (i < 5);
    }
}
