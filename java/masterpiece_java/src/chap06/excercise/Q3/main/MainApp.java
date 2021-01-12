/*
Q3
다음 코드를 수정하여, Calc 클래스는 etc 패키지에, MainApp 클래스는 main 패키지로 분리 작성하라.

 */
package chap06.excercise.Q3.main;
import chap06.excercise.Q3.etc.Calc;

public class MainApp {
    public static void main(String[] args) {
        Calc c = new Calc(10, 20);
        System.out.println(c.sum());
    }
}
