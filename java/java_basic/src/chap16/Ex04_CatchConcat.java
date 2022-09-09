package chap16;

import java.util.Scanner;
import java.util.InputMismatchException;

public class Ex04_CatchConcat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            int num1 = sc.nextInt();
            int num2 = 10 / num1;
            System.out.println(num2);
        }
        catch (ArithmeticException | InputMismatchException e) {  // [1] 예외 처리
        //  System.out.println(e.getMessage());
        //  e.printStackTrace();
            System.out.println("예외 발생");  // [2]
        }

        System.out.println("Good bye~~!");

        sc.close();
    }
}
