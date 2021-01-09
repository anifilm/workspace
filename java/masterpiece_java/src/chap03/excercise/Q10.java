/*
Q10
4x4의 2차원 배열을 만들고 이곳에 1에서 10까지 범위의 정수를 10개만 랜덤하게 생성하여 임의의 위치에 삽입하라. 동일한 정수가 있어도 상관없다.
나머지 6개의 숫자는 모두 0이다. 만들어진 2차원 배열을 화면에 출력하라.
  (실행 결과 생략...)

 */
package chap03.excercise;

public class Q10 {
    public static void main(String[] args) {
        int[][] intArray = new int[4][4];
        for (int i = 0; i < 10; i++) {
            int x = (int)(Math.random() * 4);
            int y = (int)(Math.random() * 4);
            intArray[x][y] = (int)(1 + Math.random() * 10);
        }

        for (int i = 0; i < intArray.length; i++) {
            for (int j = 0; j < intArray[i].length; j++)
                System.out.printf("%-3d ", intArray[i][j]);
            System.out.println();
        }
    }
}
