/* 문제 13-1 [배열과 메서드]
int형 1차원 배열을 매개변수로 전달받아서 배열에 저장된 최대값, 최소값을 찾아서 반환하는 메서드를 각각 다음의 형태로
정의하자.
  public static int minValue(int[] arr)  // 최소값 반환
  public static int maxValue(int[] arr)  // 최대값 반환

단 반복문을 사용할 때 minValue의 정의에서는 일반적인 for문을 사용하고 maxValue 정의에서는 향상된 for문(enhanced for문)
을 사용하기로 하자.
 */
class Q13_1 {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};

        System.out.println("minValue: " + minValue(arr));
        System.out.println("maxValue: " + maxValue(arr));
    }

    public static int minValue(int[] arr) {
        int min = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (min > arr[i]) min = arr[i];
        }
        return min;
    }

    public static int maxValue(int[] arr) {
        int max = arr[0];
        for (int e : arr)
            if (max < e) max = e;

        return max;
    }
}
