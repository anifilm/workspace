package chap16;

import java.util.Scanner;
import java.util.InputMismatchException;

public class Ex09_ThrowInMethod {
    public static void myMethod1() {  // [1]
        myMethod2();
    }

    public static void myMethod2() throws ArithmeticException, InputMismatchException {  // [2]
        Scanner sc = new Scanner(System.in);

        int num1 = sc.nextInt();  // 에러 발생 지점
        int num2 = 10 / num1;  // 에러 발생 지점
        System.out.println(num2);

        sc.close();
    }

    public static void main(String[] args) {
        try {
            myMethod1();
        }
        catch (ArithmeticException | InputMismatchException e) {
            e.printStackTrace();
        }
        System.out.println("-------");
    }
}
