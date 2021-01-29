// 배열의 초기화와 배열의 복사
import java.util.Arrays;

class ArrayUtils {
    public static void main(String[] args) {
        int[] arr1 = new int[10];
        int[] arr2 = new int[10];

        Arrays.fill(arr1, 7);  // 배열 arr1을 7로 초기화
        System.arraycopy(arr1, 0, arr2, 3, 4);  // 배열 arr1을 arr2로 부분 복사

        for (int i = 0; i < arr1.length; i++)
            System.out.print(arr1[i] + " ");
        System.out.println();

        for (int i = 0; i < arr2.length; i++)
            System.out.print(arr2[i] + " ");
        System.out.println();
    }
}
