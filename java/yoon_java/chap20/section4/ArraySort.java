// 배열의 정렬
import java.util.Arrays;

class ArraySort {
    public static void main(String[] args) {
        int[] arr1 = { 1, 5, 3, 2, 4 };
        double[] arr2 = { 3.3, 2.2, 5.5, 1.1, 4.4 };
        Arrays.sort(arr1);
        Arrays.sort(arr2);

        for (int n : arr1)
            System.out.print(n + "\t");
        System.out.println();

        for (double d : arr2)
            System.out.print(d + "\t");
        System.out.println();
    }
}
