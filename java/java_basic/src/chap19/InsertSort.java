package chap19;

import java.util.Scanner;

public class InsertSort {
    public static void getNumber(int[] num) {
        Scanner sc = new Scanner(System.in);

        System.out.println("10개의 정수를 무작위로 입력하세요.");

        for (int i = 0; i < num.length; i++) {
            num[i] = sc.nextInt();
        }

        sc.close();
    }

    public static void insertSort(int[] num) {
        int size = num.length;
        int tmp = 0;
        int j = 0;

        for (int i = 1; i < size; i++) {
            tmp = num[i];
            for (j = i - 1; j >= 0 && tmp < num[j]; j--) {
                num[j + 1] = num[j];
            }
            num[j + 1] = tmp;
        }
    }

    public static void main(String[] args) {
        int[] num = new int[10];

        getNumber(num);

        insertSort(num);

        // 입력 확인용 출력
        for (int i = 0; i < num.length; i++) {
            System.out.print(num[i] + " ");
        }
        System.out.println();
    }
}
