/*
Q5
양의 정수를 10개 입력받아 배열에 저장하고, 배열에 있는 정수 중에서 3의 배수만 출력하는 프로그램을 작성하가.
  (실행 결과 생략...)

 */
package chap03.excercise;

import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] intArray = new int[10];

        System.out.print("양의 정수 10개를 입력하시오 >> ");
        for (int i = 0; i < 10; i++) {
            intArray[i] = scanner.nextInt();
        }

        System.out.print("3의 배수는 ");
        for (int i = 0; i < 10; i++) {
            if (intArray[i] % 3 == 0)
                System.out.print(intArray[i] + " ");
        }
        System.out.println();

        scanner.close();
    }
}
