/*
Q3
Converter 클래스를 상속받아 원화를 달러로 변환하는 Won2Dollar 클래스를 작성하라. main() 메서드와 실행 결과는 다음과 같다.
  (main() 메서드, 실행 결과 생략...)

 */
package chap05.excercise;

import java.util.Scanner;

abstract class Converter {
    protected double ratio;  // 비율

    abstract protected double convert(double src);  // 추상 메서드
    abstract protected String getSrcString();   // 추상 메서드
    abstract protected String getDestString();  // 추상 메서드

    public void run () {
        Scanner scanner = new Scanner(System.in);
        System.out.println(getSrcString() + "을 " + getDestString() + "로 바꿉니다.");
        System.out.print(getSrcString() + "을 입력하세요 >> ");
        double val = scanner.nextDouble();
        double res = convert(val);
        System.out.println("변환 결과: " + res + getDestString() + "입니다.");
        scanner.close();
    }
}

class Won2Dollar extends Converter {
    public Won2Dollar(double ratio) {
        this.ratio = ratio;
    }
    @Override
    protected double convert(double src) {
        return src / ratio;
    }
    @Override
    protected String getSrcString() {
        return "원";
    }
    @Override
    protected String getDestString() {
        return "달러";
    }
}

public class Q3 {
    public static void main(String[] args) {
        Won2Dollar toDollar = new Won2Dollar(1200);  // 1달러는 1200원
        toDollar.run();
    }
}
