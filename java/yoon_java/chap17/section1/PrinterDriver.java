// 인터페이스의 본질적 의미
interface Printable {  // MS가 정의하고 제공한 인터페이스
    public void print(String doc);
}

class SPrinterDriver implements Printable {  // S사가 정의한 클래스
    @Override
    public void print(String doc) {
        System.out.println("From Samsung printer");
        System.out.println(doc);
    }
}

class LPrinterDriver implements Printable {  // L사가 정의한 클래스
    @Override
    public void print(String doc) {
        System.out.println("From LG printer");
        System.out.println(doc);
    }
}

class PrinterDriver {
    public static void main(String[] args) {
        String myDoc = "This is a report about...";

        // 삼성 프린터로 출력
        Printable printer = new SPrinterDriver();
        printer.print(myDoc);
        System.out.println();

        // LG 프린터로 출력
        printer = new LPrinterDriver();
        printer.print(myDoc);
        System.out.println();
    }
}
