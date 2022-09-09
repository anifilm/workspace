package chap15;

public class Ex11_PartiallyFilled {
    public static void main(String[] args) {
        int[][] arr = {  // [1]
            {11},
            {22, 33},
            {44, 55, 66}
        };

        // 배열의 구조대로 내용 출력
        for (int i = 0; i < arr.length; i++) {  // [2]
            for (int j = 0; j < arr[i].length; j++) {  // [3]
                System.out.print(arr[i][j] + "\t");  // [4]
            }
            System.out.println();
        }
    }
}
