// 배열의 초기화와 배열의 복사
import java.util.Arrays;

class ArrayUtils2 {
    public static void main(String[] args) {
        int[] arr1 = new int[10];
        Arrays.fill(arr1, 7);  // 배열 arr1을 7로 초기화
        showArray(arr1);

        // System.arraycopy()
        int[] arr2 = new int[10];
        System.arraycopy(arr1, 0, arr2, 3, 4);  // 배열 arr1을 arr2로 부분 복사
        showArray(arr2);

        // Object.clone()
        int[] arr3 = new int[10];
        arr3 = arr1.clone();  // 배열 arr1의 내용을 그대로 배열 arr3에 복사 (깊은 복사)
        showArray(arr3);

        // Arrays.copyof()
        int[] arr4 = new int[10];
        arr4 = Arrays.copyOf(arr1, arr1.length);
        showArray(arr4);

        // Arrays.copyofRange()
        int[] arr5 = new int[10];
        arr5 = Arrays.copyOfRange(arr2, 2, 8);
        showArray(arr5);
    }

    public static void showArray(int[] arr) {
        for (int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

}
