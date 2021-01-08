/*
Q1
다음 프로그램에 대해 물음에 답하라.
  (2) 아래의 코드를 main() 메서드로 만들고 WhileTest 클래스로 완성하라.

 */
package chap03.excercise;

public class Q1_2_WhileTest {
    public static void main(String[] args) {
        int sum = 0, i = 0;
        while (i < 100) {
            sum += i;
            i += 2;
        }
        System.out.println(sum);
    }
}
