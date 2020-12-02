// for문 예제
package chap04.section2.loopexample;

public class ForExample {
    public static void main(String args[]) {

        int i;
        int sum;

        // for문에서 가장 자주 사용하는 변수 이름은 i입니다. 주소 횟수를 표현합니다.
        for (i = 1, sum = 0; i <= 10; i++)
            sum += i;

        System.out.println("1부터 10까지의 합은 " + sum + "입니다.");
    }
}
