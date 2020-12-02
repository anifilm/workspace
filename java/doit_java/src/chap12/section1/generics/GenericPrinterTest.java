// GenericPrinter<T> 클래스 사용하기
package chap12.section1.generics;

public class GenericPrinterTest {
    public static void main(String[] args) {

        // Powder형으로 GenericPrinter 클래스 생성
        GenericPrinter<Powder> powderPrinter = new GenericPrinter<Powder>();
        powderPrinter.setMaterial(new Powder());
        Powder powder = powderPrinter.getMaterial();    // 명시적 형 변환을 하지 않음
        System.out.println(powderPrinter);
        System.out.println(powder);

        // Plastic형으로 GenericPrinter 클래스 생성
        GenericPrinter<Plastic> plasticPrinter = new GenericPrinter<Plastic>();
        plasticPrinter.setMaterial(new Plastic());
        Plastic plastic = plasticPrinter.getMaterial(); // 명시적 형 변환을 하지 않음
        System.out.println(plasticPrinter);
        System.out.println(plastic);

        // 제네릭에서 대입된 자료형을 명시하지 않는 경우
        GenericPrinter powderPrinter2 = new GenericPrinter();   // 대입된 자료형 <Powder>를 명시하지 않음
		powderPrinter2.setMaterial(new Powder());
		Powder powder2 = (Powder)powderPrinter2.getMaterial();
		System.out.println(powderPrinter2);
        System.out.println(powder2);
    }
}
