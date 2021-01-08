/*
Q9
4x4의 2차원 배열을 만들고 이곳에 1에서 10까지 범위의 정수를 랜덤하게 생성하여 정수 16개를 배열에 저장하고, 2차원 배열을 화면에 출력하라.
  (실행 결과 생략...)

 */
package chap03.excercise;

public class Q9 {
    public static void main(String[] args) {
        int intArray[][] = new int[4][4];

        for (int i = 0; i < intArray.length; i++) {
            for (int j = 0; j < intArray[i].length; j++)
                intArray[i][j] = (int)(1 + Math.random() * 10);
        }

        for (int i = 0; i < intArray.length; i++) {
            for (int j = 0; j < intArray[i].length; j++)
                System.out.printf("%-3d ", intArray[i][j]);
            System.out.println();
        }
    }
}
