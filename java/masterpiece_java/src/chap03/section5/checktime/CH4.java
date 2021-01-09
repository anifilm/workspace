/*
4. 다음 그림과 같은 구조와 값을 갖는 비정방형 배열을 선언하라.
  0   1   2   3
  4
  5
  6   7   8   9

 */
package chap03.section5.checktime;

public class CH4 {
    public static void main(String[] args) {
        int[][] intArray = new int[4][];  // 각 행의 레퍼런스 배열 생성
        intArray[0] = new int[4];  // 첫째 행의 정수 3개의 배열 생성
        intArray[1] = new int[1];  // 둘째 행의 정수 2개의 배열 생성
        intArray[2] = new int[1];  // 셋째 행의 정수 3개의 배열 생성
        intArray[3] = new int[4];  // 넷째 행의 정수 2개의 배열 생성

        int initNum = 0;
        for (int i = 0; i < intArray.length; i++) {  // 행에 대한 반복
            for (int j = 0; j < intArray[i].length; j++)  // 열에 대한 반복
                intArray[i][j] = initNum++;
        }

        for (int i = 0; i < intArray.length; i++) {
            for (int j = 0; j < intArray[i].length; j++)
                System.out.print(intArray[i][j] + " ");
            System.out.println();  // 다음 줄로 넘어가기
        }
    }
}
