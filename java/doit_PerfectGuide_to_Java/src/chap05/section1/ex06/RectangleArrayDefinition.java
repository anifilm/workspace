// 2차원 배열의 3가지 선언 방법과 다양한 배열 선언
package chap05.section1.ex06;

public class RectangleArrayDefinition {
    public static void main(String[] args) {
        // 배열 선언 방법 1
        int[][] array1 = new int[3][4];
        int[][] array2;
        array2 = new int[3][4];

        // 배열 선언 방법 2
        int array3[][] = new int[3][4];
        int array4[][];
        array4 = new int[3][4];

        // 배열 선언 방법 3
        int[] array5[] = new int[3][4];
        int[] array6[];
        array6 = new int[3][4];

        // 다양한 배열 선언 (기본 자료형 배열, 참조 자료형 배열)
        boolean[][] array7 = new boolean[3][4];
        int[][] array8 = new int[2][4];
        double[][] array9 = new double[3][5];
        String[][] array10 = new String[2][6]; // 참조 자료형 배열
    }
}
