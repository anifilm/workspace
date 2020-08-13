package chap01;

import java.util.Scanner;

class Max3 {

    public static void main(String[] args) {

        Scanner stdIn = new Scanner(System.in);

        System.out.println("세 정수의 최대값을 구합니다.");
        System.out.println("a의 값: "); int a = stdIn.nextInt();
        System.out.println("b의 값: "); int b = stdIn.nextInt();
        System.out.println("c의 값: "); int c = stdIn.nextInt();
        
        int max = a;                // a, b, c의 최대값을 구하여 max에 대입
        if (b > max) max = b;
        if (c > max) max = c;

        System.out.println("최대값은 " + max + " 입니다.");
    }
}