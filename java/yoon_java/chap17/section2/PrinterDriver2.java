//인터페이스 간 상속
interface Printable {  // MS사가 제공한 인터페이스
    void print(String doc);  // 흑백 출력을 위한 추상 메서드
}

class Prn204Drv implements Printable {  // S사의 흑백 프린터 드라이버
    @Override
    public void print(String doc) {
        System.out.println("From MD-204 printer");
        System.out.println(doc);
    }
}

class Prn731Drv implements Printable {  // L사의 흑백 프린터 드라이버
    @Override
    public void print(String doc) {
        System.out.println("From MD-731 printer");
        System.out.println(doc);
    }
}

class PrinterDriver2 {
    public static void main(String[] args) {
        String myDoc = "This is a report about...";

        Printable printer = new Prn204Drv();
        printer.print(myDoc);
        System.out.println();

        printer = new Prn731Drv();
        printer.print(myDoc);
        System.out.println();
    }
}
