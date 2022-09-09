package chap15;

public class Ex05_ArrayInMethod {
    public static void main(String[] args) {
        int[] arr = makeIntArray(5);  // [1]

        int sum = sumOfArray(arr);  // [2]

        System.out.println(sum);
    }

    public static int[] makeIntArray(int len) {  // [3]
        int[] arr = new int[len];  // [4]
        for (int i = 0; i < len; i++) {
            arr[i] = i;
        }
        return arr;  // [5]
    }

    public static int sumOfArray(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {  // [6]
            sum += arr[i];  // [7]
        }
        return sum;
    }
}
