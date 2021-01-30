// 인터페이스의 디폴트 메서드
interface Printable {
    void print(String doc);
    default void printCMYK(String doc) {}  // 인터페이스의 디폴트 메서드
}
/*
  디폴트 메서드의 특징
  - 자체로 완전한 메서드이다. (비록 인터페이스 내에 정의되어 있지만)
  - 따라서 이를 구현하는 클래스가 오버라이딩 하지 않아도 된다.
 */

class Prn731Drv implements Printable {
    @Override
    public void print(String doc) {
        System.out.println("From MD-731 printer");
        System.out.println(doc);
    }
}

class Prn909Drv implements Printable {
    @Override
    public void print(String doc) {
        System.out.println("From MD-909 black & white ver");
    }
    @Override
    public void printCMYK(String doc) {
        System.out.println("From MD-909 CMYK ver");
        System.out.println(doc);
    }
}
class PrinterDriver4 {
    public static void main(String[] args) {
        String myDoc = "This is a report about...";

        Printable printer1 = new Prn731Drv();
        printer1.print(myDoc);
        System.out.println();

        Printable printer2 = new Prn909Drv();
        printer2.printCMYK(myDoc);
        System.out.println();
    }
}
