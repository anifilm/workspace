// 어떤 재료든 사용할수 있도록 material 변수의 자료형을 Object로 사용
package generics;

public class ThreeDPrinter {
    private Object material;    // 재료가 Powder인 경우와 Plastic인 경우를 모두 만족할 수 있도록 Object로 자료형을 선언

    public void setMaterial(Object material) {
        this.material = material;
    }

    public Object getMaterial() {
        return material;
    }
}
