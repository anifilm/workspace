package chap05;

import java.util.Scanner;

class Ex02_Scanner1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("숫자를 1 2 3 이렇게 입력하고 엔터를 입력하세요.");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int num3 = sc.nextInt();

        System.out.println("숫자를 1 입력하고 엔터를 입력하세요.");
        int num4 = sc.nextInt();
        System.out.println("숫자를 2 입력하고 엔터를 입력하세요.");
        int num5 = sc.nextInt();
        System.out.println("숫자를 3 입력하고 엔터를 입력하세요.");
        int num6 = sc.nextInt();

        System.out.printf("%d %d %d %d %d %d", num1, num2, num3, num4, num5, num6);

        sc.close();
    }
}
