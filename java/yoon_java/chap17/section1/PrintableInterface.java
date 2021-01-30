// 추상 메서드만 담고 있는 인터페이스
interface Printable {
    public void print(String doc);
}

class Printer implements Printable {  // Printable을 구현하는 Printer 클래스
    @Override
    public void print(String doc) {  // 오버라이딩 관계 성립
        System.out.println(doc);
    }
}

class PrintableInterface {
    public static void main(String[] args) {
        Printable printer = new Printer();  // Printable형 참조변수 선언 가능
        printer.print("Hello Java");
    }
}
