// while문을 활용하여 1부터 10까지 더하기
package chap04.section2.loopexample;

public class WhileExample {
    public static void main(String args[]) {

        int num = 1;
        int sum = 0;

        while (num <= 10) {
            sum += num;
            num++;
        }
        System.out.println("1부터 10까지의 합은 " + sum + "입니다.");
    }
}
