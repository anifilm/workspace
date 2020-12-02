// GenericPrinter<T extends Material> 클래스 사용하기
package chap12.section1.generics2;

public class GenericPrinter<T extends Material> {   // extends 예약어로 사용할 수 있는 자료형에 제한을 둠
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

    public void printing() {
        material.doPrinting();  // 상위 클래스 Material의 메서드 호출
    }
}
