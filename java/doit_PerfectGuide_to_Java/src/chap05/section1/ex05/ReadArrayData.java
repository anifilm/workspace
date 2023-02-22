// 1차원 배열의 요소값 출력
package chap05.section1.ex05;

import java.util.Arrays;

import javafx.scene.paint.StopBuilder;

public class ReadArrayData {
    public static void main(String[] args) {
        int[] array = new int[] { 3, 4, 5, 6, 7 };

        // 배열의 길이 구하기
        System.out.println(array.length);

        // 출력하기 1
        System.out.print(array[0] + " ");
        System.out.print(array[1] + " ");
        System.out.print(array[2] + " ");
        System.out.print(array[3] + " ");
        System.out.print(array[4] + " ");
        System.out.println();

        // 출력하기 2
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();

        // 출력하기 3
        for (int k : array) {
            System.out.print(k + " ");
        }
        System.out.println();

        // 출력하기 4
        System.out.println(Arrays.toString(array));
    }
}
