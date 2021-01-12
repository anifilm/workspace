/*
Q11
철수 학생은 다음 3개의 필드와 메서드를 가진 4개의 클래스 Add, Sub, Mul, Div를 작성하려고 한다. (4장 실습 문제 11 참고)
 - int 형의 a, b 필드: 2개의 피연산자
 - void setValue(int a, int b): 피연산자 값을 객체 내에 저장한다.
 - int calculate(): 클래스의 목적에 맞는 연산을 실행하고 결과를 반환한다.

곰곰히 생각해보니, Add, Sub, Mul, Div 클래스에 공통된 필드와 메서드가 존재하므로 새로운 추상 클래스 Calc를 작성하고 Calc를 상속받아
만들면 되겠다고 생각했다. 그리고 main() 메서드에서 다음 실행 사례와 같이 2개의 정수와 연산자를 입력받은 후, Add, Sub, Mul, Div 중에서
이 연산을 처리할 수 있는 객체를 생성하고 setValue()와 calculate()를 호출하여 그 결과 값을 화면에 출력하면 된다고 생각하였다. 철수처럼
프로그램을 작성하라.
  (실행 결과 생략...)

 */
package chap05.excercise;

import java.util.Scanner;

abstract class Calc {
    protected int a, b;
    public void setValue(int a, int b) {
        this.a = a; this.b = b;
    }
    abstract int calculate();
}

class Add extends Calc {
    @Override
    public int calculate() {
        return a + b;
    }
}

class Sub extends Calc {
    @Override
    public int calculate() {
        return a + b;
    }
}

class Mul extends Calc {
    @Override
    public int calculate() {
        return a * b;
    }
}

class Div extends Calc {
    @Override
    public int calculate() {
        return a / b;
    }
}

public class Q11 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("두 정수와 연산자를 입력하시오 >> ");
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        char op = scanner.next().charAt(0);
        int result = 0;
        switch (op) {
            case '+':
                Add add = new Add();
                add.setValue(num1, num2);
                result = add.calculate();
                break;
            case '-':
                Sub sub = new Sub();
                sub.setValue(num1, num2);
                result = sub.calculate();
                break;
            case '*':
                Mul mul = new Mul();
                mul.setValue(num1, num2);
                result = mul.calculate();
                break;
            case '/':
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
