/*
Q1
다음 프로그램에 대해 물음에 답하라.
  (4) do-while 문을 이용하여 동일하게 실행되는 DoWhileTest 클래스를 작성하라.

 */
package chap03.excercise;

public class Q1_4_DoWhileTest {
    public static void main(String[] args) {
        int sum = 0, i = 0;
        do {
            sum += i;
            i += 2;
        } while (i < 100);
        System.out.println(sum);
    }
}
