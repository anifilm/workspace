// 배열의 비교
import java.util.Arrays;

class ArrayEquals {
    public static void main(String[] args) {
        int[] arr1 = { 1, 2, 3, 4, 5 };
        int[] arr2 = Arrays.copyOf(arr1, arr1.length);
        System.out.println(Arrays.equals(arr1, arr2));
    }
}

/*

public static boolean equals(int[] a1, int[] a2)
  -> 매개변수 a1과 a2로 전달된 배열의 내용을 비교하여 true 또는 false 반환

 */
