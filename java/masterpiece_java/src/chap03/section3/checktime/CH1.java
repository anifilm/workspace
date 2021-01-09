/*
1. 10개의 정수를 저장하는 배열 tenArray를 선언하고 생성하는 코드를 작성하라.

 */
package chap03.section3.checktime;

public class CH1 {
    public static void main(String[] args) {
        int[] tenArray = new int[10];
        for (int i = 0; i < tenArray.length; i++)
            tenArray[i] = i + 1;

        for (int n : tenArray) {
            System.out.print(n + " ");
        }
        System.out.println();
    }
}
