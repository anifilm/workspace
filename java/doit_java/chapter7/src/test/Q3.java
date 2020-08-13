package test;

import java.util.Arrays;

public class Q3 {

    public static void main(String[] args) {
        
        int[] num = new int[5];
        int sum = 0;
        int j = 0;

        for (int i = 1; i <= 10; i++) {

            if (i % 2 == 0) {
                num[j] = i;
                j++;
            }
        }
        System.out.println(Arrays.toString(num));
        
        for (int i = 0; i < num.length; i++) {
            sum += num[i];
        }
        System.out.println("array num의 합은: " + sum);
    }
}