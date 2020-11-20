/*
1분 복습
조금 전에 실습한 중첩 반복문 예제를 수정해 구구단 3단부터 7단까지만 출력해 보세요.
 */
package loopexample;

public class NestedLoop_Review {
    public static void main(String args[]) {

        int dan;
        int times;

        for (dan = 3; dan <= 7; dan++) {
            for (times = 1; times <= 9; times++) {
                System.out.println(dan + " X " + times + " = " + dan * times);        
            }
            System.out.println();   // 한 줄 띄워서 출력
        }
    }
}