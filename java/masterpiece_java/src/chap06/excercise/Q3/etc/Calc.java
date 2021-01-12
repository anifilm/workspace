/*
Q3
다음 코드를 수정하여, Calc 클래스는 etc 패키지에, MainApp 클래스는 main 패키지로 분리 작성하라.

 */
package chap06.excercise.Q3.etc;

public class Calc {
    private int x, y;
    public Calc(int x, int y) { this.x = x; this.y = y; }
    public int sum() { return x + y; }
}
