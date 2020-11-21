/*
Q3
배열 길이가 5인 정수형 배열을 선언하고, 1 ~ 10 중 짝수만을 배열에 저장한 후 그 합을 출력
하세요.
 */
package exercise;
import java.util.Arrays;

public class Q3 {
    public static void main(String[] args) {
        
        int[] num = new int[5];
        int j = 0;
        int sum = 0;

        // 배열에 짝수를 할당
        for (int i = 1; i <= 10; i++) {
            if (i % 2 == 0) {
                num[j] = i;
                j++;
            }
        }
        // 배열을 내용을 출력 Arrays.toString()
        System.out.println(Arrays.toString(num));

        for (int i = 0; i < num.length; i++)
            sum += num[i];
        System.out.println("1부터 10까지 짝수의 합은: " + sum);
    }
}