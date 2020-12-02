// GenericPrinter<T> 클래스 정의하기
package chap12.section1.generics;

public class GenericPrinter<T> {    // 제네릭 클래스, <T> type의 약자. 자료형 매개변수
    private T material; // T 자료형으로 선언한 변수

    public void setMaterial(T material) {
        this.material = material;
    }
    // T 자료형 변수 material을 반환하는 제네릭 메서드
    public T getMaterial() {
        return material;
    }

    public String toString() {
        return material.toString();
    }
}
