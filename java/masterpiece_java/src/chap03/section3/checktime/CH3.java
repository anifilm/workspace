/*
3. 배열 tenArray에 1~10까지 저장한 뒤, 모든 요소의 값을 더하여 출력하는 프로그램을 작성하라.

 */
package chap03.section3.checktime;

public class CH3 {
    public static void main(String[] args) {
        int tenArray[] = new int[10];
        int sum = 0;

        for (int i = 0; i < tenArray.length; i++)
            tenArray[i] = i + 1;

        for (int n : tenArray)
            sum += n;
        System.out.println("tenArray 배열의 모든 요소의 값은 " + sum);
    }
}
