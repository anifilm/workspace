package chap16;

import java.util.Scanner;

public class Ex01_ExceptionCase {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num1 = sc.nextInt();  // [1]
        int num2 = 10 / num1;

        System.out.println(num2);

    //  MyBook books1 = new MyBook();  // [2]

        sc.close();
    }
}
