/* 문제 13-2 [2차원 배열의 구조 활용]
문제 1
다음 메서드는 int형 1차원 배열에 저장된 값을 두 번째 매개변수로 전달된 값의 크기만큼 전부 증가시킨다.
  public static void addOneArr(int[] arr, int add) {
      for (int i = 0; i < arr.length; i++)
          arr[i] += add;
  }

위 메서드를 호출하는 형태로, int형 2차원 배열에 저장된 값 전부를 두 번째 매개변수로 전달된 값의 크기만큼 증가시키는
메서드를 다음의 형태로 정의하자.
  public static void addTwoArr(int[][] arr, int add) {
      // 이 안에서 addOneArr 메서드를 호출한다.
  }

 */
class Q13_2_1 {
    public static void main(String[] args) {
        int[][] arr2 = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
        };

        addTwoArr(arr2, 10);

        for (int i = 0; i < arr2.length; i++) {
            for (int j = 0; j < arr2[i].length; j++)
                System.out.print(arr2[i][j] + " ");
            System.out.println();
        }
    }

    public static void addOneArr(int[] arr, int add) {
        for (int i = 0; i < arr.length; i++)
            arr[i] += add;
    }

    public static void addTwoArr(int[][] arr, int add) {
        for (int i = 0; i < arr.length; i++) {
            addOneArr(arr[i], add);
        }
    }
}
