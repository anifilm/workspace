// Powder 클래스 정의하기
package chap12.section1.generics2;

public class Powder extends Material {
    public void doPrinting() {
        System.out.println("Powder 재료로 출력합니다");
    }
    public String toString() {
        return "재료는 Powder 입니다";
    }
}
