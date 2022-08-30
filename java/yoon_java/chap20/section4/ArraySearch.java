// 배열의 탐색
import java.util.Arrays;

class ArraySearch {
    public static void main(String[] args) {
        int[] arr = { 33, 55, 11, 44, 22 };
        Arrays.sort(arr);  // 탐색 이전에 정렬이 선행되어야 한다.

        for (int n : arr)
            System.out.print(n + "\t");
        System.out.println();

        int idx = Arrays.binarySearch(arr, 33);  // 배열 arr에서 33을 찾아라. (이진 탐색)
        System.out.println("Index of 33: " + idx);
    }
}

/*

public static int binarySearch(Object[] a, Object key)

 */
