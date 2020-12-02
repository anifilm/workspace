// <T extends> 클래스 테스트 하기
package chap12.section1.generics2;

public class GenericPrinterTest {
    public static void main(String[] args) {

        // Powder형으로 GenericPrinter 클래스 생성
        GenericPrinter<Powder> powderPrinter = new GenericPrinter<Powder>();
        powderPrinter.setMaterial(new Powder());
        powderPrinter.printing();

        // Plastic형으로 GenericPrinter 클래스 생성
        GenericPrinter<Plastic> plasticPrinter = new GenericPrinter<Plastic>();
        plasticPrinter.setMaterial(new Plastic());
        plasticPrinter.printing();

        // 제네릭에서 대입된 자료형을 명시하지 않는 경우
        GenericPrinter powderPrinter2 = new GenericPrinter();   // 대입된 자료형 <Powder>를 명시하지 않음
		powderPrinter2.setMaterial(new Powder());
		powderPrinter2.printing();
    }
}
