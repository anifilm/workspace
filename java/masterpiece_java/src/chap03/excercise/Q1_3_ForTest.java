/*
Q1
다음 프로그램에 대해 물음에 답하라.
  (3) for 문을 이용하여 동일하게 실행되는 ForTest 클래스를 작성하라.

 */
package chap03.excercise;

public class Q1_3_ForTest {
    public static void main(String[] args) {
        int sum = 0;
        for (int i = 0; i < 100; i += 2)
            sum += i;
        System.out.println(sum);
    }
}
