package chap16;

import java.util.Scanner;
import java.util.InputMismatchException;  // [1]

public class Ex02_TryCatch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            int num1 = sc.nextInt();  // [2] 에러 발생 지점
            int num2 = 10 / num1;  // [3] 에러 발생 지점

            System.out.println(num2);  // [4]
            System.out.println("Good bye~~!");  // [5]
        }
        catch (ArithmeticException e) {  // [6] 예외 처리
            String str = e.getMessage();  // [7]
            System.out.println(str);
            if (str.equals("/ by zero")) {
                System.out.println("0으로 나눌 수 없습니다.");
            }
        }
        catch (InputMismatchException e) {  // [8] 예외 처리
            System.out.println(e.getMessage());  // [9]
        //  e.printStackTrace();  // [10]
        }

        sc.close();
    }
}
