package chap15;

import java.util.Arrays;  // [1]

public class Ex13_ArrayEquals {
    public static void main(String[] args) {
        int[] arr1 = {1, 2, 3, 4, 5};  // [2]
        int[] arr2 = Arrays.copyOf(arr1, arr1.length);  // [3]

        boolean bCheck = Arrays.equals(arr1, arr2);  // [4]
        System.out.println(bCheck);
    }
}
