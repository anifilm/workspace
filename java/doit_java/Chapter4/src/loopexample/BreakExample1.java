// break문
package loopexample;

public class BreakExample1 {
    public static void main(String args[]) {

        int num;
        int sum = 0;

        for (num = 0; num < 100; num++) {   // 합한 값이 100보다 클 때 종료
            sum += num;
            if (sum >= 10)
                break;
        }
        
        System.out.println("num: " + num);
        System.out.println("sum: " + sum);
    }
}