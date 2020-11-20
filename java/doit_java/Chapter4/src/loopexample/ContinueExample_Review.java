/*
1분 복습
1부터 100까지 수 중에서 3의 배수만 출력하는 코드를 완성해 보세요.
 */
package loopexample;

public class ContinueExample_Review {
    public static void main(String args[]) {

        int total = 0;
        int num;

        for (num = 1; num <= 100; num++) {
            if (num % 3 != 0)
                continue;
            System.out.println("3의 배수를 출력: " + num);
        }
    }
}