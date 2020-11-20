/*
1분 복습
while문을 사용해 1부터 50까지 더하는 프로그램입니다. 코드를 완성해 보세요.
 */
package loopexample;

public class WhileExample_Review {
    public static void main(String args[]) {

        int num = 1;
        int sum = 0;

        while (num <= 50) {
            sum += num;
            num++;
        }

        System.out.println("1부터 50까지의 합은 " + sum + "입니다.");
    }
}