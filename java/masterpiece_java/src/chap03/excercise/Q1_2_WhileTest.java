/*
Q1
다음 프로그램에 대해 물음에 답하라.
  (1) 무엇을 계산하는 코드이며 실행 결과 출력되는 내용은?
      >> 0부터 99까지 2의 배수를 더하여 결과를 출력
  (2) 아래의 코드를 main() 메서드로 만들고 WhileTest 클래스로 완성하라.
  (3) for 문을 이용하여 동일하게 실행되는 ForTest 클래스를 작성하라.
  (4) do-while 문을 이용하여 동일하게 실행되는 DoWhileTest 클래스를 작성하라.
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
