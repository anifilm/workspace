package chap16;

import java.util.Scanner;

public class Ex05_Exception {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            int num1 = sc.nextInt();
            int num2 = 10 / num1;
            System.out.println(num2);
        }
        catch (Exception e) {  // [1]
        //  System.out.println(e.getMessage());
        //  e.printStackTrace();
            System.out.println("예외 발생");
        }

        System.out.println("Good bye~~!");

        sc.close();
    }
}
