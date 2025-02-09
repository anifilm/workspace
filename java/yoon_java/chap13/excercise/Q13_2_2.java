/* 문제 13-2 [2차원 배열의 구조 활용]
문제 2
다음 형태로 표현된 2차원 배열이 존재한다고 가정해 보자.
  1   2   3   1행
  4   5   6   2행
  7   8   9   3행

이러한 형태를 갖는 int형 2차원 배열이 인자로 전달되면, 다음의 형태로 배열의 구조를 변경시키는 메서드를 정의하자
  7   8   9   3행이 1행으로
  1   2   3   1행이 2행으로
  4   5   6   2행이 3행으로

물론 배열의 가로와 세로 길이에 상관없이 위와 같이 동작하도록 메서드를 정의해야 한다.
 */
class Q13_2_2 {
    public static void main(String[] args) {
        int[][] arr = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        System.out.println("1차 shift...");
        shiftTwoDArr(arr);
        showTwoDArr(arr);
        System.out.println();

        System.out.println("2차 shift...");
        shiftTwoDArr(arr);
        showTwoDArr(arr);
        System.out.println();

        System.out.println("3차 shift...");
        shiftTwoDArr(arr);
        showTwoDArr(arr);
        System.out.println();
    }

    public static void shiftTwoDArr(int[][] arr) {
        int[] lastLow = arr[arr.length - 1];
        for (int i = arr.length - 1; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = lastLow;
    }

    public static void showTwoDArr(int[][] arr) {
        for(int i = 0; i < arr.length; i++) {
            for(int j = 0; j < arr[i].length; j++)
                System.out.print(arr[i][j] + " ");
            System.out.println();
        }
    }
}
