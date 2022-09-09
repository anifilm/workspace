package chap16;

import java.util.Scanner;

public class Ex08_WhyThrow {
    public static void myMethod1() {
        try {
            myMethodA();  // 여기로 예외가 넘어옴
        }
        catch (Throwable e) {
            System.out.println("에러!!!");
        }
    }

    public static void myMethod2() {
        try {
            myMethodA();  // 여기로 예외가 넘어옴
        }
        catch (Throwable e) {
            System.out.println("Error!!!");
        }
    }

    public static void myMethodA() {
        Scanner sc = new Scanner(System.in);

        int num1 = sc.nextInt();  // 에러 발생 지점
        int num2 = 10 / num1;  // 에러 발생 지점
        System.out.println(num2);

        sc.close();
    }

    public static void main(String[] args) {
        myMethod1();  // [1] 한글 메시지 출력
        myMethod2();  // [2] 영문 메시지 출력
    }
}
