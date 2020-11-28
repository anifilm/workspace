package generics;

public class ThreeDPrinterTest {
    public static void main(String[] args) {

        ThreeDPrinter printer = new ThreeDPrinter();

        Powder p1 = new Powder();
        printer.setMaterial(p1);    // 자동 형 변환됨

        Powder p2 = (Powder)printer.getMaterial(); // 직접 형 변환을 해야 함
    }
}

/*

Powder p1 = new Powder();
printer.setMaterial(p1);    // 자동 형 변환됨

위의 코드를 그냥 사용시에 오류가 있었다.

이후에 나오는 Powder 클래스와 Plastic 클래스를 추가해야 함

 */