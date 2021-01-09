/*
Q11
다수의 클래스를 만들고 활용하는 연습을 해보자. 더하기(+), 빼기(-), 곱하기(*), 나누기(/)를 수행하는 각 클래스 Add, Sub, Mul, Div를
만들어라. 이들은 모두 다음 필드와 메서드를 가진다.
 - int 타입의 a, b 필드: 2개의 피연산자
 - void setValue(int a, int b): 피연산자 값을 객체 내에 저장한다.
 - int calculate(): 클래스의 목적에 맞는 연산을 실행하고 결과를 반환한다.

main() 메서드에서는 다음 실행 하례와 같이 두 정수와 연산자를 입력받고 Add, Sub, Mul, Div 중에서 이 연산을 실행할 수 있는 객체를 생성하고
setValue()와 calculate()를 호출하여 결과를 출력하도록 작성하라. (참고: 이 문제는 상속을 이용하여 다시 작성하도록 5장의 실습문제로 이어진다.)
  (실행 결과 생략...)

 */
package chap04.excercise;

import java.util.Scanner;

class Add {
    private int a, b;
    public void setValue(int a, int b) {
        this.a = a; this.b = b;
    }
    public int calculate() {
        return a + b;
    }
}

class Sub {
    private int a, b;
    public void setValue(int a, int b) {
        this.a = a; this.b = b;
    }
    public int calculate() {
        return a + b;
    }
}

class Mul {
    private int a, b;
    public void setValue(int a, int b) {
        this.a = a; this.b = b;
    }
    public int calculate() {
        return a * b;
    }
}

class Div {
    private int a, b;
    public void setValue(int a, int b) {
        this.a = a; this.b = b;
    }
    public int calculate() {
        return a / b;
    }
}

public class Q11_Calc {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("두 정수와 연산자를 입력하시오 >> ");
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        String op = scanner.next();
        int result = 0;
        switch (op) {
            case "+":
                Add add = new Add();
                add.setValue(num1, num2);
                result = add.calculate();
                break;
            case "-":
                Sub sub = new Sub();
                sub.setValue(num1, num2);
                result = sub.calculate();
                break;
            case "*":
                Mul mul = new Mul();
                mul.setValue(num1, num2);
                result = mul.calculate();
                break;
            case "/":
                Div div = new Div();
                div.setValue(num1, num2);
                result = div.calculate();
                break;
            default:
                System.out.println("잘못 입력하셨습니다. 다시 입력하세요.");
        }
        if (result > 0) System.out.println(result);

        scanner.close();
    }
}
