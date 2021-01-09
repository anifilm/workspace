// 배열 원소의 평균 구하기
package chap03.section3;

import java.util.Scanner;

public class ArrayLength {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] intArray = new int[5];  // 배열 선언
        int sum = 0;

        System.out.print(intArray.length + "개의 정수를 입력하세요 >> ");
        for (int i = 0; i < intArray.length; i++)
            intArray[i] = scanner.nextInt();  // 입력받은 정수를 배열에 저장

        for (int i = 0; i < intArray.length; i++)
            sum += intArray[i];  // 배열에 저장된 정수 값 더하기

        System.out.println("평균은 " + (double)sum/ intArray.length + "입니다.");

        scanner.close();
    }
}
