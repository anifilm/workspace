// 이차원 배열의 길이 출력하기
package chap07.section2.array;

public class TwoDimention2 {
    public static void main(String[] args) {

        int[][] arr = new int[2][3];    // 2행 3열 이차원 배열 선언

        for (int i = 0; i < arr.length; i++) {      // arr.length 행 길이
            for (int j = 0; j < arr[i].length; j++) // arr[i].length 열 길이
                System.out.println(arr[i][j]);
            System.out.println();
        }

        System.out.println(arr.length);     // 행 길이
        System.out.println(arr[0].length);  // 열 길이
    }
}
