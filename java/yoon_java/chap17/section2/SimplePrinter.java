// 인터페이스의 static 메서드 (클래스 메서드)
interface Printable {
    static void printLine(String str) {
        System.out.println(str);
    }
    default void print(String doc) {
        printLine(doc);  // 인터페이스의 static 메서드 호출
    }
}

// 인터페이스 Printable에는 구현해야 할 메서드가 존재하지 않는다. (인스턴스 생성을 위한 클래스 정의)
class Printer implements Printable {}

class SimplePrinter {
    public static void main(String[] args) {
        String myDoc = "This is a report about...";
        Printable printer = new Printer();
        printer.print(myDoc);

        // 인터페이스의 static 메서드 직접 호출
        Printable.printLine("end of line");
    }
}
